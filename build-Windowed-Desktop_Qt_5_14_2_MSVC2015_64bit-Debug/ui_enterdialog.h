/********************************************************************************
** Form generated from reading UI file 'enterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERDIALOG_H
#define UI_ENTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EnterDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *EnterDialog)
    {
        if (EnterDialog->objectName().isEmpty())
            EnterDialog->setObjectName(QString::fromUtf8("EnterDialog"));
        EnterDialog->resize(400, 300);
        pushButton = new QPushButton(EnterDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 260, 80, 22));
        pushButton_2 = new QPushButton(EnterDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 210, 80, 22));
        lineEdit = new QLineEdit(EnterDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 50, 113, 21));
        lineEdit_2 = new QLineEdit(EnterDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 100, 113, 21));
        label = new QLabel(EnterDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 47, 14));
        label_2 = new QLabel(EnterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 100, 47, 14));

        retranslateUi(EnterDialog);

        QMetaObject::connectSlotsByName(EnterDialog);
    } // setupUi

    void retranslateUi(QDialog *EnterDialog)
    {
        EnterDialog->setWindowTitle(QCoreApplication::translate("EnterDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("EnterDialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EnterDialog", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("EnterDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("EnterDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterDialog: public Ui_EnterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERDIALOG_H
