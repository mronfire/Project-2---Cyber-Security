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

    void on_pushButton_back_clicked();

    void on_pushButton_back_2_clicked();

    void on_pushButton_back_3_clicked();

    void on_pushButton_back_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_generateList_clicked();

    void on_pushButton_viewCustomer_clicked();

    void on_pushButton_updateCustomer_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_generateKey_clicked();

    void on_pushButton_view_clicked();

    void on_pushButton_remove_clicked();

    void on_pushButton_add_clicked();

private:
    QString fileName = "C:/Users/mnelson39/Desktop/Project-2---Cyber-Security-master/users.txt";
    vector<user> users;
    Ui::MainWindow *ui;      /*!< A MainWindow pointer to UI */
};

#endif // MAINWINDOW_H
