#include "body.h"

void createMatrix(float matrix[][10], int baris, int kolom)
{
    int i, j;

    for (i = 0; i < baris; ++i)
    {
        for (j = 0; j < kolom; ++j)
        {
            cout << "Masukan elemen matriks" << i + 1 << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(float matrix[][10], int baris, int kolom)
{
    cout << endl << "Matriks" << endl;
    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multipleMatrix(float matrixA[][10], float matrixB[][10], float matrixC[][10], int barisA, int kolomA, int barisB, int kolomB)
{
    int m, n, j, i, k, r;

    if (kolomA != barisB)
    {
        return;
    }

    if (kolomA == barisB)
    {
        r = kolomA;
    }

    m = barisA;
    n = kolomB;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrixC[i][j] = 0;
            for (k = 0; k <  r; k++)
            {
                matrixC[i][j] = matrixC[i][j] + matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    displayMatrix(matrixC, barisA, kolomB);
}

void matriksNol(float matrixNol[][10], int matrix[][10], int baris, int kolom)
{
    int i, j, k, r;

    for (i = 0; i < baris; ++i)
    {
        matrixNol[i][j] = 0;
        for (j = 0; j < kolom; ++j)
        {
            matrixNol[i][j] = matrixNol[i][j] + matrix[i][k] * 0;
            // for (k = 0; k <  r; k++)
            // {
            //     matrixNol[i][j] = matrixNol[i][j] + matrix[i][k] * 0;
            // }
        }
    }
    displayMatrix(matrixNol, baris, kolom);
}

void inversMatriks()
{
    int matriks[2][2], i, j, det;
    float invers[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "a" << i + 1 << j + 1 << " = ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    det = matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0];

    if (det == 0)
    {
        cout << "determinan 0." << endl;
        return;
    }

    invers[0][0] = matriks[1][1] / det;
    invers[0][1] = -matriks[0][1] / det;
    invers[1][0] = -matriks[1][0] / det;
    invers[1][1] = matriks[0][0] / det;

    cout << "Matriks Invers:" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << invers[i][j] << " ";
        }
        cout << endl;
    }
}

void Perkalian_matrix_scalar(float matrix[][10],int baris,int kolom,float scalar){
    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            matrix[i][j] *= scalar ;
        }
        cout << endl;
    }
    
}
void Penjumlahan_matrix(float a[][10],float b[][10],float c[][10],int baris,int kolom){
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; i < kolom; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
        
    }
    
}

void Pengurangan_matrix(float a[][10],float b[][10],float c[][10],int baris,int kolom){
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; i < kolom; j++)
        {
            c[i][j] = a[i][j]-b[i][j];
        }
        
    }
}
