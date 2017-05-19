/********************************************************************************
** Form generated from reading UI file 'forgetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_H
#define UI_FORGETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSurname;
    QLineEdit *lineEditPassword;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushOkButton;
    QPushButton *pushCancelButton;

    void setupUi(QDialog *ForgetPassword)
    {
        if (ForgetPassword->objectName().isEmpty())
            ForgetPassword->setObjectName(QStringLiteral("ForgetPassword"));
        ForgetPassword->resize(281, 156);
        widget = new QWidget(ForgetPassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(45, 28, 177, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelName = new QLabel(widget);
        labelName->setObjectName(QStringLiteral("labelName"));

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        horizontalLayout->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelSurname = new QLabel(widget);
        labelSurname->setObjectName(QStringLiteral("labelSurname"));

        horizontalLayout_2->addWidget(labelSurname);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        horizontalLayout_2->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(ForgetPassword);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(91, 100, 131, 25));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushOkButton = new QPushButton(widget1);
        pushOkButton->setObjectName(QStringLiteral("pushOkButton"));

        horizontalLayout_3->addWidget(pushOkButton);

        pushCancelButton = new QPushButton(widget1);
        pushCancelButton->setObjectName(QStringLiteral("pushCancelButton"));

        horizontalLayout_3->addWidget(pushCancelButton);


        retranslateUi(ForgetPassword);

        QMetaObject::connectSlotsByName(ForgetPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgetPassword)
    {
        ForgetPassword->setWindowTitle(QApplication::translate("ForgetPassword", "Dialog", Q_NULLPTR));
        labelName->setText(QApplication::translate("ForgetPassword", "Name :", Q_NULLPTR));
        labelSurname->setText(QApplication::translate("ForgetPassword", "Phone:", Q_NULLPTR));
        pushOkButton->setText(QApplication::translate("ForgetPassword", "Ok", Q_NULLPTR));
        pushCancelButton->setText(QApplication::translate("ForgetPassword", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword: public Ui_ForgetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_H
