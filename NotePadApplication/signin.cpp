/**
  * Registiration System of Notepad Application
  * @file login.h
  * @version 1.0
  * @date 19.05.2017
  * @author Mustafa Teyfik Avkan
  * @title
  *
  */


#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    this->setWindowTitle("User Registration System");
    QPixmap img(":/img/info-logo.png"); //C:/Users/asus/Documents/QT/NotePadApplication/images/info-logo.png
    int width=ui->labelInfoLogo->width();
    int height=ui->labelInfoLogo->height();
    ui->labelInfoLogo->setPixmap(img.scaled(width,height,Qt::KeepAspectRatio));

     this->connectionOpen();
}

SignIn::~SignIn()
{
    delete ui;
}

QString SignIn::encryptedPassword(QString password)
{
    QString encodedPass =QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex()));

    return encodedPass;
}

void SignIn::on_saveBttn_clicked()
{
  QString _name,_surname,_age,_email,_address,_phone,_nickname,_password;
  _name=ui->lineName->text();
  _surname=ui->lineSurname->text();
  _age=ui->spinBoxAge->text();
  _email=ui->lineEmail->text();
  _address=ui->lineAddress->text();
  _phone=ui->linePhone->text();
  _nickname=ui->lineNickname->text();
  _password=encryptedPassword(ui->linePassword->text());


  QSqlQuery qry,qry2;
  qry.prepare("insert into signin (name,surname,email,address,phone,nickname,age) values ('"+_name+"','"+_surname+"','"+_email+"','"+_address+"','"+_phone+"','"+_nickname+"','"+_age+"' ) ");
  qry2.prepare("insert into login (username,password) values ('"+_nickname+"','"+_password+"') ");
  if(qry.exec() && qry2.exec() )
  {
      QMessageBox::information(this,"Information Recording","You have already registered");
      this->hide();
  }
  else
  {
      QMessageBox::warning(this,"Error","You have not registered");
      this->connectionClose();
  }

}

void SignIn::on_cancelBttn_clicked()
{
     this->connectionClose();
     this->hide();
}
