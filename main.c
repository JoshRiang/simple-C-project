#include <stdio.h>

int penjumlahan(int a, int b) {
    return a + b;
}

int pengurangan(int a, int b) {
    return a - b;
}

int perkalian(int a, int b) {
    return a * b;
}

float pembagian(int a, int b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int choice, angka1, angka2;

    printf("Selamat datang di kalkulator sederhana\n");
    printf("Silahkan masukkan pilihan:\n");
    printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
    scanf("%d", &choice);

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    switch (choice) {
        case 1:
            printf("Hasil penjumlahan: %d + %d = %d\n", angka1, angka2, penjumlahan(angka1, angka2));
            break;
        case 2:
            printf("Hasil pengurangan: %d - %d = %d\n", angka1, angka2, pengurangan(angka1, angka2));
            break;
        case 3:
            printf("Hasil perkalian: %d * %d = %d\n", angka1, angka2, perkalian(angka1, angka2));
            break;
        case 4:
            printf("Hasil pembagian: %d / %d = %.2f\n", angka1, angka2, pembagian(angka1, angka2));
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
