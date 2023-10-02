#include "LoginPage.h"

LoginPage::LoginPage(QWidget* parent) : QWidget(parent), ui(new Ui::LoginPageClass)
{
    ui->setupUi(this);
    ui->passwdLineEdit->setEchoMode(QLineEdit::Password);

    loginButton = ui->loginButton;
    registerButton = ui->registerButton;

    connect(ui->loginButton, &QPushButton::clicked, this, &LoginPage::onLoginButtonClicked);
    connect(ui->registerButton, &QPushButton::clicked, this, &LoginPage::onRegisterButtonClicked);
}

void LoginPage::onLoginButtonClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwdLineEdit->text();
    
    if (username == "admin" && password == "admin") {
        emit authenticationSuccessful();
    }
    else {
        
    }
}

void LoginPage::onRegisterButtonClicked()
{
    // ... codul tău aici
}

LoginPage::~LoginPage() {
    // nu mai este necesar să ștergi ui manual
}
