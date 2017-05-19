/**
  * Logined in System
  * @file login.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */




#include "logined.h"
#include "ui_logined.h"

Logined::Logined(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logined)
{
    ui->setupUi(this);


    this->setWindowTitle("Welcome to Smart Notepad Application");
    QPixmap img(":/img/user-info-icon.png"); //C:/Users/asus/Documents/QT/NotePadApplication/images/user-info-icon.png
    int width=ui->labelUserImg->width();
    int height=ui->labelUserImg->height();
    ui->labelUserImg->setPixmap(img.scaled(width,height,Qt::KeepAspectRatio));
    ui->labelUserImg2->setPixmap(img.scaled(width,height,Qt::KeepAspectRatio));
    this->connectionOpen();





}







Logined::~Logined()
{
    delete ui;
}

void Logined::loadInfo()
{

        QSqlQuery qry;

        qry.exec("select * from signin ");

       while(qry.next())
       {
           if(_id==qry.value(0).toInt())

           {
               ui->lineName->setText(qry.value(1).toString());
               ui->lineSurname->setText(qry.value(2).toString());
               ui->lineEmail->setText(qry.value(3).toString());
               ui->lineAddress->setText(qry.value(4).toString());
               ui->linePhone->setText(qry.value(5).toString());
               ui->lineNickname->setText(qry.value(6).toString());
               ui->lineAge->setText(qry.value(7).toString());

               ui->lineEditName->setText(qry.value(1).toString());
               ui->lineEditSurname->setText(qry.value(2).toString());
               ui->lineEditEmail->setText(qry.value(3).toString());
               ui->lineEditAddress->setText(qry.value(4).toString());
               ui->lineEditPhone->setText(qry.value(5).toString());
               ui->spinBoxEditAge->setValue(qry.value(7).toInt());
               ui->dateTimeEdit->setDate(QDate::currentDate());
               ui->dateTimeEdit->setTime(QTime::currentTime());

           }

       }

}

void Logined::updateInfo()
{
    QString _name,_surname,_age,_email,_address,_phone;
    _name=ui->lineEditName->text();
    _surname=ui->lineEditSurname->text();
    _age=ui->spinBoxEditAge->text();
    _email=ui->lineEditEmail->text();
    _address=ui->lineEditAddress->text();
    _phone=ui->lineEditPhone->text();

   QString id = QString::number(_id);

    QSqlQuery qry ;
    qry.prepare("update signin set name='"+_name+"' ,surname='"+_surname+"', age='"+_age+"',email='"+_email+"' ,address='"+_address+"',phone='"+_phone+"' where idrec='"+id+"' ");


        if(qry.exec() )
        {
            QMessageBox::information(this,"Info","Your informations have already updated");

        }
        else
        {
            QMessageBox::warning(this,"Error","Your informations have not updated!!!  ");

        }

}

void Logined::updatePassword()
{
    QString _password;
    _password=encryptedPassword(ui->lineEditPassword->text());


    QString id = QString::number(_id);

    QSqlQuery qry ;
    qry.prepare("update login set password='"+_password+"' where iduser='"+id+"' ");


        if(qry.exec() )
        {
            QMessageBox::information(this,"Info","Your password have already updated");

        }
        else
        {
            QMessageBox::warning(this,"Error","Your password have not updated!!!  ");

        }

}

void Logined::addNote()
{
    QString _subject,_content,_uniquecode,_date;
    QString id=QString::number(_id);
    _subject=ui->lineSubject->text();
    _date=ui->dateTimeEdit->text();
    _content=ui->textNote->toPlainText();
    _uniquecode=checkUniqueId();

    QSqlQuery qry;
    qry.prepare("insert into notes (userid,subject,note,uniquecode,date) values ('"+id+"','"+_subject+"','"+_content+"','"+_uniquecode+"','"+_date+"'   ) ");

    if(qry.exec() )
    {
        QMessageBox::information(this,"Info","The note has been added");
    }
    else
    {
        QMessageBox::warning(this,"Error","The note has been added");

    }
}

void Logined::setDefaultAddNotes()
{  ui->lineSubject->setText(" ");
   ui->textNote->setPlainText("");

}

void Logined::showNotesTable()
{

       QString id=QString::number(_id);
       QSqlQueryModel * tablemodel=new QSqlQueryModel();
       QSqlQuery * qry= new QSqlQuery(db);

       qry->prepare("select uniquecode,subject,note from notes where userid='"+id+"' ");

       qry->exec();

       tablemodel->setQuery(*qry);
       ui->tableView->setModel(tablemodel);
       ui->comboBoxDelete->setModel(tablemodel);
       ui->comboBoxOpen->setModel(tablemodel);


}


void Logined::showNotesDateTable()
{

       QString id=QString::number(_id);
       QSqlQueryModel * tablemodel=new QSqlQueryModel();
       QSqlQuery * qry= new QSqlQuery(db);

       qry->prepare("select subject,date from notes where userid='"+id+"' ");

       qry->exec();

       tablemodel->setQuery(*qry);
       ui->tableViewDate->setModel(tablemodel);
       ui->comboBoxDelete->setModel(tablemodel);
       ui->comboBoxOpen->setModel(tablemodel);


}




void Logined::showSearchedNotes( QString temp)
{

    QString id=QString::number(_id);
    int num_rows,r,c;
    int num_rows2=0;
    QSqlQuery * qry= new QSqlQuery(db);
    QSqlQuery * qry2=new QSqlQuery(db);
    qry->exec("select count(userid) as num_rows from notes where userid='"+id+"' ");
    qry->first();
    num_rows=qry->value(0).toInt();


    qry->exec("select uniquecode,subject,note from notes");
    qry2->exec("select uniquecode,subject,note from notes");
    qry2->first();


     for( qry2->first() ; qry2->isValid() ;qry2->next()){

         if(qry2->value(2).toString().contains(temp))
        {


              num_rows2++;

        }


     }
     ui->comboBoxSearchOpen->blockSignals(true);
     ui->comboBoxSearchOpen->clear();
     ui->comboBoxSearchDelete->blockSignals(true);
     ui->comboBoxSearchDelete->clear();

     ui->tableWidget->setRowCount(num_rows2);

    for(r=0, qry->first() ; qry->isValid() ;qry->next(), r++){

        if(qry->value(2).toString().contains(temp))
       {
          for(c=0;c<3;++c){

              ui->tableWidget->setItem(r,c,new QTableWidgetItem(qry->value(c).toString()));


          }
          ui->comboBoxSearchOpen->addItem(qry->value(0).toString());
          ui->comboBoxSearchDelete->addItem(qry->value(0).toString());
       }

        else
       {
           r--;

       }





    }






}

void Logined::deleteNotesTable()
{

    QString _uniquecode;
    _uniquecode=ui->comboBoxDelete->currentText();
    QString id = QString::number(_id);

    QSqlQuery qry ;
    qry.prepare("delete from notes  where userid='"+id+"' and uniquecode='"+_uniquecode+"' ");


        if(qry.exec() )
        {
            QMessageBox::information(this,"Info","The note has deleted");

        }
        else
        {
            QMessageBox::warning(this,"Error","The note has not deleted");

        }
}

QString Logined::encryptedPassword(QString password)
{
    QString encodedPass =QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex()));

    return encodedPass;
}



void Logined::deleteSearchedNotesTable()
{

    QString _uniquecode;
    _uniquecode=ui->comboBoxSearchDelete->currentText();
    QString id = QString::number(_id);

    QSqlQuery qry ;
    qry.prepare("delete from notes  where userid='"+id+"' and uniquecode='"+_uniquecode+"' ");


        if(qry.exec() )
        {
            QMessageBox::information(this,"Info","The note has deleted");

        }
        else
        {
            QMessageBox::warning(this,"Error","The note has not deleted");

        }
}





void Logined::on_saveBttn_clicked()
{
    updateInfo();
    loadInfo();
}

void Logined::on_savePassword_clicked()
{
    updatePassword();

}

void Logined::on_pushAddBttn_clicked()
{
    addNote();
    setDefaultAddNotes();
}

void Logined::on_pushShowBttn_clicked()
{
    showNotesTable();
}

void Logined::on_pushDeleteBttn_clicked()
{
   deleteNotesTable();
   showNotesTable();
}

void Logined::on_pushOpenBttn_clicked()
{
    Notes  note;
    note.setModal(true);
    note.setNoteInfo(_id,ui->comboBoxOpen->currentText());
    note.loadNoteInformation();

    note.exec();
}

void Logined::on_pushSearchBttn_clicked()
{
     showSearchedNotes(ui->lineEditSearch->text());
}

void Logined::on_pushOpenSearchedBttn_clicked()
{
    Notes  note;
    note.setModal(true);
    note.setNoteInfo(_id,ui->comboBoxSearchOpen->currentText());
    note.loadNoteInformation();

    note.exec();
}

void Logined::on_comboBoxSearchDelete_activated(const QString &arg1)
{

}

void Logined::on_pushDeleteSearchedBttn_clicked()
{
    deleteSearchedNotesTable();
    showSearchedNotes(ui->lineEditSearch->text());
    showNotesTable();
}

void Logined::on_pushShowDatesBttn_clicked()
{
    showNotesDateTable();
}
