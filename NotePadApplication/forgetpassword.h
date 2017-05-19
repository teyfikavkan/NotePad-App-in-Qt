#ifndef FORGETPASSWORD_H
#define FORGETPASSWORD_H

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
    explicit ForgetPassword(QWidget *parent = 0);

    QString GetRandomString();
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
    void setID(int id){_id=id;}
    int getID(){return _id;}
    ~ForgetPassword();

private slots:
    void on_pushOkButton_clicked();

    void on_pushCancelButton_clicked();

private:
    int _id;
    QSqlDatabase db;
    Ui::ForgetPassword *ui;
};

#endif // FORGETPASSWORD_H
