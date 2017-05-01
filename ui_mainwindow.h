/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionPaste;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionSave_as;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPreferences;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *unselectAllButton;
    QPushButton *selectAllButton;
    QPushButton *installSelectedPackagesButton;
    QPushButton *uninstallSelectedPackagesButton;
    QPushButton *loadSelectionButton;
    QPushButton *saveSelectionButton;
    QTabWidget *tabWidget_2;
    QWidget *tab_11;
    QLabel *label_18;
    QPushButton *runDriverPackOnlineButton;
    QPushButton *installChocolateyButton;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QPushButton *enableBootanimationButton;
    QLabel *label_12;
    QPushButton *disableBootanimationButton;
    QPushButton *activateBootanimationSelectorButton;
    QWidget *tab_5;
    QTabWidget *tabWidget_6;
    QWidget *tab_14;
    QCheckBox *checkBox_002;
    QCheckBox *checkBox_001;
    QPushButton *loadServicesSelectionButton;
    QPushButton *disableAllServicesButton;
    QPushButton *enableAllServicesButton;
    QPushButton *saveSelectionButton_2;
    QPushButton *applyButton;
    QPushButton *RestoreServicesToDefaultButton;
    QLabel *label;
    QPushButton *updateAppButton;
    QPushButton *updateScriptsButton;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuEdici_n;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(709, 1142);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/androidesys.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionSave_as->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        actionSave->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setEnabled(false);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 701, 1081));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        unselectAllButton = new QPushButton(tab_4);
        unselectAllButton->setObjectName(QStringLiteral("unselectAllButton"));
        unselectAllButton->setEnabled(false);
        unselectAllButton->setGeometry(QRect(470, 30, 221, 81));
        selectAllButton = new QPushButton(tab_4);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        selectAllButton->setGeometry(QRect(469, 130, 221, 71));
        installSelectedPackagesButton = new QPushButton(tab_4);
        installSelectedPackagesButton->setObjectName(QStringLiteral("installSelectedPackagesButton"));
        installSelectedPackagesButton->setEnabled(false);
        installSelectedPackagesButton->setGeometry(QRect(469, 210, 221, 81));
        uninstallSelectedPackagesButton = new QPushButton(tab_4);
        uninstallSelectedPackagesButton->setObjectName(QStringLiteral("uninstallSelectedPackagesButton"));
        uninstallSelectedPackagesButton->setEnabled(false);
        uninstallSelectedPackagesButton->setGeometry(QRect(469, 300, 221, 81));
        uninstallSelectedPackagesButton->setCheckable(false);
        loadSelectionButton = new QPushButton(tab_4);
        loadSelectionButton->setObjectName(QStringLiteral("loadSelectionButton"));
        loadSelectionButton->setEnabled(false);
        loadSelectionButton->setGeometry(QRect(469, 390, 221, 81));
        saveSelectionButton = new QPushButton(tab_4);
        saveSelectionButton->setObjectName(QStringLiteral("saveSelectionButton"));
        saveSelectionButton->setEnabled(false);
        saveSelectionButton->setGeometry(QRect(469, 480, 221, 81));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 431, 571));
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_18 = new QLabel(tab_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 101, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_18->setFont(font);
        runDriverPackOnlineButton = new QPushButton(tab_11);
        runDriverPackOnlineButton->setObjectName(QStringLiteral("runDriverPackOnlineButton"));
        runDriverPackOnlineButton->setEnabled(true);
        runDriverPackOnlineButton->setGeometry(QRect(10, 170, 261, 91));
        runDriverPackOnlineButton->setIconSize(QSize(30, 30));
        runDriverPackOnlineButton->setCheckable(false);
        installChocolateyButton = new QPushButton(tab_11);
        installChocolateyButton->setObjectName(QStringLiteral("installChocolateyButton"));
        installChocolateyButton->setEnabled(true);
        installChocolateyButton->setGeometry(QRect(10, 70, 261, 91));
        installChocolateyButton->setIconSize(QSize(30, 30));
        installChocolateyButton->setCheckable(false);
        tabWidget_2->addTab(tab_11, QString());
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 691, 441));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_3->setFont(font1);
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        enableBootanimationButton = new QPushButton(tab_6);
        enableBootanimationButton->setObjectName(QStringLiteral("enableBootanimationButton"));
        enableBootanimationButton->setGeometry(QRect(10, 40, 281, 91));
        enableBootanimationButton->setIconSize(QSize(30, 30));
        enableBootanimationButton->setCheckable(false);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 181, 21));
        label_12->setFont(font);
        disableBootanimationButton = new QPushButton(tab_6);
        disableBootanimationButton->setObjectName(QStringLiteral("disableBootanimationButton"));
        disableBootanimationButton->setGeometry(QRect(10, 140, 281, 91));
        disableBootanimationButton->setIconSize(QSize(30, 30));
        disableBootanimationButton->setCheckable(false);
        activateBootanimationSelectorButton = new QPushButton(tab_6);
        activateBootanimationSelectorButton->setObjectName(QStringLiteral("activateBootanimationSelectorButton"));
        activateBootanimationSelectorButton->setGeometry(QRect(10, 240, 281, 111));
        activateBootanimationSelectorButton->setIconSize(QSize(30, 30));
        activateBootanimationSelectorButton->setCheckable(false);
        tabWidget_3->addTab(tab_6, QString());
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_6 = new QTabWidget(tab_5);
        tabWidget_6->setObjectName(QStringLiteral("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 431, 731));
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        checkBox_002 = new QCheckBox(tab_14);
        checkBox_002->setObjectName(QStringLiteral("checkBox_002"));
        checkBox_002->setGeometry(QRect(270, 10, 211, 91));
        checkBox_001 = new QCheckBox(tab_14);
        checkBox_001->setObjectName(QStringLiteral("checkBox_001"));
        checkBox_001->setGeometry(QRect(10, 10, 211, 91));
        tabWidget_6->addTab(tab_14, QString());
        loadServicesSelectionButton = new QPushButton(tab_5);
        loadServicesSelectionButton->setObjectName(QStringLiteral("loadServicesSelectionButton"));
        loadServicesSelectionButton->setGeometry(QRect(489, 410, 201, 71));
        disableAllServicesButton = new QPushButton(tab_5);
        disableAllServicesButton->setObjectName(QStringLiteral("disableAllServicesButton"));
        disableAllServicesButton->setGeometry(QRect(490, 30, 201, 81));
        enableAllServicesButton = new QPushButton(tab_5);
        enableAllServicesButton->setObjectName(QStringLiteral("enableAllServicesButton"));
        enableAllServicesButton->setGeometry(QRect(489, 140, 201, 71));
        saveSelectionButton_2 = new QPushButton(tab_5);
        saveSelectionButton_2->setObjectName(QStringLiteral("saveSelectionButton_2"));
        saveSelectionButton_2->setEnabled(false);
        saveSelectionButton_2->setGeometry(QRect(489, 490, 201, 71));
        applyButton = new QPushButton(tab_5);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(489, 240, 201, 61));
        RestoreServicesToDefaultButton = new QPushButton(tab_5);
        RestoreServicesToDefaultButton->setObjectName(QStringLiteral("RestoreServicesToDefaultButton"));
        RestoreServicesToDefaultButton->setGeometry(QRect(489, 320, 201, 71));
        label = new QLabel(tab_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 970, 161, 41));
        tabWidget->addTab(tab_5, QString());
        updateAppButton = new QPushButton(centralWidget);
        updateAppButton->setObjectName(QStringLiteral("updateAppButton"));
        updateAppButton->setGeometry(QRect(509, 752, 81, 51));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/flecha_arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateAppButton->setIcon(icon7);
        updateScriptsButton = new QPushButton(centralWidget);
        updateScriptsButton->setObjectName(QStringLiteral("updateScriptsButton"));
        updateScriptsButton->setGeometry(QRect(600, 752, 81, 51));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/upgrade.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateScriptsButton->setIcon(icon8);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 709, 22));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuEdici_n = new QMenu(menuBar);
        menuEdici_n->setObjectName(QStringLiteral("menuEdici_n"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuEdici_n->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuNuevo->addSeparator();
        menuNuevo->addSeparator();
        menuNuevo->addAction(actionExit);
        menuEdici_n->addAction(actionPreferences);
        menuAyuda->addAction(actionTutorial);
        menuAyuda->addAction(actionAbout);
        menuAyuda->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "androidesys", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
        actionCut->setIconText(QApplication::translate("MainWindow", "Cortar", Q_NULLPTR));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", Q_NULLPTR));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", Q_NULLPTR));
        unselectAllButton->setText(QApplication::translate("MainWindow", "Unselect All", Q_NULLPTR));
        selectAllButton->setText(QApplication::translate("MainWindow", "Select All", Q_NULLPTR));
        installSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Install", Q_NULLPTR));
        uninstallSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Uninstall", Q_NULLPTR));
        loadSelectionButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        saveSelectionButton->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Utilities", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setText(QApplication::translate("MainWindow", "Option 3", Q_NULLPTR));
        runDriverPackOnlineButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        installChocolateyButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChocolateyButton->setText(QApplication::translate("MainWindow", "Option 2", Q_NULLPTR));
        installChocolateyButton->setShortcut(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Packages 1/1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Install packages", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        enableBootanimationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableBootanimationButton->setText(QApplication::translate("MainWindow", "Enable", Q_NULLPTR));
        enableBootanimationButton->setShortcut(QString());
        label_12->setText(QApplication::translate("MainWindow", "Bootanimation", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        disableBootanimationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableBootanimationButton->setText(QApplication::translate("MainWindow", "Disable", Q_NULLPTR));
        disableBootanimationButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        activateBootanimationSelectorButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        activateBootanimationSelectorButton->setText(QApplication::translate("MainWindow", "Activate Bootanimation\n"
" Selector", Q_NULLPTR));
        activateBootanimationSelectorButton->setShortcut(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Tweaks 1/1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tweaks", Q_NULLPTR));
        checkBox_002->setText(QApplication::translate("MainWindow", "001.Option1\n"
" - DISABLE", Q_NULLPTR));
        checkBox_001->setText(QApplication::translate("MainWindow", "001.Option1\n"
" - ENABLE", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_14), QApplication::translate("MainWindow", "Services 1/1", Q_NULLPTR));
        loadServicesSelectionButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        disableAllServicesButton->setText(QApplication::translate("MainWindow", "Disable All", Q_NULLPTR));
        enableAllServicesButton->setText(QApplication::translate("MainWindow", "Enable All", Q_NULLPTR));
        saveSelectionButton_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", Q_NULLPTR));
        RestoreServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore\n"
" to Default", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "v2017.05.01", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Services", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        updateAppButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update program</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updateAppButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        updateScriptsButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update scripts</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updateScriptsButton->setText(QString());
        menuNuevo->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdici_n->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
