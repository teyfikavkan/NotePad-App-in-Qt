#ifndef NOTES_H
#define NOTES_H
/**
  * Some Settings in Users' Notes
  * @file login.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */

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
    /**
     * @brief Notes(QWidget *parent = 0) This is  Constructor of Notes Class
     * @param parent This is the parent pointer referenced to be refered to a QWidget Object
     */
    explicit Notes(QWidget *parent = 0);
    /**
     * @brief setNoteInfo() it sets users' notes in database when users push their notes.
     * @param id it is a integer variable which is users' id number.
     * @param uniquecode it is a unique string  variable which is users' notes code.
     */
    void setNoteInfo(int id,QString uniquecode){ _id=id; _uniquecode=uniquecode; loadNoteInformation();}
    /**
     * @brief loadNoteInformation() It loads notes of user.
     */
    void loadNoteInformation();
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
      * @brief ~Notes() It is destructor of Notes Class
     */
    ~Notes();

private slots:
    /**
     * @brief on_pushButton_clicked() it close the note window which has been opened.
     */
    void on_pushButton_clicked();

private:
    Ui::Notes *ui;
    /**
     * @brief db it is a reference of QSqlDatabase object to connect sqlite database.
     */
    QSqlDatabase db;
    /**
     * @brief _id it is a integer data member to keep user id.
     */
    int _id;
    /**
     * @brief _uniquecode it is a unique string characters to keep code of user's notes
     */
    QString _uniquecode;
};

#endif // NOTES_H
