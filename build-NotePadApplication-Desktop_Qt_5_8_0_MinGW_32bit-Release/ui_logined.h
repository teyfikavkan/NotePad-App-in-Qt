/********************************************************************************
** Form generated from reading UI file 'logined.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINED_H
#define UI_LOGINED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logined
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QLineEdit *lineNickname;
    QLabel *labelName;
    QLineEdit *lineSurname;
    QLineEdit *lineEmail;
    QLabel *labelAge;
    QLineEdit *lineAddress;
    QLabel *labelSurname;
    QLabel *labelEmail;
    QLabel *labelAddress;
    QLineEdit *linePhone;
    QLabel *labelPhone;
    QLineEdit *lineName;
    QLabel *labelNickname;
    QLineEdit *lineAge;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelUserImg2;
    QWidget *tab_4;
    QPushButton *saveBttn;
    QGroupBox *groupBox_3;
    QLabel *labelName_3;
    QLineEdit *lineEditSurname;
    QLineEdit *lineEditEmail;
    QLabel *labelAge_3;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditAddress;
    QLabel *labelSurname_3;
    QSpinBox *spinBoxEditAge;
    QLabel *labelEmail_3;
    QLabel *labelAddress_3;
    QLineEdit *lineEditPhone;
    QLabel *labelPhone_3;
    QLineEdit *lineEditName;
    QLabel *labelPassword;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *savePassword;
    QLabel *labelUserImg;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QTableView *tableView;
    QPushButton *pushShowBttn;
    QComboBox *comboBoxDelete;
    QPushButton *pushDeleteBttn;
    QComboBox *comboBoxOpen;
    QPushButton *pushOpenBttn;
    QWidget *tab_6;
    QPushButton *pushAddBttn;
    QPlainTextEdit *textNote;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSubject;
    QLineEdit *lineSubject;
    QWidget *tab_8;
    QPushButton *pushSearchBttn;
    QLineEdit *lineEditSearch;
    QComboBox *comboBoxSearch;
    QPushButton *pushOpenSearchedBttn;
    QTableWidget *tableWidget;
    QWidget *tab_7;

    void setupUi(QDialog *Logined)
    {
        if (Logined->objectName().isEmpty())
            Logined->setObjectName(QStringLiteral("Logined"));
        Logined->resize(440, 338);
        tabWidget = new QTabWidget(Logined);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 441, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 441, 321));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 4, 401, 171));
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
        labelAge->setGeometry(QRect(229, 112, 19, 16));
        lineAddress = new QLineEdit(groupBox);
        lineAddress->setObjectName(QStringLiteral("lineAddress"));
        lineAddress->setGeometry(QRect(57, 79, 331, 20));
        labelSurname = new QLabel(groupBox);
        labelSurname->setObjectName(QStringLiteral("labelSurname"));
        labelSurname->setGeometry(QRect(199, 16, 42, 16));
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
        labelNickname = new QLabel(groupBox);
        labelNickname->setObjectName(QStringLiteral("labelNickname"));
        labelNickname->setGeometry(QRect(5, 139, 45, 16));
        lineAge = new QLineEdit(groupBox);
        lineAge->setObjectName(QStringLiteral("lineAge"));
        lineAge->setGeometry(QRect(256, 111, 131, 20));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(116, 204, 239, 34));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        labelUserImg2 = new QLabel(tab_3);
        labelUserImg2->setObjectName(QStringLiteral("labelUserImg2"));
        labelUserImg2->setGeometry(QRect(10, 180, 101, 101));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        saveBttn = new QPushButton(tab_4);
        saveBttn->setObjectName(QStringLiteral("saveBttn"));
        saveBttn->setGeometry(QRect(117, 261, 81, 23));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(5, 4, 401, 171));
        labelName_3 = new QLabel(groupBox_3);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        labelName_3->setGeometry(QRect(24, 16, 27, 16));
        lineEditSurname = new QLineEdit(groupBox_3);
        lineEditSurname->setObjectName(QStringLiteral("lineEditSurname"));
        lineEditSurname->setGeometry(QRect(257, 16, 131, 20));
        lineEditEmail = new QLineEdit(groupBox_3);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(57, 49, 331, 20));
        labelAge_3 = new QLabel(groupBox_3);
        labelAge_3->setObjectName(QStringLiteral("labelAge_3"));
        labelAge_3->setGeometry(QRect(229, 110, 19, 16));
        lineEditPassword = new QLineEdit(groupBox_3);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(159, 139, 131, 20));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        lineEditAddress = new QLineEdit(groupBox_3);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));
        lineEditAddress->setGeometry(QRect(57, 79, 331, 20));
        labelSurname_3 = new QLabel(groupBox_3);
        labelSurname_3->setObjectName(QStringLiteral("labelSurname_3"));
        labelSurname_3->setGeometry(QRect(199, 16, 42, 16));
        spinBoxEditAge = new QSpinBox(groupBox_3);
        spinBoxEditAge->setObjectName(QStringLiteral("spinBoxEditAge"));
        spinBoxEditAge->setGeometry(QRect(257, 109, 131, 20));
        labelEmail_3 = new QLabel(groupBox_3);
        labelEmail_3->setObjectName(QStringLiteral("labelEmail_3"));
        labelEmail_3->setGeometry(QRect(24, 49, 28, 16));
        labelAddress_3 = new QLabel(groupBox_3);
        labelAddress_3->setObjectName(QStringLiteral("labelAddress_3"));
        labelAddress_3->setGeometry(QRect(13, 79, 39, 16));
        lineEditPhone = new QLineEdit(groupBox_3);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setGeometry(QRect(56, 109, 131, 20));
        labelPhone_3 = new QLabel(groupBox_3);
        labelPhone_3->setObjectName(QStringLiteral("labelPhone_3"));
        labelPhone_3->setGeometry(QRect(21, 109, 30, 16));
        lineEditName = new QLineEdit(groupBox_3);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(58, 20, 133, 20));
        labelPassword = new QLabel(groupBox_3);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setGeometry(QRect(108, 139, 46, 16));
        layoutWidget_3 = new QWidget(tab_4);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(116, 204, 239, 34));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        savePassword = new QPushButton(tab_4);
        savePassword->setObjectName(QStringLiteral("savePassword"));
        savePassword->setGeometry(QRect(249, 261, 81, 23));
        labelUserImg = new QLabel(tab_4);
        labelUserImg->setObjectName(QStringLiteral("labelUserImg"));
        labelUserImg->setGeometry(QRect(10, 180, 101, 101));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 441, 321));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 311, 261));
        pushShowBttn = new QPushButton(tab_5);
        pushShowBttn->setObjectName(QStringLiteral("pushShowBttn"));
        pushShowBttn->setGeometry(QRect(330, 10, 91, 23));
        comboBoxDelete = new QComboBox(tab_5);
        comboBoxDelete->setObjectName(QStringLiteral("comboBoxDelete"));
        comboBoxDelete->setGeometry(QRect(330, 212, 91, 23));
        pushDeleteBttn = new QPushButton(tab_5);
        pushDeleteBttn->setObjectName(QStringLiteral("pushDeleteBttn"));
        pushDeleteBttn->setGeometry(QRect(330, 246, 91, 23));
        comboBoxOpen = new QComboBox(tab_5);
        comboBoxOpen->setObjectName(QStringLiteral("comboBoxOpen"));
        comboBoxOpen->setGeometry(QRect(330, 97, 91, 23));
        pushOpenBttn = new QPushButton(tab_5);
        pushOpenBttn->setObjectName(QStringLiteral("pushOpenBttn"));
        pushOpenBttn->setGeometry(QRect(330, 127, 91, 23));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushAddBttn = new QPushButton(tab_6);
        pushAddBttn->setObjectName(QStringLiteral("pushAddBttn"));
        pushAddBttn->setGeometry(QRect(170, 265, 75, 23));
        textNote = new QPlainTextEdit(tab_6);
        textNote->setObjectName(QStringLiteral("textNote"));
        textNote->setGeometry(QRect(10, 60, 411, 201));
        layoutWidget1 = new QWidget(tab_6);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 411, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelSubject = new QLabel(layoutWidget1);
        labelSubject->setObjectName(QStringLiteral("labelSubject"));

        horizontalLayout->addWidget(labelSubject);

        lineSubject = new QLineEdit(layoutWidget1);
        lineSubject->setObjectName(QStringLiteral("lineSubject"));

        horizontalLayout->addWidget(lineSubject);

        tabWidget_3->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pushSearchBttn = new QPushButton(tab_8);
        pushSearchBttn->setObjectName(QStringLiteral("pushSearchBttn"));
        pushSearchBttn->setGeometry(QRect(335, 38, 91, 23));
        lineEditSearch = new QLineEdit(tab_8);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));
        lineEditSearch->setGeometry(QRect(335, 9, 91, 23));
        comboBoxSearch = new QComboBox(tab_8);
        comboBoxSearch->setObjectName(QStringLiteral("comboBoxSearch"));
        comboBoxSearch->setGeometry(QRect(335, 100, 91, 23));
        pushOpenSearchedBttn = new QPushButton(tab_8);
        pushOpenSearchedBttn->setObjectName(QStringLiteral("pushOpenSearchedBttn"));
        pushOpenSearchedBttn->setGeometry(QRect(335, 140, 91, 23));
        tableWidget = new QTableWidget(tab_8);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 10, 321, 261));
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget->addTab(tab_7, QString());

        retranslateUi(Logined);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Logined);
    } // setupUi

    void retranslateUi(QDialog *Logined)
    {
        Logined->setWindowTitle(QApplication::translate("Logined", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Logined", "Informations of Users", Q_NULLPTR));
        labelName->setText(QApplication::translate("Logined", "Name", Q_NULLPTR));
        labelAge->setText(QApplication::translate("Logined", "Age", Q_NULLPTR));
        labelSurname->setText(QApplication::translate("Logined", "Surname", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("Logined", "E-mail", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("Logined", "Address", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("Logined", "Phone", Q_NULLPTR));
        labelNickname->setText(QApplication::translate("Logined", "Nickname", Q_NULLPTR));
        label->setText(QApplication::translate("Logined", "Copyright \302\251 2017  All rights reserved by Mustafa", Q_NULLPTR));
        label_2->setText(QApplication::translate("Logined", "Teyfik AVKAN", Q_NULLPTR));
        labelUserImg2->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Logined", "Information", Q_NULLPTR));
        saveBttn->setText(QApplication::translate("Logined", "SaveInfo", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Logined", "Informations of Users", Q_NULLPTR));
        labelName_3->setText(QApplication::translate("Logined", "Name", Q_NULLPTR));
        labelAge_3->setText(QApplication::translate("Logined", "Age", Q_NULLPTR));
        labelSurname_3->setText(QApplication::translate("Logined", "Surname", Q_NULLPTR));
        labelEmail_3->setText(QApplication::translate("Logined", "E-mail", Q_NULLPTR));
        labelAddress_3->setText(QApplication::translate("Logined", "Address", Q_NULLPTR));
        labelPhone_3->setText(QApplication::translate("Logined", "Phone", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("Logined", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("Logined", "Copyright \302\251 2017  All rights reserved by Mustafa", Q_NULLPTR));
        label_6->setText(QApplication::translate("Logined", "Teyfik AVKAN", Q_NULLPTR));
        savePassword->setText(QApplication::translate("Logined", "SavePassword", Q_NULLPTR));
        labelUserImg->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Logined", "Edit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Logined", "Profile", Q_NULLPTR));
        pushShowBttn->setText(QApplication::translate("Logined", "Show", Q_NULLPTR));
        pushDeleteBttn->setText(QApplication::translate("Logined", "Delete", Q_NULLPTR));
        pushOpenBttn->setText(QApplication::translate("Logined", "Open", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("Logined", "My Notes", Q_NULLPTR));
        pushAddBttn->setText(QApplication::translate("Logined", "Add", Q_NULLPTR));
        labelSubject->setText(QApplication::translate("Logined", "Subject :", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Logined", "Add Note", Q_NULLPTR));
        pushSearchBttn->setText(QApplication::translate("Logined", "Search", Q_NULLPTR));
        pushOpenSearchedBttn->setText(QApplication::translate("Logined", "Open", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Logined", "uniquenote", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Logined", "subject", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Logined", "note", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("Logined", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Logined", "Notes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Logined", "Reminder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Logined: public Ui_Logined {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINED_H
