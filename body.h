#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createMatrix(float matrix[][10], int baris, int kolom);
void displayMatrix(float matrix[][10], int baris, int kolom);
void multipleMatrix(float matrixA[][10], float matrixB[][10], float matrixC[][10], int barisA, int kolomA, int barisB, int kolomB);
void matriksNol(float matrixNol[][10], float matrix[][10], int baris, int kolom);
void inversMatriks();
void Perkalian_matrix_scalar(float matrix[][10],int baris,int kolom,float scalar);
void Pengurangan_matrix(float a[][10],float b[][10],float c[][10],int baris,int kolom)

#endif