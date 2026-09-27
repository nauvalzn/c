#include <stdio.h>

int main()
{
    char nama[50];
    int nilai;
    printf("Masukan Nama: ");
    scanf("%s", nama);
    printf("Masukan Nilai: ");
    scanf("%d", &nilai);
    //ini print out nya
    printf("Nama : %s\n", nama);
    printf("Nilai : %d\nStatus : ", nilai);
    
    if (nilai >= 75)
    {
        printf("Lulus");
    }
    else
    {
        printf("tidak lulus");
    }
}