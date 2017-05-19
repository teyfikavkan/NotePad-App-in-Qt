#ifndef SIGNIN_H
#define SIGNIN_H

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
    explicit SignIn(QWidget *parent = 0);
    ~SignIn();

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
    void on_saveBttn_clicked();

    void on_cancelBttn_clicked();

private:
    QSqlDatabase db;
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
