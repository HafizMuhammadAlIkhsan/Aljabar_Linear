#include "body.h"

void createMatrix(float matrix[10][10], int baris, int kolom)
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

void displayMatrix(float matrix[10][10], int baris, int kolom)
{
    cout << "Matriks" << endl;
    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multipleMatrix(float matrixA[][10], float matrixB[][10], int barisA, int kolomA, int barisB, int kolomB)
{
    int m, n, j, i, k, r;
    
    float tempMatrixC[10][10];

    if (kolomA != barisB)
    {
        return;
    }

    r = kolomA; 
    m = barisA; 
    n = kolomB;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            tempMatrixC[i][j] = 0; 
            for (k = 0; k < r; k++)
            {
                tempMatrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    displayMatrix(tempMatrixC, barisA, kolomB);
}


void matriksNol(float matrixNol[][10], int baris, int kolom)
{
    float tempMatrix[10][10];
    
    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            tempMatrix[i][j] = matrixNol[i][j];
        }
    }

    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            tempMatrix[i][j] = 0;
        }
    }
    
    displayMatrix(tempMatrix, baris, kolom);
}


void inversMatriks(float matrix[10][10], int baris, int kolom)
{
    int det, i, j;
    float invers[2][2], matriks[2][2];

    if (baris != 2 && kolom != 2)
    {
        cout << "Hanya untuk matriks dengan ordo 2x2\n";
        return;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matriks[i][j] = matrix[i][j];
        }
    }

    det = matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0];

    if (det == 0)
    {
        cout << "Matriks tersebut memiliki determinan 0" << endl;
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

void Perkalian_matrix_scalar(float matrix[][10], float matrixb[][10],int baris, int kolom, float scalar)
{
    for (int i = 0; i < baris; ++i)
    {
        for (int j = 0; j < kolom; ++j)
        {
            matrixb[i][j]= matrix[i][j] * scalar;
        }
        cout << endl;
    }
}

void Penjumlahan_matrix(float matrixa[][10], float matrixb[][10], float matrixc[][10],int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            matrixc[i][j] = matrixa[i][j] + matrixb[i][j];
        }
    }
}

void Pengurangan_matrix(float matrixa[][10], float matrixb[][10], float matrixc[][10],int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            matrixc[i][j] = matrixa[i][j] - matrixb[i][j];
        }
    }
}

void matrixTranspose(float matrix[][10], int baris, int kolom)
{
    float matrixTranspose[10][10];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            matrixTranspose[j][i] = matrix[i][j];
        }
    }

    cout << endl
         << "hasil setelah transpose" << endl;
    for (int i = 0; i < kolom; ++i)
    {
        for (int j = 0; j < baris; ++j)
        {
            cout << matrixTranspose[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixIdentitas(float matrix[][10], int baris, int kolom)
{
    float matrixIdentitas[10][10];
    
    if (baris == kolom)
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                if (i == j)
                {
                    matrixIdentitas[i][j] = 1;
                }
                else
                {
                    matrixIdentitas[i][j] = 0;
                }
            }
        }
        displayMatrix(matrixIdentitas, baris, kolom);
    }
    else
    {
        cout << "Bukan matriks persegi, sehingga Trace tidak bisa didapat.";
    }
}

void matrixTrace(float matrix[][10], int baris, int kolom)
{
    int hasil = 0;

    if (baris == kolom)
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                if (i == j)
                {
                    hasil = hasil + matrix[i][j];
                }
            }
        }
        cout << hasil;
    }
    else
    {
        cout << "Bukan matriks persegi, sehingga Trace tidak bisa didapat.";
    }
}
