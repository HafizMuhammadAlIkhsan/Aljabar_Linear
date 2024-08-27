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

