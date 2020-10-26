#include <stdio.h>
#define phi 3.14
using namespace std;
main()
{
 float jari, selimut, luas, luasalas, luasselimut;

 puts("PROGRAM MENGHITUNG LUAS PERMUKAAN KERUCUT");
 puts("----------------------------------------------------");
 
 printf("Masukkan jari-jari = "); scanf("%f",&jari);
 printf("Masukkan selimut   = "); scanf("%f",&selimut);
 
 luasalas = phi * jari * jari;
 luasselimut = phi * jari * selimut;
 luas = luasalas + luasselimut;
 
 puts("\nHASIL:");
 printf("Luas alas = %.1f",luasalas);
 printf("\nLuas selimut = %.1f",luasselimut);
 printf("\nLuas permukaan kerucut = %.1f",luas);

}

