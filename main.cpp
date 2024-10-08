#include <iostream>
#include "body.h"
using namespace std;

int main()
{
    int barisA, kolomA, barisB, kolomB, i, j, pilihan;
    float a[10][10], b[10][10], c[10][10], scalar;
    char pilihan_dua_matrix, pilihMatriks;

    cout << "Masukan baris untuk matriks A: ";
    cin >> barisA;
    cout << "Masukan kolom untuk matriks A: ";
    cin >> kolomA;

    createMatrix(a, barisA, kolomA);
    displayMatrix(a, barisA, kolomA);

    cout << "\nMasukan baris untuk matriks B: ";
    cin >> barisB;
    cout << "Masukan kolom untuk matriks B: ";
    cin >> kolomB;

    createMatrix(b, barisB, kolomB);
    displayMatrix(b, barisB, kolomB);

    do
    {
        cout << "\nPilih fitur" << "\n";
        cout << "1. Menjumlahkan kedua matriks\n";
        cout << "2. Mengurangi kedua matriks\n";
        cout << "3. Mengalikan kedua matriks\n";
        cout << "4. Mengalikan matriks dengan skalar\n";
        cout << "5. Transpose matriks\n";
        cout << "6. Trace matriks\n";
        cout << "7. Matriks Nol\n";
        cout << "8. Matriks Identitas\n";
        cout << "9. Invers matriks\n";
        cout << "Pilihan berupa angka (1-9)\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
        case 1:
            if (barisA == barisB && kolomA == kolomB)
            {
                Penjumlahan_matrix(a, b, c,barisA, barisB);
                displayMatrix(c, barisA, kolomA);
            }
            else
            {
                cout << "Karena matrix tidak seimbang maka tidak dapat di operasikan";
            }
            break;
        case 2:
            if (barisA == barisB && kolomA == kolomB)
            {
                Pengurangan_matrix(a, b,c, barisA, kolomB);
                displayMatrix(c, barisA, kolomA);
            }
            else
            {
                cout << "Karena matrix tidak seimbang maka tidak dapat di operasikan";
            }
            break;
        case 3:
            if (kolomA == barisB)
            {
                multipleMatrix(a, b, barisA, kolomA, barisB, kolomB);
            }
            else
            {
                cout << "Karena jumlah kolom matriks A tidak sama dengan jumlah baris matriks B, maka tidak dapat dioperasikan.\n";
            }
            break;
        case 4:
            cout << "Dikali Scalar berapa?";
            cin >> scalar;

            cout << "Mau matrix yang mana? (A/B)\n";
            cin >> pilihan_dua_matrix;
            pilihan_dua_matrix = toupper(pilihan_dua_matrix);

            switch (pilihan_dua_matrix)
            {
            case 'A':
                Perkalian_matrix_scalar(a,c, barisA, kolomA, scalar);
                displayMatrix(c, barisA, kolomA);
                break;
            case 'B':
                Perkalian_matrix_scalar(b,c, barisB, kolomB, scalar);
                displayMatrix(c, barisB, kolomB);
                break;
            default:
                cout << "Tolong masukan input yang valid\n";
                break;
            }
            break;
        case 5:
            cout << "Mau matrix yang mana? (A / B)\n";
            cin >> pilihan_dua_matrix;
            pilihan_dua_matrix = toupper(pilihan_dua_matrix);

            switch (pilihan_dua_matrix)
            {
            case 'A':
                matrixTranspose(a, barisA, kolomA);
                break;
            case 'B':
                matrixTranspose(b, barisB, kolomB);
                break;
            default:
                cout << "Tolong masukan input yang valid, A / B\n";
                break;
            }
            break;
        case 6:
            cout << "Mau matrix yang mana? (A / B)\n";
            cin >> pilihan_dua_matrix;
            pilihan_dua_matrix = toupper(pilihan_dua_matrix);

            switch (pilihan_dua_matrix)
            {
            case 'A':
                matrixTrace(a, barisA, kolomA);
                break;
            case 'B':
                matrixTrace(b, barisB, kolomB);
                break;
            default:
                cout << "Tolong masukan input yang valid, A / B\n";
                break;
            }
            break;
        case 7:
            cout << "Mau matrix yang mana? (A / B)\n";
            cin >> pilihan_dua_matrix;
            pilihan_dua_matrix = toupper(pilihan_dua_matrix);

            switch (pilihan_dua_matrix)
            {
            case 'A':
                matriksNol(a, barisA, kolomA); 
                break;
            case 'B':
                matriksNol(b, barisB, kolomB); 
                break;
            default:
                cout << "Tolong masukan input yang valid, A / B\n";
                break;
            }
            break;
        case 8:
            cout << "Mau matrix yang mana? (A / B)\n";
            cin >> pilihan_dua_matrix;
            pilihan_dua_matrix = toupper(pilihan_dua_matrix);

            switch (pilihan_dua_matrix)
            {
            case 'A':
                matrixIdentitas(a, barisA, kolomA);
                break;
            case 'B':
                matrixIdentitas(b, barisB, kolomB);
                break;
            default:
                cout << "Tolong masukan input yang valid, A / B\n";
                break;
            }
            break;
        case 9:
            cout << "\nPilih matriks yang ingin di invers\n";

            cout << "A ";
            displayMatrix(a, barisA, kolomA);
            cout << "\nB ";
            displayMatrix(b, barisB, kolomB);

            cout << "\nPilih Matriks A atau Matriks B: ";
            cin >> pilihMatriks;
            cin.ignore();

            if (pilihMatriks == 'a' || pilihMatriks == 'A')
            {
                inversMatriks(a, barisA, kolomA);
                system("pause");
            }
            else if (pilihMatriks == 'b' || pilihMatriks == 'B')
            {
                inversMatriks(b, barisB, kolomB);
                system("pause");
            }
            else
            {
                cout << "Pilihan tidak sesuai\n";
                system("pause");
            }
            break;
        default:
            break;
        }
    } while (pilihan < 10);

    return 0;
}