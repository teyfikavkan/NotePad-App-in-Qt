#ifndef LOGIN_H
#define LOGIN_H
/**
  * Login to System
  * @file login.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */


#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCryptographicHash>
#include "signin.h"
#include "logined.h"
#include "forgetpassword.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Login(QWidget *parent = 0) This is  Constructor of Login Class
     * @param parent This is the parent pointer referenced to be refered to a QWidget Object
     */
    explicit Login(QWidget *parent = 0);
    /**
      * @brief ~Login() It is destructor of Login Class
     */
    ~Login();
    /**
     * @brief encryptedPassword() It encryptes the string entered by users()
     * @param password It is password parameter given by users()
     * @return encrypted string type of QString
     */
    QString encryptedPassword(QString password);
    /**
     * @brief connectionOpen() It opens and checks if database is connected or not
     * @return true or false type of bool
     */
    bool connectionOpen(){
         db=QSqlDatabase::addDatabase("QSQLITE");
         db.setDatabaseName("D:/notepad.db");
         db.open();

         if(db.isOpen())
         {
             qDebug()<<"connected";
             return true;
         }
         else
         {
             qDebug()<<"not connected";
             return false;
         }
     }
    /**
     * @brief connectionClose() It closes the database connection
     */
    void connectionClose(){
         db.close();
         db.removeDatabase(QSqlDatabase::defaultConnection);
     }

private slots:
    /**
     * @brief on_loginBttn_clicked() it connects to database and users's interface.
     */
    void on_loginBttn_clicked();
    /**
     * @brief on_signinBttn_clicked() it is to registiration for user.
     */
    void on_signinBttn_clicked();
    /**
     * @brief on_commandLinkButton_clicked() it is to get new password from system.
     */
    void on_commandLinkButton_clicked();

private:
    /**
     * @brief db it is a reference of QSqlDatabase object to connect sqlite database.
     */
    QSqlDatabase db;
    Ui::Login *ui;
};

#endif // LOGIN_H
