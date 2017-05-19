#include "forgetpassword.h"
#include "ui_forgetpassword.h"

ForgetPassword::ForgetPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgetPassword)
{
    ui->setupUi(this);
    this->setWindowTitle("Security");
}

QString ForgetPassword::GetRandomString()
{
    const QString possibleCharacters("QRSTUVWXYZ01234abcdefghijklmn56789opqrstuvwxyzABCDEFGHIJKLMNOP");
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



QString ForgetPassword::encryptedPassword(QString password)
{
    QString encodedPass =QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex()));

    return encodedPass;
}

ForgetPassword::~ForgetPassword()
{
    delete ui;
}

void ForgetPassword::on_pushOkButton_clicked()
{
    this->connectionOpen();
        QString _name,_phone;
        QString userid;
       _name=ui->lineEditName->text();
       _phone=ui->lineEditPassword->text();
       QString password=GetRandomString();
       QString encryptedPass=encryptedPassword(password);
       int cnt=0;


       QSqlQuery qry,qry2;
       qry.exec("select * from signin where name='"+_name+"' and  phone='"+_phone+"'  ");

       while(qry.next())
       {
           if(_name==qry.value(1).toString() && _phone==qry.value(5).toString())
           {
             userid=qry.value(0).toString();

             QMessageBox msgBox;
             msgBox.setText("New Password is "+password);
             msgBox.exec();


             cnt++;
           }
       }
       if(cnt==0)
       {
             QMessageBox::warning(this,"Error","Name or Phone are not valid!!!");
             this->connectionClose();
       }
       qry2.prepare("update login set password='"+encryptedPass+"'  where iduser='"+userid+"' ");
       qry2.exec();


       this->hide();
}

void ForgetPassword::on_pushCancelButton_clicked()
{      this->connectionClose();
       this->hide();
}
