#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input matriks A
    cout << "Masukkan elemen matriks A (3x3):" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Input matriks B
    cout << "Masukkan elemen matriks B (3x3):" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Inisialisasi matriks hasil
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Proses perkalian matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menghitung ukuran matriks menggunakan sizeof()
    int ukuranMatriks = sizeof(A);
    int ukuranElemen = sizeof(A[0][0]);
    int jumlahElemen = ukuranMatriks / ukuranElemen;

    // Output hasil perkalian
    cout << "\nHasil perkalian matriks A dan B:" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    // Output informasi sizeof
    cout << "\nUkuran total matriks (byte) : " << ukuranMatriks << "\n";
    cout << "Jumlah elemen matriks       : " << jumlahElemen << "\n";

    return 0;
}
