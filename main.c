#include <stdio.h>
void divide(int angka1, int angka2) {
    int result = angka1 / angka2;
    printf("Hasil pembagian: %d\n", result);
}

int main() {
    int choice, angka1, angka2;
    printf("Selamat datang di kalkulator sederhana\nSilahkan masukkan pilihan \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian");
    scanf("%d", &choice);

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            divide(angka1, angka2);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}