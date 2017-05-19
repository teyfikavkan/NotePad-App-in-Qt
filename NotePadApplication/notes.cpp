#include "notes.h"
#include "ui_notes.h"

Notes::Notes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notes)
{
    ui->setupUi(this);
    this->setWindowTitle("Note");

}

void Notes::loadNoteInformation()
{

    QString id=QString::number(_id);


    QSqlQuery qry;
    qry.exec("select * from notes where userid='"+id+"' and  uniquecode='"+_uniquecode+"'  ");


       while(qry.next())
       {

                  ui->lineEditSubject->setText(qry.value(1).toString());
                  ui->plainTextEditNote->setPlainText(qry.value(2).toString());





       }

}

Notes::~Notes()
{
    delete ui;
}
