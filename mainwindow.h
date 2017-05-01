#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <QString>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:



private slots:
/*    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();


    void on_integrityCheckButton_clicked();
    void on_unselectAllButton_clicked();
    void on_selectAllButton_clicked();
    void on_installSelectedPackagesButton_clicked();
    void on_uninstallSelectedPackagesButton_clicked();
    void on_loadSelectionButton_clicked();
    void on_saveSelectionButton_clicked();
    void on_enableBootanimationButton_clicked();
    void on_disableBootanimationButton_clicked();
    void on_getFirewallStatusButton_clicked();
    void on_completeShutdownButton_clicked();
    void on_applyButton_clicked();
    void on_disableAllServicesButton_clicked();
    void on_enableAllServicesButton_clicked();
    void on_loadServicesSelectionButton_clicked();
    void on_openRegeditButton_clicked();
    void on_openTaskmgrButton_clicked();
    void on_restartExplorerButton_clicked();
    void on_startExplorerButton_clicked();
    void on_knowLicenceExpirationButton_clicked();
    void on_openServicesButton_clicked();
    void on_openCmdButton_clicked();
    void on_openPowershellButton_clicked();
    void on_fixTimeOnDualbootButton_clicked();
    void on_updateSystemTimeButton_clicked();
    void on_restoreDefaultsServicesButton_clicked();
    void on_RestartButton_clicked();
    void on_searchUpdatesButton_clicked();
    void on_RestoreServicesToDefaultButton_clicked();
    void on_installChocolateyButton_clicked();
    void on_runDriverPackOnlineButton_clicked();
        */

    void on_actionTutorial_triggered();
    void on_updateAppButton_clicked();
    void on_updateScriptsButton_clicked();
    void on_enableBootanimationButton_clicked();
    void on_disableBootanimationButton_clicked();
    void on_activateBootanimationSelectorButton_clicked();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
