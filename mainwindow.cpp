#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

//! Constructor
/*!
 * \details This will start the program and read all information from the files
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readFromFile(users, fileName);
    ui->stackedWidget->setCurrentWidget(ui->loginPage); //always goes to first page

    QPixmap pic(":/resourcesImages/pamphlet cyberSec.jpeg");
    pic.scaled(ui->serviceOffers->width(),ui->serviceOffers->height(),Qt::KeepAspectRatio);
    ui->serviceOffers->setPixmap(pic);

}

//! Destructor
/*!
 * \details This will save all changes into a file and terminate the program
 */
MainWindow::~MainWindow()
{
    writeToFile(users, fileName);
    delete ui;
}

//! Login button
/*!
 * \brief It will let you log in into the program
 *
 * \details It will requiere the user to enter a username and password
 *           if correct, then it will proceed, otherwise it will prompt
 *           user that username or password is incorrect
 */
void MainWindow::on_pushButton_login_clicked()
{
    QString username, password;
    int index;
    user *userptr;

    username = ui->EditUser->text();  ///Read in the username
    password = ui->EditPass->text();  ///Read in the password

    /*! \if correct username and password it will log in
     *  \else it will prompt the user that username or password isn't correct
     */
    if(username == "Admin" || username == "admin")
    {
        if(password == "admin" || password == "password")
        {
            //If username and password are correct, go to main menu
            ui->stackedWidget->setCurrentWidget(ui->mainMenu);
        }
        else
        {
            QMessageBox::critical(this, "Login", "Login data is not correct!"); //admin password incorrect
        }
    }
    else
    {
        /*!
          *  \brief This will check if user is trying to log in with a customer account, if wrong username or
          *         password is provided it will let the user know.
          */
        index = 0;
        userptr = NULL;
        while(index < users.getSize() && userptr == NULL)
        {
            if(username == users[index].name)
            {
                userptr = &users[index];
            }
            index++;
        }

        if(userptr == NULL)
        {
            QMessageBox::critical(this, "Login", "Login data is not correct!"); //username incorrect
        }
        else
        {
            /*!
             *  \if password matches it will take the customer to the customer page
             */
            if(password == userptr->password)
            {
                ui->stackedWidget->setCurrentWidget(ui->displayService);
            }
            else
            {
                QMessageBox::critical(this, "Login", "Login data is not correct!"); //user password incorrect
            }
        }
    }
    ui->EditUser->clear();
    ui->EditPass->clear();
}

//! The close button
/*!
 * \brief The close button, to exit program
 */
void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}

//! PushButton to customer page
/*!
 * \brief This will take you to the view customer widget
 */
void MainWindow::on_pushButton_customers_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->ViewCustomer_2);
}

//! PushButton to key customer page
/*!
 * \brief This will take you to the view key customer widget
 */
void MainWindow::on_pushButton_keyCustomers_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->ViewKeyCustomer);
}

//! PushButton to add/remove
/*!
 * \brief This will take you to the add/remove widget
 */
void MainWindow::on_pushButton_addRemove_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->AddRemove);
}

//! PushButton to exit program
/*!
 * \brief This will exit the program from main menu widget
 */
void MainWindow::on_pushButton_exit_2_clicked()
{
    this->close();
}

//! PushButton to return to main menu and clear all fields
/*!
 * \brief This will return the user to the main menu
 */
void MainWindow::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
    ui->CustomerList->clear();
    ui->CustomerInfo->clear();
}

//! PushButton to return to customer view window
/*!
 * \brief This will return the user to the customer view window
 */
void MainWindow::on_pushButton_back_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->ViewCustomer_2);
}

//! PushButton to return to main menu
/*!
 * \brief This will return the user to the main menu
 */
void MainWindow::on_pushButton_back_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

//! PushButton to return to main menu
/*!
 * \brief This will return the user to the main menu
 */
void MainWindow::on_pushButton_back_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

//! PushButton to return to login page
/*!
 * \brief This will return the user to the login page
 */
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

//! PushButton to generate the customer list
/*!
 * \brief This will generate the list of customer into the list widget
 */
void MainWindow::on_pushButton_generateList_clicked()
{
    for(int index = 0; index < users.getSize(); index++)
    {
        ui->CustomerList->addItem(users[index].name);
    }
}

//! PushButton to view a customer information
/*!
 * \brief This will generate the appropiate information for each client
 */
void MainWindow::on_pushButton_viewCustomer_clicked()
{
    ui->CustomerInfo->clear();
    QListWidgetItem *item = ui->CustomerList->currentItem();
    int index;
    bool found;
    user *userptr;

    if(item != NULL)
    {
        index = 0;
        found = false;

        ///This will look for the selected customer in our list
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }

        /*!
         *  \if customer was found, it will display all the information
         */
        if(userptr != NULL)
        {
            ui->CustomerInfo->addItem("Name: " + userptr->name);
            ui->CustomerInfo->addItem("Password: " + userptr->password);
            ui->CustomerInfo->addItem("Address:");
            ui->CustomerInfo->addItem(userptr->address1);
            ui->CustomerInfo->addItem(userptr->address2);
            ui->CustomerInfo->addItem("This user is " + userptr->intrestLevel);

            if(userptr->isKey)
            {
                ui->CustomerInfo->addItem("*Key User*");
            }
            else
            {
                ui->CustomerInfo->addItem("User is nice to have");
            }
        }
        else
        {
            ui->CustomerInfo->addItem("User not found???"); //should never run
        }
    }
    else
    {
        ui->CustomerInfo->addItem("There is no member selected!!!");
    }
}

//! PushButton to take customer to the update window
/*!
 * \brief This will direct user to update widget to make any changes on clients
 */
void MainWindow::on_pushButton_updateCustomer_clicked()
{
    ui->customerInfo->clear();

    ui->stackedWidget->setCurrentWidget(ui->UpdateCustomer);

    QListWidgetItem *item = ui->CustomerList->currentItem();

    int index;
    bool found;
    user *userptr;

    if(item != NULL)
    {
        index = 0;
        found = false;

        ///This will look for the selected customer in our list
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }

        /*!
         *  \if customer was found, it will display all the information
         */
        if(userptr != NULL)
        {
            ui->customerInfo->addItem("Name: " + userptr->name);
            ui->customerInfo->addItem("Password: " + userptr->password);
            ui->customerInfo->addItem("Address:");
            ui->customerInfo->addItem(userptr->address1);
            ui->customerInfo->addItem(userptr->address2);
            ui->customerInfo->addItem("This user is " + userptr->intrestLevel);
            if(userptr->isKey)
            {
                ui->customerInfo->addItem("*Key User*");
            }
            else
            {
                ui->customerInfo->addItem("User is nice to have");
            }
        }
        else
        {
            ui->customerInfo->addItem("User not found???"); //should never run
        }
    }
    else
    {
        ui->customerInfo->addItem("Please go back and select a member!");
    }
}

//! PushButton to update a client
/*!
 * \brief This will update the desired client and save all changes
 */
void MainWindow::on_pushButton_update_clicked()
{
    QListWidgetItem *item = ui->CustomerList->currentItem();

    int index;
    bool found;
    user *userptr;

    if(item != NULL)
    {
        index = 0;
        found = false;

        ///It will look for the customer in our list
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }

        ///assign new changes into the customer
        userptr->intrestLevel = ui->rating->text();
        ui->rating->clear();
        if(ui->isKeyButton->isChecked())
        {
            userptr->isKey = true;
        }
        else
        {
            userptr->isKey = false;
        }
    }
    on_pushButton_updateCustomer_clicked(); //refreshes the info
}

//! PushButton to generate all the key members
/*!
 * \brief This will generate all the key clients from our database
 */
void MainWindow::on_pushButton_generateKey_clicked()
{
    for(int index = 0; index < users.getSize(); index++)
    {
        if(users[index].isKey)
        {
            ui->KeyList->addItem(users[index].name);
        }
    }
}

//! PushButton to view information about key clients
/*!
 * \brief This will generate all the key clients from our database
 */
void MainWindow::on_pushButton_view_clicked()
{
    ui->KeyData->clear();
    QListWidgetItem *item = ui->KeyList->currentItem();
    int index;
    bool found;
    user *userptr;

    if(item != NULL)
    {
        index = 0;
        found = false;

        ///It will look for customer to display
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }

        ///When found it will display all the information
        if(userptr != NULL)
        {
            ui->KeyData->addItem("Name: " + userptr->name);
            ui->KeyData->addItem("Password: " + userptr->password);
            ui->KeyData->addItem("Address:");
            ui->KeyData->addItem(userptr->address1);
            ui->KeyData->addItem(userptr->address2);
            ui->KeyData->addItem("This user is " + userptr->intrestLevel);
        }
        else
        {
            ui->KeyData->addItem("User not found???"); //should never run
        }
    }
    else
    {
        ui->KeyData->addItem("There is no member selected!!!");
    }
}

//! PushButton to remove a client from our database
/*!
 * \brief This will remove a chosen client from our database
 */
void MainWindow::on_pushButton_remove_clicked()
{
    int index = 0;
    bool found;

    ///This will look for the customer to be removed
    while(index < users.getSize() && !found)
    {
        if(users[index].name == ui->lineEdit_customerName->text())
        {
            found = true;
        }
        else
        {
            index++;
        }
    }

    ///When found it will delete the customer from our database
    if(found)
    {
        QMessageBox::critical(this, "Deleting", users[index].name + " is being deleted!");
        users.delElem(index);
    }
    else
    {
        QMessageBox::critical(this, "Error!!!", "There is no such user!!!");
    }
    ui->lineEdit_customerName->clear();
}

//! PushButton to add a client into our database
/*!
 * \brief This will add a member as a customer into our database
 */
void MainWindow::on_pushButton_add_clicked()
{
    ///Read in all new information for new customer
    QString name = ui->lineEdit_customerName->text();
    QString password = ui->lineEdit_password->text();
    QString address1 = ui->lineEdit_address_1->text();
    QString address2 = ui->lineEdit_address_2->text();
    QString rating = ui->lineEdit_rating->text();
    bool isKey = ui->radioButton->isChecked();

    user *userptr;

    ///This will add all the new information into a new struct of customer
    /// and assign proper information to it
    try
    {
        if(name == "" || password == "" || address1 == "" || address2 == "" || rating == "")
        {
            throw 1;
        }
        userptr = new user;
        userptr->name = name;
        userptr->password = password;
        userptr->address1 = address1;
        userptr->address2 = address2;
        userptr->intrestLevel = rating;
        userptr->isKey = isKey;
        users.push_back(*userptr);

        QMessageBox::critical(this, "Administrator", name + " has been added to the list");
    }
    catch(int a)
    {
        QMessageBox::critical(this, "Error!!!", "Please fill out all areas.");
    }

    ui->lineEdit_customerName->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_address_1->clear();
    ui->lineEdit_address_2->clear();
    ui->lineEdit_rating->clear();
}

//! PushButton to display a contact us information
/*!
 * \brief This will display to the user a how to contact us information
 */
void MainWindow::on_actionContact_us_triggered()
{
    QMessageBox::information(this, "Contact us", "To contact our customer service, please dial (905)753-1234");
}

//! PushButton to allow user to press enter in the login page to log in
/*!
 * \brief This will allow easier access to main menu by pressing "enter" in the keyboard
 */
void MainWindow::on_EditPass_returnPressed()
{
    ui->pushButton_login->click();  ///This allows to just press Enter on your keyboard to login!! ;)
}

//! PushButton to return to login page
/*!
 * \brief This will return the user to the login page
 */
void MainWindow::on_pushButton_backToLogin_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

//! PushButton to add the basic package to the cart
/*!
 * \brief This will add this package to the shopping cart
 */
void MainWindow::on_pushButton_basic_clicked()
{
    QMessageBox::information(this, "Your Cart", "The Basic Package has been added to your cart. Thank you for shopping with us!");
}

//! PushButton to add the business package to the cart
/*!
 * \brief This will add this package to the shopping cart
 */
void MainWindow::on_pushButton_business_clicked()
{
    QMessageBox::information(this, "Your Cart", "The Business Package has been added to your cart. Thank you for shopping with us!");
}

//! PushButton to add the enterprise package to the cart
/*!
 * \brief This will add this package to the shopping cart
 */
void MainWindow::on_pushButton_enterprise_clicked()
{
    QMessageBox::information(this, "Your Cart", "The Enterprise Package has been added to your cart. Thank you for shopping with us!");
}

