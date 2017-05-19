/********************************************************************************
** Form generated from reading UI file 'notes.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_H
#define UI_NOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Notes
{
public:
    QPlainTextEdit *plainTextEditNote;
    QLineEdit *lineEditSubject;
    QLabel *labelSubject;
    QLabel *labelContent;
    QPushButton *pushButton;

    void setupUi(QDialog *Notes)
    {
        if (Notes->objectName().isEmpty())
            Notes->setObjectName(QStringLiteral("Notes"));
        Notes->resize(441, 341);
        plainTextEditNote = new QPlainTextEdit(Notes);
        plainTextEditNote->setObjectName(QStringLiteral("plainTextEditNote"));
        plainTextEditNote->setGeometry(QRect(70, 60, 351, 231));
        lineEditSubject = new QLineEdit(Notes);
        lineEditSubject->setObjectName(QStringLiteral("lineEditSubject"));
        lineEditSubject->setGeometry(QRect(70, 20, 351, 20));
        labelSubject = new QLabel(Notes);
        labelSubject->setObjectName(QStringLiteral("labelSubject"));
        labelSubject->setGeometry(QRect(10, 23, 47, 13));
        labelContent = new QLabel(Notes);
        labelContent->setObjectName(QStringLiteral("labelContent"));
        labelContent->setGeometry(QRect(10, 60, 47, 13));
        pushButton = new QPushButton(Notes);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 300, 75, 23));

        retranslateUi(Notes);

        QMetaObject::connectSlotsByName(Notes);
    } // setupUi

    void retranslateUi(QDialog *Notes)
    {
        Notes->setWindowTitle(QApplication::translate("Notes", "Dialog", Q_NULLPTR));
        labelSubject->setText(QApplication::translate("Notes", "Subject :", Q_NULLPTR));
        labelContent->setText(QApplication::translate("Notes", "Content :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Notes", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Notes: public Ui_Notes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_H
