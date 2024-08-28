#include "body.h"

void createMatrix(int matrix[][100], int baris, int kolom)
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

void displayMatrix(int matrix[][100], int baris, int kolom)
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