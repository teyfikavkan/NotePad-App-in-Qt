/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QPushButton *saveBttn;
    QPushButton *cancelBttn;
    QGroupBox *groupBox;
    QLineEdit *lineNickname;
    QLabel *labelName;
    QLineEdit *lineSurname;
    QLineEdit *lineEmail;
    QLabel *labelAge;
    QLineEdit *linePassword;
    QLineEdit *lineAddress;
    QLabel *labelSurname;
    QSpinBox *spinBoxAge;
    QLabel *labelEmail;
    QLabel *labelAddress;
    QLineEdit *linePhone;
    QLabel *labelPhone;
    QLineEdit *lineName;
    QLabel *labelPassword;
    QLabel *labelNickname;
    QLabel *labelInfoLogo;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(415, 300);
        saveBttn = new QPushButton(SignIn);
        saveBttn->setObjectName(QStringLiteral("saveBttn"));
        saveBttn->setGeometry(QRect(141, 271, 75, 23));
        cancelBttn = new QPushButton(SignIn);
        cancelBttn->setObjectName(QStringLiteral("cancelBttn"));
        cancelBttn->setGeometry(QRect(250, 270, 75, 23));
        groupBox = new QGroupBox(SignIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 401, 171));
        lineNickname = new QLineEdit(groupBox);
        lineNickname->setObjectName(QStringLiteral("lineNickname"));
        lineNickname->setGeometry(QRect(56, 139, 133, 20));
        labelName = new QLabel(groupBox);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(24, 16, 27, 16));
        lineSurname = new QLineEdit(groupBox);
        lineSurname->setObjectName(QStringLiteral("lineSurname"));
        lineSurname->setGeometry(QRect(257, 16, 131, 20));
        lineEmail = new QLineEdit(groupBox);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));
        lineEmail->setGeometry(QRect(57, 49, 331, 20));
        labelAge = new QLabel(groupBox);
        labelAge->setObjectName(QStringLiteral("labelAge"));
        labelAge->setGeometry(QRect(229, 110, 19, 16));
        linePassword = new QLineEdit(groupBox);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setGeometry(QRect(256, 139, 131, 20));
        linePassword->setEchoMode(QLineEdit::Password);
        lineAddress = new QLineEdit(groupBox);
        lineAddress->setObjectName(QStringLiteral("lineAddress"));
        lineAddress->setGeometry(QRect(57, 79, 331, 20));
        labelSurname = new QLabel(groupBox);
        labelSurname->setObjectName(QStringLiteral("labelSurname"));
        labelSurname->setGeometry(QRect(199, 16, 42, 16));
        spinBoxAge = new QSpinBox(groupBox);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setGeometry(QRect(257, 109, 131, 20));
        labelEmail = new QLabel(groupBox);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setGeometry(QRect(24, 49, 28, 16));
        labelAddress = new QLabel(groupBox);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));
        labelAddress->setGeometry(QRect(13, 79, 39, 16));
        linePhone = new QLineEdit(groupBox);
        linePhone->setObjectName(QStringLiteral("linePhone"));
        linePhone->setGeometry(QRect(56, 109, 131, 20));
        labelPhone = new QLabel(groupBox);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setGeometry(QRect(21, 109, 30, 16));
        lineName = new QLineEdit(groupBox);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setGeometry(QRect(58, 20, 133, 20));
        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setGeometry(QRect(205, 139, 46, 16));
        labelNickname = new QLabel(groupBox);
        labelNickname->setObjectName(QStringLiteral("labelNickname"));
        labelNickname->setGeometry(QRect(5, 139, 45, 16));
        labelInfoLogo = new QLabel(SignIn);
        labelInfoLogo->setObjectName(QStringLiteral("labelInfoLogo"));
        labelInfoLogo->setGeometry(QRect(10, 180, 121, 91));
        widget = new QWidget(SignIn);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(121, 200, 239, 34));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Dialog", Q_NULLPTR));
        saveBttn->setText(QApplication::translate("SignIn", "Save", Q_NULLPTR));
        cancelBttn->setText(QApplication::translate("SignIn", "Cancel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SignIn", "Informations of Users", Q_NULLPTR));
        labelName->setText(QApplication::translate("SignIn", "Name", Q_NULLPTR));
        labelAge->setText(QApplication::translate("SignIn", "Age", Q_NULLPTR));
        labelSurname->setText(QApplication::translate("SignIn", "Surname", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("SignIn", "E-mail", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("SignIn", "Address", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("SignIn", "Phone", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("SignIn", "Password", Q_NULLPTR));
        labelNickname->setText(QApplication::translate("SignIn", "Nickname", Q_NULLPTR));
        labelInfoLogo->setText(QString());
        label->setText(QApplication::translate("SignIn", "Copyright \302\251 2017  All rights reserved by Mustafa", Q_NULLPTR));
        label_2->setText(QApplication::translate("SignIn", "Teyfik AVKAN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
