#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
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

    username = ui->EditUser->text();      ///Read in the username
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
            QMessageBox::critical(this, "Login", "Password is not correct!");
        }
    }
    else
    {
        QMessageBox::critical(this, "Login", "Username is not correct!");
    }
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
