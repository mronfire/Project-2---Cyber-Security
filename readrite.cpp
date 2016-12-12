#include"readrite.h"

/*!
 * \brief readFromFile - This will read all the customer accounts from a file
 *                       and store them into the vector
 * \param users
 * \param inFile
 */
void readFromFile(vector<user> &users, QString inFile)
{
    user *userptr;
    QString isKey;

    QFile userFile(inFile);
    userFile.open(QIODevice::ReadOnly | QIODevice::Text);

    ///This will read in into the vector all information from the file
    while(!userFile.atEnd())
    {
        userptr = new user;
        userptr->name = userFile.readLine();
        userptr->name = userptr->name.left(userptr->name.length()-1);
        userptr->password = userFile.readLine();
        userptr->password = userptr->password.left(userptr->password.length()-1);
        userptr->address1 = userFile.readLine();
        userptr->address1 = userptr->address1.left(userptr->address1.length()-1);
        userptr->address2 = userFile.readLine();
        userptr->address2 = userptr->address2.left(userptr->address2.length()-1);
        userptr->intrestLevel = userFile.readLine();
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

        users.push_back(*userptr);
    }

    userFile.close();
    std::cout << "done loading users!\n";
}

/*!
 * \brief writeToFile - This will write all data and changes into the same file
 * \param users
 * \param outFile
 */
void writeToFile(vector<user> &users, QString outFile)
{
    int length = users.getSize();

    QFile userFile(outFile);
    userFile.open(QIODevice::ReadWrite);
    QTextStream fout(&userFile);

    ///This will output all information from the file
    for(int index = 0; index < length; index++)
    {
        fout << users[index].name << endl <<
                users[index].password << endl <<
                users[index].address1 << endl <<
                users[index].address2 << endl <<
                users[index].intrestLevel << endl;
        if(users[index].isKey)
        {
            fout << "key\n";
        }
        else
        {
            fout << "nice to have\n";
        }
    }

    userFile.close();
}









