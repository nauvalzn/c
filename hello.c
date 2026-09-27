#include <stdio.h>

int main() {
 char nama[50];
 printf("Masukan Nama: ");
 scanf("%s",nama);
 int nim;
 printf("Masukan Nim: ");
 scanf("%d",&nim);
 int umur;
 printf("Masukan Umur: ");
 scanf("%d",&umur);
 char jurusan[50];
 printf("Masukan Jurusan: ");
 scanf("%s",jurusan);







 printf("===DATA MAHASISWA===\n");
 printf("Nama: %s\n", nama);
 printf("NIM: %d\n", nim);
 printf("Umur: %d\n", umur);
 printf("Jurusan: %s\n", jurusan);
    return 0;
}