/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : NilMax2Tabel.c
   Deskripsi    : Mengecek dan menghitung nilai max 2
*/


#include <stdio.h>

int main() {

    //Kamus
    int N;
    int i;
    int Max1 = 0;
    int Max2 = 0;

    //Algoritma
    int TabelNilai[N];
    scanf("%d", &N);

    for ( i = 0; i < N; i++)
    {
        scanf("%d", &TabelNilai[i]);
    }
    
    for ( i = 0; i < N; i++)
    {
        if (TabelNilai[i] > Max1){
            Max2 = Max1;
            Max1 = TabelNilai[i];
        }else if ((TabelNilai[i] > Max2) && (TabelNilai[i] < Max1)){
            Max2 = TabelNilai[i];
        }
    } printf("Nilai  maksimum kedua adalah : %d", Max2);
    return 0;


    












}
