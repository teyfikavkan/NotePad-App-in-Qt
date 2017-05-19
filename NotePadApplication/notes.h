#ifndef NOTES_H
#define NOTES_H

#include <QDialog>
#include <QDebug>
#include <QPlainTextEdit>
#include <QSqlQuery>

namespace Ui {
class Notes;
}

class Notes : public QDialog
{
    Q_OBJECT

public:
    explicit Notes(QWidget *parent = 0);
    void setNoteInfo(int id,QString uniquecode){ _id=id; _uniquecode=uniquecode; loadNoteInformation();}
    void loadNoteInformation();

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

    ~Notes();

private:
    Ui::Notes *ui;
    QSqlDatabase db;
    int _id;
    QString _uniquecode;
};

#endif // NOTES_H
