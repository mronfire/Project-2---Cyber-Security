/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *EditPass;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *EditUser;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_login;
    QWidget *displayService;
    QVBoxLayout *verticalLayout_2;
    QLabel *serviceOffers;
    QPushButton *pushButton_basic;
    QPushButton *pushButton_business;
    QPushButton *pushButton_enterprise;
    QPushButton *pushButton_backToLogin;
    QWidget *mainMenu;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_customers;
    QLabel *viewKeyLabel;
    QPushButton *pushButton_addRemove;
    QLabel *viewLabel;
    QLabel *addLabel;
    QPushButton *pushButton_keyCustomers;
    QLabel *exitLabel;
    QPushButton *pushButton_exit_2;
    QLabel *menuLabel;
    QPushButton *pushButton;
    QLabel *label_14;
    QWidget *ViewCustomer_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_updateCustomer;
    QPushButton *pushButton_generateList;
    QLabel *label_3;
    QPushButton *pushButton_viewCustomer;
    QPushButton *pushButton_back;
    QLabel *label_8;
    QListWidget *CustomerList;
    QListWidget *CustomerInfo;
    QWidget *UpdateCustomer;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *rating;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_update;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QListWidget *customerInfo;
    QPushButton *pushButton_back_2;
    QRadioButton *isKeyButton;
    QWidget *ViewKeyCustomer;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QListWidget *KeyData;
    QPushButton *pushButton_generateKey;
    QPushButton *pushButton_view;
    QPushButton *pushButton_back_3;
    QListWidget *KeyList;
    QWidget *AddRemove;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_address_2;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_address_1;
    QLineEdit *lineEdit_customerName;
    QLabel *label_9;
    QPushButton *pushButton_back_4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_7;
    QLabel *label_13;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_add;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_password;
    QLabel *label_16;
    QLineEdit *lineEdit_rating;
    QLabel *label_11;
    QRadioButton *radioButton;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(861, 621);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        verticalLayout = new QVBoxLayout(loginPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        EditPass = new QLineEdit(loginPage);
        EditPass->setObjectName(QStringLiteral("EditPass"));
        EditPass->setEchoMode(QLineEdit::Password);
        EditPass->setClearButtonEnabled(true);

        gridLayout->addWidget(EditPass, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);

        EditUser = new QLineEdit(loginPage);
        EditUser->setObjectName(QStringLiteral("EditUser"));

        gridLayout->addWidget(EditUser, 1, 2, 1, 1);

        pushButton_exit = new QPushButton(loginPage);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        gridLayout->addWidget(pushButton_exit, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 3, 1, 1);

        label = new QLabel(loginPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        pushButton_login = new QPushButton(loginPage);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        gridLayout->addWidget(pushButton_login, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        stackedWidget->addWidget(loginPage);
        displayService = new QWidget();
        displayService->setObjectName(QStringLiteral("displayService"));
        verticalLayout_2 = new QVBoxLayout(displayService);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        serviceOffers = new QLabel(displayService);
        serviceOffers->setObjectName(QStringLiteral("serviceOffers"));
        serviceOffers->setPixmap(QPixmap(QString::fromUtf8(":/resourcesImages/pamphlet cyberSec.jpeg")));
        serviceOffers->setScaledContents(true);
        serviceOffers->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(serviceOffers);

        pushButton_basic = new QPushButton(displayService);
        pushButton_basic->setObjectName(QStringLiteral("pushButton_basic"));

        verticalLayout_2->addWidget(pushButton_basic);

        pushButton_business = new QPushButton(displayService);
        pushButton_business->setObjectName(QStringLiteral("pushButton_business"));

        verticalLayout_2->addWidget(pushButton_business);

        pushButton_enterprise = new QPushButton(displayService);
        pushButton_enterprise->setObjectName(QStringLiteral("pushButton_enterprise"));

        verticalLayout_2->addWidget(pushButton_enterprise);

        pushButton_backToLogin = new QPushButton(displayService);
        pushButton_backToLogin->setObjectName(QStringLiteral("pushButton_backToLogin"));

        verticalLayout_2->addWidget(pushButton_backToLogin);

        stackedWidget->addWidget(displayService);
        mainMenu = new QWidget();
        mainMenu->setObjectName(QStringLiteral("mainMenu"));
        verticalLayout_4 = new QVBoxLayout(mainMenu);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 6, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_6, 0, 1, 1, 1);

        pushButton_customers = new QPushButton(mainMenu);
        pushButton_customers->setObjectName(QStringLiteral("pushButton_customers"));

        gridLayout_4->addWidget(pushButton_customers, 1, 1, 1, 1);

        viewKeyLabel = new QLabel(mainMenu);
        viewKeyLabel->setObjectName(QStringLiteral("viewKeyLabel"));

        gridLayout_4->addWidget(viewKeyLabel, 2, 0, 1, 1);

        pushButton_addRemove = new QPushButton(mainMenu);
        pushButton_addRemove->setObjectName(QStringLiteral("pushButton_addRemove"));

        gridLayout_4->addWidget(pushButton_addRemove, 3, 1, 1, 1);

        viewLabel = new QLabel(mainMenu);
        viewLabel->setObjectName(QStringLiteral("viewLabel"));

        gridLayout_4->addWidget(viewLabel, 1, 0, 1, 1);

        addLabel = new QLabel(mainMenu);
        addLabel->setObjectName(QStringLiteral("addLabel"));

        gridLayout_4->addWidget(addLabel, 3, 0, 1, 1);

        pushButton_keyCustomers = new QPushButton(mainMenu);
        pushButton_keyCustomers->setObjectName(QStringLiteral("pushButton_keyCustomers"));

        gridLayout_4->addWidget(pushButton_keyCustomers, 2, 1, 1, 1);

        exitLabel = new QLabel(mainMenu);
        exitLabel->setObjectName(QStringLiteral("exitLabel"));

        gridLayout_4->addWidget(exitLabel, 5, 0, 1, 1);

        pushButton_exit_2 = new QPushButton(mainMenu);
        pushButton_exit_2->setObjectName(QStringLiteral("pushButton_exit_2"));

        gridLayout_4->addWidget(pushButton_exit_2, 5, 1, 1, 1);

        menuLabel = new QLabel(mainMenu);
        menuLabel->setObjectName(QStringLiteral("menuLabel"));

        gridLayout_4->addWidget(menuLabel, 0, 0, 1, 1);

        pushButton = new QPushButton(mainMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_4->addWidget(pushButton, 4, 1, 1, 1);

        label_14 = new QLabel(mainMenu);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 4, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        stackedWidget->addWidget(mainMenu);
        ViewCustomer_2 = new QWidget();
        ViewCustomer_2->setObjectName(QStringLiteral("ViewCustomer_2"));
        verticalLayout_3 = new QVBoxLayout(ViewCustomer_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_updateCustomer = new QPushButton(ViewCustomer_2);
        pushButton_updateCustomer->setObjectName(QStringLiteral("pushButton_updateCustomer"));

        gridLayout_2->addWidget(pushButton_updateCustomer, 4, 0, 1, 2);

        pushButton_generateList = new QPushButton(ViewCustomer_2);
        pushButton_generateList->setObjectName(QStringLiteral("pushButton_generateList"));

        gridLayout_2->addWidget(pushButton_generateList, 2, 0, 1, 2);

        label_3 = new QLabel(ViewCustomer_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        pushButton_viewCustomer = new QPushButton(ViewCustomer_2);
        pushButton_viewCustomer->setObjectName(QStringLiteral("pushButton_viewCustomer"));

        gridLayout_2->addWidget(pushButton_viewCustomer, 3, 0, 1, 2);

        pushButton_back = new QPushButton(ViewCustomer_2);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        gridLayout_2->addWidget(pushButton_back, 5, 0, 1, 2);

        label_8 = new QLabel(ViewCustomer_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        CustomerList = new QListWidget(ViewCustomer_2);
        CustomerList->setObjectName(QStringLiteral("CustomerList"));

        gridLayout_2->addWidget(CustomerList, 1, 0, 1, 1);

        CustomerInfo = new QListWidget(ViewCustomer_2);
        CustomerInfo->setObjectName(QStringLiteral("CustomerInfo"));

        gridLayout_2->addWidget(CustomerInfo, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        stackedWidget->addWidget(ViewCustomer_2);
        UpdateCustomer = new QWidget();
        UpdateCustomer->setObjectName(QStringLiteral("UpdateCustomer"));
        verticalLayout_5 = new QVBoxLayout(UpdateCustomer);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        rating = new QLineEdit(UpdateCustomer);
        rating->setObjectName(QStringLiteral("rating"));

        gridLayout_3->addWidget(rating, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        label_5 = new QLabel(UpdateCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 1, 1, 1, Qt::AlignRight);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 0, 2, 1, 1);

        pushButton_update = new QPushButton(UpdateCustomer);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));

        gridLayout_3->addWidget(pushButton_update, 4, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 6, 2, 1, 1);

        label_4 = new QLabel(UpdateCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 1, 1, 1, Qt::AlignRight);

        customerInfo = new QListWidget(UpdateCustomer);
        customerInfo->setObjectName(QStringLiteral("customerInfo"));

        gridLayout_3->addWidget(customerInfo, 1, 1, 1, 2);

        pushButton_back_2 = new QPushButton(UpdateCustomer);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));

        gridLayout_3->addWidget(pushButton_back_2, 5, 1, 1, 2);

        isKeyButton = new QRadioButton(UpdateCustomer);
        isKeyButton->setObjectName(QStringLiteral("isKeyButton"));

        gridLayout_3->addWidget(isKeyButton, 3, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);

        stackedWidget->addWidget(UpdateCustomer);
        ViewKeyCustomer = new QWidget();
        ViewKeyCustomer->setObjectName(QStringLiteral("ViewKeyCustomer"));
        verticalLayout_7 = new QVBoxLayout(ViewKeyCustomer);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_6 = new QLabel(ViewKeyCustomer);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        KeyData = new QListWidget(ViewKeyCustomer);
        KeyData->setObjectName(QStringLiteral("KeyData"));

        gridLayout_5->addWidget(KeyData, 1, 1, 1, 1);

        pushButton_generateKey = new QPushButton(ViewKeyCustomer);
        pushButton_generateKey->setObjectName(QStringLiteral("pushButton_generateKey"));

        gridLayout_5->addWidget(pushButton_generateKey, 2, 0, 1, 2);

        pushButton_view = new QPushButton(ViewKeyCustomer);
        pushButton_view->setObjectName(QStringLiteral("pushButton_view"));

        gridLayout_5->addWidget(pushButton_view, 3, 0, 1, 2);

        pushButton_back_3 = new QPushButton(ViewKeyCustomer);
        pushButton_back_3->setObjectName(QStringLiteral("pushButton_back_3"));

        gridLayout_5->addWidget(pushButton_back_3, 4, 0, 1, 2);

        KeyList = new QListWidget(ViewKeyCustomer);
        KeyList->setObjectName(QStringLiteral("KeyList"));

        gridLayout_5->addWidget(KeyList, 1, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_5);

        stackedWidget->addWidget(ViewKeyCustomer);
        AddRemove = new QWidget();
        AddRemove->setObjectName(QStringLiteral("AddRemove"));
        verticalLayout_6 = new QVBoxLayout(AddRemove);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lineEdit_address_2 = new QLineEdit(AddRemove);
        lineEdit_address_2->setObjectName(QStringLiteral("lineEdit_address_2"));

        gridLayout_6->addWidget(lineEdit_address_2, 5, 2, 1, 1);

        label_12 = new QLabel(AddRemove);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 5, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 1, 0, 10, 1);

        lineEdit_address_1 = new QLineEdit(AddRemove);
        lineEdit_address_1->setObjectName(QStringLiteral("lineEdit_address_1"));

        gridLayout_6->addWidget(lineEdit_address_1, 4, 2, 1, 1);

        lineEdit_customerName = new QLineEdit(AddRemove);
        lineEdit_customerName->setObjectName(QStringLiteral("lineEdit_customerName"));

        gridLayout_6->addWidget(lineEdit_customerName, 2, 2, 1, 1);

        label_9 = new QLabel(AddRemove);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 4, 1, 1, 1);

        pushButton_back_4 = new QPushButton(AddRemove);
        pushButton_back_4->setObjectName(QStringLiteral("pushButton_back_4"));

        gridLayout_6->addWidget(pushButton_back_4, 10, 1, 1, 2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 0, 1, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 11, 1, 1, 2);

        label_7 = new QLabel(AddRemove);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 2, 1, 1, 1);

        label_13 = new QLabel(AddRemove);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 1, 2, 1, 1);

        pushButton_remove = new QPushButton(AddRemove);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));

        gridLayout_6->addWidget(pushButton_remove, 9, 1, 1, 2);

        pushButton_add = new QPushButton(AddRemove);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout_6->addWidget(pushButton_add, 8, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 1, 3, 10, 1);

        lineEdit_password = new QLineEdit(AddRemove);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        gridLayout_6->addWidget(lineEdit_password, 3, 2, 1, 1);

        label_16 = new QLabel(AddRemove);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_6->addWidget(label_16, 3, 1, 1, 1);

        lineEdit_rating = new QLineEdit(AddRemove);
        lineEdit_rating->setObjectName(QStringLiteral("lineEdit_rating"));

        gridLayout_6->addWidget(lineEdit_rating, 6, 2, 1, 1);

        label_11 = new QLabel(AddRemove);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 6, 1, 1, 1);

        radioButton = new QRadioButton(AddRemove);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_6->addWidget(radioButton, 7, 2, 1, 1);

        label_10 = new QLabel(AddRemove);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 7, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_6);

        stackedWidget->addWidget(AddRemove);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 861, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(EditUser, EditPass);
        QWidget::setTabOrder(EditPass, pushButton_login);
        QWidget::setTabOrder(pushButton_login, pushButton_exit);
        QWidget::setTabOrder(pushButton_exit, pushButton_customers);
        QWidget::setTabOrder(pushButton_customers, pushButton_keyCustomers);
        QWidget::setTabOrder(pushButton_keyCustomers, pushButton_addRemove);
        QWidget::setTabOrder(pushButton_addRemove, pushButton_exit_2);
        QWidget::setTabOrder(pushButton_exit_2, pushButton_generateList);
        QWidget::setTabOrder(pushButton_generateList, pushButton_viewCustomer);
        QWidget::setTabOrder(pushButton_viewCustomer, pushButton_updateCustomer);
        QWidget::setTabOrder(pushButton_updateCustomer, pushButton_back);
        QWidget::setTabOrder(pushButton_back, customerInfo);
        QWidget::setTabOrder(customerInfo, rating);
        QWidget::setTabOrder(rating, pushButton_update);
        QWidget::setTabOrder(pushButton_update, pushButton_back_2);
        QWidget::setTabOrder(pushButton_back_2, KeyData);
        QWidget::setTabOrder(KeyData, pushButton_generateKey);
        QWidget::setTabOrder(pushButton_generateKey, pushButton_view);
        QWidget::setTabOrder(pushButton_view, pushButton_back_3);
        QWidget::setTabOrder(pushButton_back_3, lineEdit_customerName);
        QWidget::setTabOrder(lineEdit_customerName, lineEdit_address_1);
        QWidget::setTabOrder(lineEdit_address_1, lineEdit_address_2);
        QWidget::setTabOrder(lineEdit_address_2, pushButton_back_4);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label->setText(QApplication::translate("MainWindow", "Username:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password:", 0));
        pushButton_login->setText(QApplication::translate("MainWindow", "Login", 0));
        serviceOffers->setText(QString());
        pushButton_basic->setText(QApplication::translate("MainWindow", "Buy Basic Service - $19.99", 0));
        pushButton_business->setText(QApplication::translate("MainWindow", "Buy Business Service - $49.99", 0));
        pushButton_enterprise->setText(QApplication::translate("MainWindow", "Buy Enterprise Service - $79.99", 0));
        pushButton_backToLogin->setText(QApplication::translate("MainWindow", "Back to Login", 0));
        pushButton_customers->setText(QApplication::translate("MainWindow", "OK", 0));
        viewKeyLabel->setText(QApplication::translate("MainWindow", "2 - View Key Customers:", 0));
        pushButton_addRemove->setText(QApplication::translate("MainWindow", "OK", 0));
        viewLabel->setText(QApplication::translate("MainWindow", "1 - View Customers:", 0));
        addLabel->setText(QApplication::translate("MainWindow", "3 - Add or Remove Customer:", 0));
        pushButton_keyCustomers->setText(QApplication::translate("MainWindow", "OK", 0));
        exitLabel->setText(QApplication::translate("MainWindow", "5 - Exit", 0));
        pushButton_exit_2->setText(QApplication::translate("MainWindow", "Exit", 0));
        menuLabel->setText(QApplication::translate("MainWindow", "Main Menu", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Back", 0));
        label_14->setText(QApplication::translate("MainWindow", "4 - Back to Login", 0));
        pushButton_updateCustomer->setText(QApplication::translate("MainWindow", "Update Customer", 0));
        pushButton_generateList->setText(QApplication::translate("MainWindow", "Customer List", 0));
        label_3->setText(QApplication::translate("MainWindow", "Customer List:", 0));
        pushButton_viewCustomer->setText(QApplication::translate("MainWindow", "View Customer", 0));
        pushButton_back->setText(QApplication::translate("MainWindow", "Back", 0));
        label_8->setText(QApplication::translate("MainWindow", "Customer Info:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Key Member:", 0));
        pushButton_update->setText(QApplication::translate("MainWindow", "Update", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rating:", 0));
        pushButton_back_2->setText(QApplication::translate("MainWindow", "Back", 0));
        isKeyButton->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Key Customers:", 0));
        pushButton_generateKey->setText(QApplication::translate("MainWindow", "Show List", 0));
        pushButton_view->setText(QApplication::translate("MainWindow", "View Customer", 0));
        pushButton_back_3->setText(QApplication::translate("MainWindow", "Back", 0));
        label_12->setText(QApplication::translate("MainWindow", "Address Line 2", 0));
        label_9->setText(QApplication::translate("MainWindow", "Address Line 1", 0));
        pushButton_back_4->setText(QApplication::translate("MainWindow", "Back", 0));
        label_7->setText(QApplication::translate("MainWindow", "Customer Name", 0));
        label_13->setText(QApplication::translate("MainWindow", "Enter Customer Information", 0));
        pushButton_remove->setText(QApplication::translate("MainWindow", "Remove", 0));
        pushButton_add->setText(QApplication::translate("MainWindow", "Add", 0));
        label_16->setText(QApplication::translate("MainWindow", "Password", 0));
        label_11->setText(QApplication::translate("MainWindow", "Rating", 0));
        radioButton->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Key Customer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
