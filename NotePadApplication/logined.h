#ifndef LOGINED_H
#define LOGINED_H
/**
  * Logined in System
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
    /**
     * @brief Logined(QWidget *parent = 0) This is  Constructor of Logined Class
     * @param parent This is the parent pointer referenced to be refered to a QWidget Object
     */
    explicit Logined(QWidget *parent = 0);
    /**
      * @brief ~Logined() It is destructor of Logined Class
     */
    ~Logined();
    /**
     * @brief setID(int id) It sets the given integer number to id variable in Logined Class
     * @param id It is a integer parameter came from user's id.
     */
    void setID(int id){  _id=id;   loadInfo();   }
    /**
     * @brief getID() It returns currently user's id.
     * @return a integer variable which is user's id.
     */
    int getID(){return _id;}
    /**
     * @brief loadInfo() It loads user's profile informations
     */
    void loadInfo();
    /**
     * @brief updateInfo() It updates user's informations in database.
     */
    void updateInfo();
    /**
     * @brief updatePassword() It updates user's password in database.
     */
    void updatePassword();
    /**
     * @brief addNote() It adds user's notes into database.
     */
    void addNote();
    /**
     * @brief setDefaultAddNotes() It makes subject and content areas in add note part of system.
     */
    void setDefaultAddNotes();
    /**
     * @brief showNotesTable() It shows notes to users that they have all notes with uniquecode,subject and content.
     */
    void showNotesTable();
    /**
     * @brief showNotesDateTable() It shows notes  to users that they have all notes with subject and date.
     */
    void showNotesDateTable();
    /**
     * @brief showSearchedNotes() It searchs a key given by users and shows the results in the contents of notes.
     * @param temp It is a string key given by users to search.
     */
    void showSearchedNotes(QString temp);
    /**
     * @brief deleteNotesTable() It deletes the note selected by users.
     */
    void deleteNotesTable();
    /**
     * @brief encryptedPassword() It encryptes the string  entered  by users.
     * @param password It is password parameter given by GetRandomString()
     * @return encrypted string type of QString
     */
    QString encryptedPassword(QString password);
    /**
     * @brief GetRandomString() It returns a string randomly
     * @return a randomly string type of QString
     */
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
    /**
     * @brief checkUniqueId() It checks and compares the string key given by entered with
     * another strings key that have been entered If it is unique or not
     * @return It returns a string type of QString
     */
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
     * @brief on_saveBttn_clicked() It saves and loads the user's information in the database, when user clicks.
     */
    void on_saveBttn_clicked();
    /**
     * @brief on_savePassword_clicked() It updates and loads the user's password in the database, when user clicks.
     */
    void on_savePassword_clicked();
    /**
     * @brief on_pushAddBttn_clicked() It adds notes the database and clears the subject and
     *  content areas of adding note area  in the system.
     */
    void on_pushAddBttn_clicked();
    /**
     * @brief on_pushShowBttn_clicked() It shows the user's saved notes.
     */
    void on_pushShowBttn_clicked();

   // void on_comboBox_currentIndexChanged(const QString &arg1);
    /**
     * @brief on_pushDeleteBttn_clicked() It deletes the selected note.
     */
    void on_pushDeleteBttn_clicked();
    /**
     * @brief on_pushOpenBttn_clicked() It opens the selected note.
     */
    void on_pushOpenBttn_clicked();
    /**
     * @brief on_pushSearchBttn_clicked() It search a key in the user's notes.
     */
    void on_pushSearchBttn_clicked();
    /**
     * @brief on_pushOpenSearchedBttn_clicked() It opens the note that has already searched and selected.
     */
    void on_pushOpenSearchedBttn_clicked();
    /**
     * @brief on_comboBoxSearchDelete_activated() It selects the searched note with comboBox selector.
     */
    void on_comboBoxSearchDelete_activated(const QString &arg1);
    /**
     * @brief deleteSearchedNotesTable() It deletes the all showed notes with comboBox selector.
     */
    void deleteSearchedNotesTable();
    /**
     * @brief on_pushDeleteSearchedBttn_clicked() It deletes the searched and selected notes with comboBox selector.
     */
    void on_pushDeleteSearchedBttn_clicked();
    /**
     * @brief on_pushShowDatesBttn_clicked() It shows the user's notes subjects with their dates.
     */
    void on_pushShowDatesBttn_clicked();

private:
    /**
     * @brief db it is a reference of QSqlDatabase object to connect sqlite database.
     */
    QSqlDatabase db;
    Ui::Logined *ui;
    /**
     * @brief _id it is a integer data member to keep user id.
     */
    int _id;
};

#endif // LOGINED_H
