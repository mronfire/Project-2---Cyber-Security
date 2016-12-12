#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "readrite.h"

namespace Ui {
class MainWindow;
}

//!  The MainWindow class.
/*!
 * \brief This class is the mother of all. It is the main window which contains
 *        all slots and widgets running the program.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! The constructor
    /*!
     * \brief It will create the main window
     * \param parent
     */
    explicit MainWindow(QWidget *parent = 0);

    //! The Destructor
    /*!
     * \brief
     */
    ~MainWindow();

private slots:
    //! Login button
    /*!
     * \brief It will let you log in into the program
     */
    void on_pushButton_login_clicked();

    //! The close button
    /*!
     * \brief The close button, to exit program
     */
    void on_pushButton_exit_clicked();

    //! PushButton to customer page
    /*!
     * \brief This will take you to the view customer widget
     */
    void on_pushButton_customers_clicked();

    //! PushButton to key customer page
    /*!
     * \brief This will take you to the view key customer widget
     */
    void on_pushButton_keyCustomers_clicked();

    //! PushButton to add/remove
    /*!
     * \brief This will take you to the add/remove widget
     */
    void on_pushButton_addRemove_clicked();

    //! PushButton to exit program
    /*!
     * \brief This will exit the program from main menu widget
     */
    void on_pushButton_exit_2_clicked();

    //! PushButton to return to main menu and clear all fields
    /*!
     * \brief This will return the user to the main menu
     */
    void on_pushButton_back_clicked();

    //! PushButton to return to customer view window
    /*!
     * \brief This will return the user to the customer view window
     */
    void on_pushButton_back_2_clicked();

    //! PushButton to return to main menu
    /*!
     * \brief This will return the user to the main menu
     */
    void on_pushButton_back_3_clicked();

    //! PushButton to return to main menu
    /*!
     * \brief This will return the user to the main menu
     */
    void on_pushButton_back_4_clicked();

    //! PushButton to return to login page
    /*!
     * \brief This will return the user to the login page
     */
    void on_pushButton_clicked();

    //! PushButton to generate the customer list
    /*!
     * \brief This will generate the list of customer into the list widget
     */
    void on_pushButton_generateList_clicked();

    //! PushButton to view a customer information
    /*!
     * \brief This will generate the appropiate information for each client
     */
    void on_pushButton_viewCustomer_clicked();

    //! PushButton to take customer to the update window
    /*!
     * \brief This will direct user to update widget to make any changes on clients
     */
    void on_pushButton_updateCustomer_clicked();

    //! PushButton to update a client
    /*!
     * \brief This will update the desired client and save all changes
     */
    void on_pushButton_update_clicked();

    //! PushButton to generate all the key members
    /*!
     * \brief This will generate all the key clients from our database
     */
    void on_pushButton_generateKey_clicked();

    //! PushButton to view information about key clients
    /*!
     * \brief This will generate all the key clients from our database
     */
    void on_pushButton_view_clicked();

    //! PushButton to remove a client from our database
    /*!
     * \brief This will remove a chosen client from our database
     */
    void on_pushButton_remove_clicked();

    //! PushButton to add a client into our database
    /*!
     * \brief This will add a member as a customer into our database
     */
    void on_pushButton_add_clicked();

    //! PushButton to allow user to press enter in the login page to log in
    /*!
     * \brief This will allow easier access to main menu by pressing "enter" in the keyboard
     */
    void on_EditPass_returnPressed();

    //! PushButton to return to login page
    /*!
     * \brief This will return the user to the login page
     */
    void on_pushButton_backToLogin_clicked();

    //! PushButton to add the basic package to the cart
    /*!
     * \brief This will add this package to the shopping cart
     */
    void on_pushButton_basic_clicked();

    //! PushButton to add the business package to the cart
    /*!
     * \brief This will add this package to the shopping cart
     */
    void on_pushButton_business_clicked();

    //! PushButton to add the enterprise package to the cart
    /*!
     * \brief This will add this package to the shopping cart
     */
    void on_pushButton_enterprise_clicked();

    //! PushButton to display a contact us information
    /*!
     * \brief This will display to the user a how to contact us information
     */
    void on_actionContact_us_triggered();

private:
    QString fileName = "C:/Users/marod/Desktop/Project-2---Cyber-Security/users.txt"; /*!< Path file name to customers database */
    vector<user> users;      /*!< A variable of type vector */
    Ui::MainWindow *ui;      /*!< A MainWindow pointer to UI */
};

#endif // MAINWINDOW_H
