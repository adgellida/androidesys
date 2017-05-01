#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QProcess>
//#include <QAndroidJniObject>

///////////////////////TWEAKS TAB///////////////////////

void MainWindow::on_enableBootanimationButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling bootanimation."));
    system("sudo sed -i s/debug.sf.nobootanimation=0/debug.sf.nobootanimation=1/g /system/build.prop");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_disableBootanimationButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling bootanimation."));
    system("sudo sed -i s/debug.sf.nobootanimation=1/debug.sf.nobootanimation=0/g /system/build.prop");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_activateBootanimationSelectorButton_clicked()
{
    ui->statusBar->showMessage(tr("Activate Bootanimation"));
    //system("echo > \"debug.sf.nobootanimation=0 >> /system/build.prop\"");
    //system("bash -c mdkir //storage//emulated//0//test");

///////////TEST1
    QDir mypath(QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation));
    //QDir mypath("/storage/emulated/legacy");

        if(!mypath.cd("Test_now45"))
        {
            if(mypath.mkdir("Test_now45"))
                qDebug() << "path created";
            else
                qDebug() << "path not created";

        }
///////////TEST1

            /*
            ///////////TEST2-no
             QString path = "/storage/emulated/0/test5";

             QDir dir(path);
             if(!dir.exists())
             {
                 qDebug() << "Creating " << path << "directory";
                 dir.mkpath(path);
             }
             else
             {
                 qDebug() << path << " already exists";
             }
            ///////////TEST2
            */


            /*
            ///////////TEST3
            QDir mypath(QStandardPaths::writableLocation(QStandardPaths::DataLocation));

            if(!mypath.cd("Test_now2"))
            {
                if(mypath.mkpath("Test_now2"))
                    qDebug() << "path created";
                else
                    qDebug() << "path not created";
            }
            else
            {
                qDebug() << "inside dir";
            }

            ///////////TEST3
            */


            /*
            ///////////TEST4-nor
            QProcess process;

            process.start("echo test"); // Start "ls" and returns

            //process.start("mdkir /storage/emulated/0/test"); // Start "ls" and returns

            bool finished = process.waitForFinished(-1);

            qDebug() <<  "End : " << finished << " Output : " << process.errorString();
            ///////////TEST4
            */

}


