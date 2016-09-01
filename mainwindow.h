#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#ifndef TESTARRAY_H
#include "testarray.h"
#endif

#include <QMainWindow>


//---------- class MainWindow ----------

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void floatTestFunction();
    void templateTestFunction();

    TestArray<float>* floatArray;
};

#endif // MAINWINDOW_H
