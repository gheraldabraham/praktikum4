/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : B
   Nama Program : SimetriTabel.c
   Deskripsi    : Mengecek apakah masukan tersebut simetris atau tidak
*/


#include <stdio.h>

#define MAX_SIZE 100

int main(){

    // Kamus
    int t1[MAX_SIZE], t2[MAX_SIZE];
    int n1, n2, i;
    int simetri = 1; 

    // Algoritma
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    scanf("%d", &n2);
    if (n1 != n2) {
        simetri = 0; 
    } else {
        for (i = 0; i < n2; i++) {
            scanf("%d", &t2[i]);
            if (t1[i] != t2[i]) {
                simetri = 0; 
            }
        }
    }

    
    if (simetri) {
        printf("T1 dan T2 Simetri\n");
    } else {
        printf("T1 dan T2 Tidak Simetri\n");
    }

    return 0;
}
