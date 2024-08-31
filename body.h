#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createMatrix(float matrix[10][10], int baris, int kolom);
void displayMatrix(float matrix[10][10], int baris, int kolom);
void multipleMatrix(float matrixA[][10], float matrixB[][10], float matrixC[][10], int barisA, int kolomA, int barisB, int kolomB);
void matriksNol(float matrixNol[][10], int baris, int kolom);
void inversMatriks(float matrix[10][10], int baris, int kolom);
void Perkalian_matrix_scalar(float matrix[][10],float matrixb[][10],int baris,int kolom,float scalar);
void Pengurangan_matrix(float matrixa[][10],float matrixb[][10],float matrixc[][10],int baris,int kolom);
void Penjumlahan_matrix(float matrixa[][10],float matrixb[][10],float matrixc[][10],int baris,int kolom);
void matrixTranspose(float matrix[][10], int baris, int kolom);
void matrixIdentitas(float matrix[][10], int baris, int kolom);
void matrixTrace(float matrix[][10], int baris, int kolom);

#endif