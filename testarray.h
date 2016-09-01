#ifndef TESTARRAY_H
#define TESTARRAY_H

#include <QtCore>
#include <QDebug>


template <typename T>
class TestArray
{
public:
    TestArray(int dimension);
    ~TestArray();

    void setValue(int a, T inValue);
    T    getValue(int a);

    T* arrayData = NULL;
    int dim;
};

//---------- Constructor TestArray ----------

template <typename T>
TestArray<T> :: TestArray(int dimension)
{
    qDebug()<<"Constructor   TestArray";

    dim = dimension;
    uint nBytes = dim * sizeof(T);
    arrayData = new T[nBytes];
}

//---------- Destructor TestArray ----------

template <typename T>
TestArray<T> :: ~TestArray()
{
    qDebug()<<"Destructor   TestArray";

    if (arrayData != NULL) delete arrayData;
}

//---------- setValue ----------

template <typename T>
void TestArray<T> :: setValue(int a, T inValue){

    int index = a * dim;
    arrayData[index] = inValue;
}

//---------- getValue ----------

template <typename T>
T TestArray<T> :: getValue(int a){

    int index = a * dim;
    return arrayData[index];
}














#endif // TESTARRAY_H
