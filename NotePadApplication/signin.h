#ifndef SIGNIN_H
#define SIGNIN_H
/**
  * Registiration System of Notepad Application
  * @file login.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief SignIn(QWidget *parent = 0) This is  Constructor of SignIn Class
     * @param parent This is the parent pointer referenced to be refered to a QWidget Object
     */
    explicit SignIn(QWidget *parent = 0);
    /**
      * @brief ~SignIn() It is destructor of SignIn Class
     */
    ~SignIn();
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
    /**
     * @brief encryptedPassword() It encryptes the string given by GetRandomString()
     * @param password It is password parameter given by GetRandomString()
     * @return encrypted string type of QString
     */
    QString encryptedPassword(QString password);


private slots:
    /**
     * @brief on_saveBttn_clicked() it records user's information to database
     */
    void on_saveBttn_clicked();
    /**
     * @brief on_cancelBttn_clicked() it cancels user's information to database and close the window
     */
    void on_cancelBttn_clicked();

private:
    /**
     * @brief db it is a reference of QSqlDatabase object to connect sqlite database.
     */
    QSqlDatabase db;
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
