#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readFromFile(users, fileName);
    ui->stackedWidget->setCurrentWidget(ui->loginPage); //always goes to first page
}

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
            if(password == userptr->password)
            {
                QMessageBox::critical(this, "CyberSecurity", "Please buy our stuff!");
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

void MainWindow::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
    ui->CustomerList->clear();
    ui->CustomerInfo->clear();
}

void MainWindow::on_pushButton_back_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->ViewCustomer_2);
}

void MainWindow::on_pushButton_back_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

void MainWindow::on_pushButton_back_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->mainMenu);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

void MainWindow::on_pushButton_generateList_clicked()
{
    for(int index = 0; index < users.getSize(); index++)
    {
        ui->CustomerList->addItem(users[index].name);
    }
}

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
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }
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
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }
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
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }
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
        while(index < users.getSize() && !found)
        {
            if(item->text() == users[index].name)
            {
                found = true;
                userptr = &users[index];
            }
            index++;
        }
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

void MainWindow::on_pushButton_remove_clicked()
{
    int index = 0;
    bool found;
    while(index < users.getSize())
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

    if(found)
    {
        users.delElem(index);
        QMessageBox::critical(this, "Deleting", users[index].name + " is being deleted!");

    }
    else
    {
        QMessageBox::critical(this, "Error!!!", "There is no such user!!!");
    }
    ui->lineEdit_customerName->clear();
}

void MainWindow::on_pushButton_add_clicked()
{
    QString name = ui->lineEdit_customerName->text();
    QString password = ui->lineEdit_password->text();
    QString name = ui->lineEdit_customerName->text();
    QString name = ui->lineEdit_customerName->text();
    QString name = ui->lineEdit_customerName->text();
    QString name = ui->lineEdit_customerName->text();

    try
    {
        if()
        {

        }
    }
    catch(int a)
    {

    }

    ui->lineEdit_customerName->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_address_1->clear();
    ui->lineEdit_address_2->clear();
    ui->lineEdit_rating->clear();
}
