#include <stdio.h>
div-function
void divide(int angka1, int angka2) {
    int result = angka1 / angka2;
    printf("Hasil pembagian: %d\n", result);


int penjumlahan(int a, int b) {
    return a + b;
}

void subtract(int a, int b) {
    printf("Hasil pengurangan: %d\n", a - b);
}

void multi(int a, int b){
    printf("Hasil perkalian: %d\n", a * b);

}

int main() {
    int choice, angka1, angka2;

    printf("Selamat datang di kalkulator sederhana\nSilahkan masukkan pilihan:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
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
            subtract(angka1, angka2);
            break;
        case 3:
            multi(angka1, angka2);
            break;
        case 4:
            divide(angka1, angka2);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}