#ifndef READRITE_H
#define READRITE_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <fstream>
#include <iostream>
#include "vector.h"

/*!
 * \brief The user struct
 * \details This is the user struct to hold the respective fields
 *          related to a customer.
 */
struct user
{
    QString name;
    QString password;
    QString address1;
    QString address2;
    QString intrestLevel; //very, somewhat, or not interested
    bool isKey; //key or nice to have
};

/*!
 * \brief readFromFile - This will read all the customer accounts from a file
 *                       and store them into the vector
 * \param users
 * \param inFile
 */
void readFromFile(vector<user> &users, QString inFile);

/*!
 * \brief writeToFile - This will write all data and changes into the same file
 * \param users
 * \param outFile
 */
void writeToFile(vector<user> &users, QString outFile);

#endif // READRITE_H
