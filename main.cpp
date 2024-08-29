#include <iostream>
#include "body.h"
using namespace std;

int main()
{
    int barisA, kolomA, barisB, kolomB, a[100][100], b[100][100], i, j;

    cout << "\nMasukan baris untuk matriks B: ";
    cin >> barisB;

    cout << "Masukan kolom untuk matriks B: ";
    cin >> kolomB;

    createMatrix(b, barisB, kolomB);
    displayMatrix(b, barisB, kolomB);

    cout << "Masukan baris untuk matriks A: ";
    cin >> barisA;

    cout << "Masukan kolom untuk matriks A: ";
    cin >> kolomA;

    createMatrix(a, barisA, kolomA);
    displayMatrix(a, barisA, kolomA);

    inversMatriks();

    return 0;
}