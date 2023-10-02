//#include "Database.h"
//
//Database::Database()
//{
//    connectToDatabase();
//}
//
//Database::~Database()
//{
//    if (db.isOpen()) {
//        db.close();
//    }
//}
//
//void Database::connectToDatabase() {
//    db = QSqlDatabase::addDatabase("QODBC");
//    db.setHostName("localhost");  // replace with your host name
//    db.setDatabaseName("myDatabase");  // replace with your database name
//    db.setUserName("myUsername");  // replace with your username
//    db.setPassword("myPassword");  // replace with your password
//
//    if (!db.open()) {
//        qCritical() << "Failed to connect to database:" << db.lastError();
//    }
//}
//
//bool Database::checkCredentials(const QString& username, const QString& password) {
//    QSqlQuery query;
//    query.prepare("SELECT * FROM Users WHERE Username = :username AND Password = :password");
//    query.bindValue(":username", username);
//    query.bindValue(":password", password);
//
//    if (query.exec() && query.next()) {
//        return true;  // user found
//    }
//    else {
//        return false;  // user not found
//    }
//}
