/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : JumFrekNilTabel.c
   Deskripsi    : Mengecek dan menghitung jumlah frekuensi nilai tabel
*/


#include <stdio.h>

#define MAX_SIZE 100

int main() {
    // Kamus
    int t[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int n, i, sum = 0;

    // Algoritma
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        freq[t[i]]++; 
    }
    
    for (i = 0; i < n; i++) {
        if (freq[t[i]] > 1) {
            sum += t[i];
            freq[t[i]] = 0; 
        }
    }
    

    printf("Jumlah elemen tabel T yang frekuensinya lebih dari satu kali adalah: %d\n", sum);

    return 0;
}
