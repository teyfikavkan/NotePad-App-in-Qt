#ifndef LOGIN_H
#define LOGIN_H

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
    explicit Login(QWidget *parent = 0);
    ~Login();
    QString encryptedPassword(QString password);
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
     void connectionClose(){
         db.close();
         db.removeDatabase(QSqlDatabase::defaultConnection);
     }

private slots:
    void on_loginBttn_clicked();

    void on_signinBttn_clicked();

    void on_commandLinkButton_clicked();

private:

    QSqlDatabase db;
    Ui::Login *ui;
};

#endif // LOGIN_H
