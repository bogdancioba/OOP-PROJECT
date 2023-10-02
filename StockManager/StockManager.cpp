#include "StockManager.h"

StockManager::StockManager(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    stack = new QStackedWidget(this);
    LoginPage* loginPage = new LoginPage(this);
    RegisterPage* registerPage = new RegisterPage(this);
    
    // Create the login page
    /*loginPage = new QWidget(this);
    QVBoxLayout* loginLayout = new QVBoxLayout(loginPage);
    QPushButton* loginButton = new QPushButton("Login", loginPage);
    loginLayout->addWidget(loginButton);*/

    // Create the main page
    mainPage = new QWidget(this);
    QVBoxLayout* mainLayout = new QVBoxLayout(mainPage);
    QPushButton* logoutButton = new QPushButton("Logout", mainPage);
    mainLayout->addWidget(logoutButton);

    // Add the pages to the stack
    stack->addWidget(loginPage);
    stack->addWidget(registerPage);
    stack->addWidget(mainPage);

    // Connect the buttons to switch between pages
    connect(loginPage, &LoginPage::authenticationSuccessful, [this]() {
        stack->setCurrentWidget(mainPage);
        });

    connect(loginPage->getRegisterButton(), &QPushButton::clicked, [this, registerPage]() {
        stack->setCurrentWidget(registerPage);
        });

    connect(registerPage, &RegisterPage::registrationSuccessful, [this, loginPage]() {
        stack->setCurrentWidget(loginPage);
        });

    connect(logoutButton, &QPushButton::clicked, [this, loginPage]() {
        stack->setCurrentWidget(loginPage);
        });

    // Set the stack as the central widget
    setCentralWidget(stack);
}

StockManager::~StockManager()
{}
