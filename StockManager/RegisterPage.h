#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QMessageBox>
#include "ui_RegisterPage.h"

class RegisterPage : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterPage(QWidget* parent = nullptr);
    ~RegisterPage();

signals:
    void registrationSuccessful();

private slots:
    void onRegisterButtonClicked();

private:
    QPushButton* registerButton;
    QLineEdit* usernameLineEdit;
    QLineEdit* passwdLineEdit;
    QLineEdit* confPasswdLineEdit;
    Ui::RegisterPageClass* ui;
};
