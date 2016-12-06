#include"readrite.h"

void readFromFile(vector<user> &users, QString inFile)
{
    user *userptr;
    QString isKey;

    QFile userFile(inFile);
    userFile.open(QIODevice::ReadOnly | QIODevice::Text);

    while(!userFile.atEnd())
    {
        userptr = new user;
        userptr->name = userfile.readline();
        userptr->name = userptr->name.left(userptr->name.length()-1);
        userptr->password = userfile.readline();
        userptr->password = userptr->password.left(userptr->password.length()-1);
        userptr->address1 = userfile.readline();
        userptr->address1 = userptr->address1.left(userptr->address1.length()-1);
        userptr->address2 = userfile.readline();
        userptr->address2 = userptr->address2.left(userptr->address2.length()-1);
        userptr->intrestLevel = userfile.readline();
        userptr->intrestLevel = userptr->intrestLevel.left(userptr->intrestLevel.length()-1);
        isKey = userFile.readLine();

        if(isKey == "key\n")
        {
            userptr->isKey = true;
        }
        else
        {
            userptr->isKey = false;
        }

    }
}

void writeToFile(vector<user> &users, QString outFile)
{

}
