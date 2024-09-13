#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
// Membaca inputan string
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);
// Hapus karakter baris baru dari akhir string jika ada
    A[strcspn(A, "\n")] = 0;
    B[strcspn(B, "\n")] = 0;

    scanf("%s\n", A);
    scanf("%s\n", B);

// Membandingkan panjang dan string
    if (strlen(A) == strlen(B)) {
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    } 
    else {
        printf("BERBEDA\n");
    }
    
    return 0;
}