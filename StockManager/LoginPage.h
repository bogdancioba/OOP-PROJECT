
#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include "ui_LoginPage.h"

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget* parent = nullptr);

    QPushButton* getLoginButton() const { return loginButton; }
    QPushButton* getRegisterButton() const { return registerButton; }

    ~LoginPage();

private slots:
    void onLoginButtonClicked();
    void onRegisterButtonClicked();

signals:
    void authenticationSuccessful();

private:
    QPushButton* loginButton;
    QPushButton* registerButton;
    QLineEdit* usernameLineEdit;
    QLineEdit* passwdLineEdit;
    Ui::LoginPageClass* ui;
};
