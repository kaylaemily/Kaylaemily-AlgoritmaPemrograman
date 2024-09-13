#include <stdio.h>

int main() {
    
    int skor;

    int temp = 0;
// Mendapatkan jumlah elemen
    scanf("%d", &skor);
    int nilai[skor];

// Baca nilai kedalam array
    for(int i = 0; i < skor; i++){
        scanf("%d", &nilai[i]);
    }
// Menggunakan Bubble Sort
    for(int i = 0; i < skor-1; i++){
        for(int j = 0; j < skor-1; j++){
            if(nilai[j+1] < nilai[j]){
                temp = nilai[j+1];
                nilai[j+1] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
// Cetak nilai yang diurutkan
    for(int i = 0; i < skor; i++){
        printf("%d\n", nilai[i]);
    }

    return 0;
}