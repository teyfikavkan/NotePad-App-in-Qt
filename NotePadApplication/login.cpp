#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Smart Notepad Application");
    QPixmap img(":/img/notepad1.png"); //C:/Users/asus/Documents/QT/NotePadApplication/images/notepad1.png
    int width=ui->logo->width();
    int height=ui->logo->height();
    ui->logo->setPixmap(img.scaled(width,height,Qt::KeepAspectRatio));


     QPixmap img2(":/img/logo.png"); //C:/Users/asus/Documents/QT/NotePadApplication/images/notepad1.png
     int width2=ui->mainlogo->width();
     int height2=ui->mainlogo->height();
      ui->mainlogo->setPixmap(img2.scaled(width2,height2,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}

QString Login::encryptedPassword(QString password)
{
    QString encodedPass =QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex()));

    return encodedPass;
}

void Login::on_loginBttn_clicked()
{
    this->connectionOpen();
    QString _username,_password;
       _username=ui->lineUsername->text();
       _password=encryptedPassword(ui->linePassword->text());
       int cnt=0;
       qDebug()<<_password;


       QSqlQuery qry;
       qry.exec("select * from login where username='"+_username+"' and  password='"+_password+"'  ");
       while(qry.next())
       {
           if(_username==qry.value(1).toString() && _password==qry.value(2).toString())
           {

             QMessageBox::information(this,"Info","Access Granted");
             Logined  logined;

             logined.setModal(true);
             int idnumber=qry.value(0).toInt();
             qDebug()<<idnumber;
              logined.setID(idnumber);
             this->hide();
             logined.exec();
             this->connectionClose();


             cnt++;
           }
       }
       if(cnt==0)
       {
             QMessageBox::warning(this,"Info","Access Denied!!!");
             this->connectionClose();
       }

}

void Login::on_signinBttn_clicked()
{
       SignIn sign;
       sign.setModal(true);
       sign.exec();
}

void Login::on_commandLinkButton_clicked()
{
    ForgetPassword fg;
    fg.setModal(true);
    fg.exec();
}
