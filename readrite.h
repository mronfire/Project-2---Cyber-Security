#ifndef READRITE_H
#define READRITE_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <fstream>
#include <iostream>
#include "vector.h"

struct user
{
    QString name;
    QString password;
    QString address1;
    QString address2;
    QString intrestLevel; //very, somewhat, or not interested
    bool isKey; //key or nice to have
};

void readFromFile(vector<user> &users, QString inFile);
void writeToFile(vector<user> &users, QString outFile);

#endif // READRITE_H
