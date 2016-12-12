#include "mainwindow.h"
#include <QApplication>

//! Main Progran
/*!
 * \brief This is the main.cpp
 *
 * \details This program will create a user-friendly connection between
 *          a cyber security program and customer around the globe. We
 *          will provide customers with different packages to include
 *          in their daily business cycle and ensure they have protection
 *          agaisnt cyber criminals.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
