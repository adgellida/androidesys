#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText("<p align='left'><b>androidesys</b></p></br>"
                  "<p align='left'>Pending</p></br>");

    information.setWindowTitle("Tutorial");
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/androidesys.ico"));
    information.setWindowIcon(QIcon(":/images/androidesys.ico"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
