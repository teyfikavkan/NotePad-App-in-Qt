#ifndef LOGINED_H
#define LOGINED_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QTextEdit>
#include <QTextStream>
#include <QSpinBox>
#include <QComboBox>
#include <QTableWidget>
#include <QDateTimeEdit>
#include <QTime>
#include <QDate>
#include "notes.h"


namespace Ui {
class Logined;
}

class Logined : public QDialog
{
    Q_OBJECT

public:
    explicit Logined(QWidget *parent = 0);

    ~Logined();
    void setID(int id){  _id=id;   loadInfo();   }
    int getID(){return _id;}
    void loadInfo();
    void updateInfo();
    void updatePassword();
    void addNote();
    void setDefaultAddNotes();
    void showNotesTable();
    void showNotesDateTable();
    void showSearchedNotes(QString temp);
    void deleteNotesTable();
    QString encryptedPassword(QString password);

    QString GetRandomString() const
    {
       const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
       const int randomStringLength = 8; // assuming you want random strings of 12 characters

       QString randomString;
       for(int i=0; i<randomStringLength; ++i)
       {
           int index = qrand() % possibleCharacters.length();
           QChar nextChar = possibleCharacters.at(index);
           randomString.append(nextChar);
       }
       return randomString;
    }

    QString checkUniqueId()
    {
     QString _uniquecode=GetRandomString();
    if(!db.isOpen())
    {
      db.open();
    }

    QSqlQuery * qry1=new QSqlQuery(db);
    QSqlQuery * qry2=new QSqlQuery(db);

    qry1->exec("select * from notes ");
    qry2=qry1;
    for(qry1->first(); qry1->isValid(); qry1->next())
     {



                        if(_uniquecode==qry1->value(5).toString())
                        {

                            _uniquecode=GetRandomString();
                            qry1=qry2;
                        }

                       }


            return _uniquecode;

    }




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

    void on_savePassword_clicked();

    void on_pushAddBttn_clicked();

    void on_pushShowBttn_clicked();

   // void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushDeleteBttn_clicked();

    void on_pushOpenBttn_clicked();

    void on_pushSearchBttn_clicked();

    void on_pushOpenSearchedBttn_clicked();

    void on_comboBoxSearchDelete_activated(const QString &arg1);

    void deleteSearchedNotesTable();

    void on_pushDeleteSearchedBttn_clicked();

    void on_pushShowDatesBttn_clicked();

private:
    QSqlDatabase db;
    Ui::Logined *ui;
    int _id;
};

#endif // LOGINED_H
