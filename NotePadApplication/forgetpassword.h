#ifndef FORGETPASSWORD_H
#define FORGETPASSWORD_H
/**
  * Forgotten Passwords
  * @file forgetpassword.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */

#include <QDialog>
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCryptographicHash>
namespace Ui {
class ForgetPassword;
}

class ForgetPassword : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief ForgetPassword(QWidget *parent = 0) This is  Constructor of ForgetPassword Class
     * @param parent This is the parent pointer referenced to be refered to a QWidget Object
     */
    explicit ForgetPassword(QWidget *parent = 0);
    /**
     * @brief GetRandomString() It returns a string randomly
     * @return a randomly string type of QString
     */
    QString GetRandomString();
    /**
     * @brief encryptedPassword() It encryptes the string given by GetRandomString()
     * @param password It is password parameter given by GetRandomString()
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
    /**
     * @brief setID(int id) it sets user id to _id in ForgetPassword Class.
     * @param id it is a integer variable to keep users' id.
     */
    void setID(int id){_id=id;}
    /**
     * @brief getID() it returns integer variable which is named as id.
     * @return integer variable id in ForgetPassword class
     */
    int getID(){return _id;}
    /**
      * @brief ~ForgetPassword() It is destructor of ForgetPassword Class
     */
    ~ForgetPassword();

private slots:
    /**
     * @brief on_pushOkButton_clicked() it connects to database to give new password if users forget.
     */
    void on_pushOkButton_clicked();
    /**
     * @brief on_pushCancelButton_clicked() it cancels to close widget.
     */
    void on_pushCancelButton_clicked();

private:
    /**
     * @brief _id it is a integer data member to keep user id.
     */
    int _id;
    /**
     * @brief db it is a reference of QSqlDatabase object to connect sqlite database.
     */
    QSqlDatabase db;
    Ui::ForgetPassword *ui;
};

#endif // FORGETPASSWORD_H
