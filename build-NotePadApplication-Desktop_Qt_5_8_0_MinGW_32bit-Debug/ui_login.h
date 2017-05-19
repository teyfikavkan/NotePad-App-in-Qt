/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelUsername;
    QLabel *labelPassword;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineUsername;
    QLineEdit *linePassword;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginBttn;
    QPushButton *signinBttn;
    QCommandLinkButton *commandLinkButton;
    QLabel *logo;
    QLabel *mainlogo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(386, 300);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(128, 104, 251, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(15, 12, 211, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelUsername = new QLabel(layoutWidget);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        verticalLayout->addWidget(labelUsername);

        labelPassword = new QLabel(layoutWidget);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        verticalLayout->addWidget(labelPassword);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineUsername = new QLineEdit(layoutWidget);
        lineUsername->setObjectName(QStringLiteral("lineUsername"));

        verticalLayout_2->addWidget(lineUsername);

        linePassword = new QLineEdit(layoutWidget);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(linePassword);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        loginBttn = new QPushButton(layoutWidget);
        loginBttn->setObjectName(QStringLiteral("loginBttn"));

        horizontalLayout_2->addWidget(loginBttn);

        signinBttn = new QPushButton(layoutWidget);
        signinBttn->setObjectName(QStringLiteral("signinBttn"));

        horizontalLayout_2->addWidget(signinBttn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(34, 109, 191, 41));
        layoutWidget->raise();
        commandLinkButton->raise();
        commandLinkButton->raise();
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(10, 100, 111, 131));
        mainlogo = new QLabel(centralWidget);
        mainlogo->setObjectName(QStringLiteral("mainlogo"));
        mainlogo->setGeometry(QRect(40, 0, 311, 91));
        mainlogo->setLayoutDirection(Qt::LeftToRight);
        mainlogo->setTextFormat(Qt::AutoText);
        mainlogo->setAlignment(Qt::AlignCenter);
        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 386, 21));
        Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        groupBox->setTitle(QString());
        labelUsername->setText(QApplication::translate("Login", "Username", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        loginBttn->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        signinBttn->setText(QApplication::translate("Login", "Sign-in", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("Login", "Forgot your password?", Q_NULLPTR));
        logo->setText(QString());
        mainlogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
