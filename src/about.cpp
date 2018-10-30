#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;

    about.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    about.setText("<p align='left'><b>androidesys</b></p></br>"
                  "<p align='left'>Configurable app referent to configurations</p></br>"
                  "<p align='left'>Built with Qt</p></br>"
                  "<p align='left'>Credits to <a href='https://thenounproject.com/bernar.novalyi/'>Bernar Novalyi</a> from Noun Project "
                  "that creates the app <a href='https://thenounproject.com/term/terminal/715962/'>icon</a> used here. Beautiful!</p></br>"
                  "<p align='left'>Based on <a href='https://github.com/adgellida/ubunsys'>ubunsys</a></p></br>"
                  "<p align='left'>And also on <a href='https://github.com/adgellida/winsys'>winsys</a></p></br>"
                  "<p align='left'><a href='https://github.com/adgellida/androidesys'>Git Repo</a></p></br>");

    about.setInformativeText("Copyright (c) 2017 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com"
                             "\n\nv2017.05.01");

    about.setWindowTitle("About");
    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/androidesys.ico"));
    about.setWindowIcon(QIcon(":/images/androidesys.ico"));
    //about.setIcon(":/images/androidesys.ico");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
