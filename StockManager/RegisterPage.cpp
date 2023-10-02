#include "RegisterPage.h"

RegisterPage::RegisterPage(QWidget* parent) : QWidget(parent), ui(new Ui::RegisterPageClass)
{
    ui->setupUi(this);

    connect(ui->registerButton, &QPushButton::clicked, this, &RegisterPage::onRegisterButtonClicked);
}

void RegisterPage::onRegisterButtonClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwdLineEdit->text();
    QString confirmPassword = ui->confPasswdLineEdit->text();

    if (password == confirmPassword) {
        QMessageBox::information(this, "Success", "Inregistrare reusita!");
        emit registrationSuccessful();
    }
    else {
        QMessageBox::warning(this, "Eroare", "Parolele nu coincid!");
    }
}

RegisterPage::~RegisterPage() {
    delete ui;
}
