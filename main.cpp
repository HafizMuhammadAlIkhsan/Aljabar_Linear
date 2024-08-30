#include <iostream>
#include "body.h"
using namespace std;

int main()
{
    int barisA, kolomA, barisB, kolomB, i, j;
    float a[10][10], b[10][10], c[10][10];
    int pilihan;
    float scalar;
    char pilihan_dua_matrix;

    cout << "Masukan baris untuk matriks A: ";
    cin >> barisA;

    cout << "Masukan kolom untuk matriks A: ";
    cin >> kolomA;

    createMatrix(a, barisA, kolomA);
    displayMatrix(a, barisA, kolomA);

    /*
    cout << "\nMasukan baris untuk matriks B: ";
    cin >> barisB;

    cout << "Masukan kolom untuk matriks B: ";
    cin >> kolomB;

    createMatrix(b, barisB, kolomB);
    displayMatrix(b, barisB, kolomB);
    */

    cout << "Mau ngapaiin?" << "\n";
    cout << "1. Perkalian Scalar" << "\n";
    cout << "2. Tambahkan kedua matrix\n";
    cout << "3. kurang kedua matrix\n";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    cout << "Dikali Scalar berapa?";
    cin >> scalar;
    Perkalian_matrix_scalar(a,barisA,kolomA,scalar);
    displayMatrix(a,barisA,kolomA);

    /*
    cout <<"Mau matrix yang mana? (A/B)\n";
    cin >> pilihan_dua_matrix;
    pilihan_dua_matrix=toupper(pilihan_dua_matrix);

    switch (pilihan_dua_matrix)
    {
    case 'A':
    Perkalian_matrix_scalar(a,barisA,kolomA,scalar);
    displayMatrix(a,barisA,kolomA);
        break;
    case 'B':
    Perkalian_matrix_scalar(b,barisB,kolomB,scalar);
    displayMatrix(b,barisB,kolomB);
        break;
    default:
        cout << "Tolong masukan input yang valid\n";
        break;
    }
          
        break;
        */
    case 2:
        if (barisA == barisB && kolomA == kolomB)
        {
            /* code */
        }
        else
        {
            cout << "Karena matrix tidak seimbang maka tidak dapat di operasikan";
        }
        break;
    case 3:
        if (barisA == barisB && kolomA == kolomB)
        {
            /* code */
        }
        else
        {
            cout << "Karena matrix tidak seimbang maka tidak dapat di operasikan";
        }
        break;
    default:
        break;
    }

    return 0;
}