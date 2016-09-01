#include "mainwindow.h"

//---------- Constructor MainWindow ----------

MainWindow :: MainWindow(QWidget *parent) : QMainWindow(parent)
{
    qDebug()<<"Constructor   MainWindow";

    floatArray = new TestArray<float>(5);

    float value = 0.0;
    for (int i=0; i<5; i++){
        floatArray->setValue(i, value);
        value = value + 1.1;
    }//for i
}

//---------- Destructor MainWindow ----------

MainWindow :: ~MainWindow()
{
    qDebug()<<"Destructor   MainWindow";

    delete floatArray;
    //delete templateArray;
}

//---------- floatTestFunction ----------

void MainWindow :: floatTestFunction(){

    float value;
    for (int i=0; i<5; i++){
        value = floatArray->getValue(i);
        qDebug()<<i<<"   "<<value;
    }//for i
}//floatTestFunction

//---------- templateTestFunction ----------

void MainWindow :: templateTestFunction(){

    //TODO

}//templateTestFunction
