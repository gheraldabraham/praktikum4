/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : JumBarKolMat.c
   Deskripsi    : Mengecek dan menghitung jumlah baris kolom matriks
*/


#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    // Kamus
    int T[MAX_ROWS][MAX_COLS];
    int total_baris[MAX_ROWS] = {0};
    int total_kolom[MAX_COLS] = {0};
    int rows, cols, i, j;

    // Algoritma
    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &T[i][j]);
            total_baris[i] += T[i][j];
            total_kolom[j] += T[i][j];
        }
    }

    // Menampilkan jumlah untuk setiap baris
    for (i = 0; i < rows; i++) {
        printf("Baris ke-%d: ", i + 1);
        for (j = 0; j < cols; j++) {
            printf("%d", T[i][j]);
            if (j < cols - 1) {
                printf("+");
            }
        }
        printf("=%d\n", total_baris[i]);
    }

    for (j = 0; j < cols; j++) {
        printf("Kolom ke-%d: ", j + 1);
        for (i = 0; i < rows; i++) {
            printf("%d", T[i][j]);
            if (i < rows - 1) {
                printf("+");
            }
        }
        printf("=%d\n", total_kolom[j]);
    }

    return 0;
}

/* Contoh iputan:
    3 3 --> 3 baris dan 3 kolom
    1 3 5
    2 5 2
    4 2 4
    Baris ke-1: 1+3+5=9
    Baris ke-2: 2+5+2=9
    Baris ke-3: 4+2+4=10
    Kolom ke-1: 1+2+4=7
    Kolom ke-2: 3+5+2=10
    Kolom ke-3: 5+2+4=11

*/
