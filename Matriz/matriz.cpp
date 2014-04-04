#include "matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz()
{
}

void Matriz::create(const int columns, const int rows) {
    this->content = new double*[columns];
    for(int i = 0; i < rows; ++i) {
        this->content[i] = new double[rows];
    }
    this->columns = columns;
    this->rows = rows;
}

void Matriz::setElementAt(int column, int row, double value) {
    this->content[column][row] = value;
}

double Matriz::elementAt(int column, int row) const {
    return this->content[column][row];
}

void Matriz::sub(const MatrixADT &other)
{
    cout << "AQUI" << other.elementAt(0,0) << endl;
}

void Matriz::print() {
    for(int j = 0; j < rows; ++j) {
        for(int i = 0; i < columns; ++i) {
            cout << this->elementAt(j,i) << " ";
        }
        cout << endl;
    }
}
