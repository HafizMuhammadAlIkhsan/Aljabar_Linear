#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createMatrix(int matrix[][100], int baris, int kolom);
void displayMatrix(int matrix[][100], int baris, int kolom);
void multipleMatrix(int matrixA[][100], int matrixB[][100], int matrixC[][100], int barisA, int kolomA, int barisB, int kolomB);
void matriksNol(int matrixNol[][100], int matrix[][100], int baris, int kolom);
void inversMatriks();

#endif