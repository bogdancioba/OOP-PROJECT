#pragma once

#include <QtWidgets/QMainWindow>
#include <QStackedWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include "ui_StockManager.h"
#include "DataBase.h"
#include "LoginPage.h"
#include "RegisterPage.h"

class StockManager : public QMainWindow
{
    Q_OBJECT
    QStackedWidget* stack;
    QWidget* loginPage;
    QWidget* mainPage;
    //Database db;
    LoginPage* login;

public:
    StockManager(QWidget *parent = nullptr);
    ~StockManager();

private:
    Ui::StockManagerClass ui;
};
