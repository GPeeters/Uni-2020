#include <stdio.h>
#include "Boom.h"
#include "Sensor.h"

int main() {
    Knoop* wortel = NULL;

    printf("1. Test toevoegen:\n");
    printf("==================\n");
    char* s1 = "temp1k1";
    char* s2 = "druk1k2";
    char* s3 = "temp5k3";
    char* s4 = "temp3k4";
    char* s5 = "temp2k1";
    char* sKopie = "druk1k2";
    plaatsInBoom(&wortel,s1);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    plaatsInBoom(&wortel,s2);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    plaatsInBoom(&wortel,s3);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    plaatsInBoom(&wortel,s4);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    plaatsInBoom(&wortel,s5);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");

    printf("2. Test toevoegen speciale:\n");
    printf("==================\n");
    plaatsInBoom(&wortel,sKopie);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    plaatsInBoom(NULL,sKopie);

    printf("3. Test verwijderen knoop:\n");
    printf("==========================\n");
    verwijderKnoopUitBoom(&wortel,s1);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    verwijderKnoopUitBoom(&wortel,s2);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");
    verwijderKnoopUitBoom(&wortel,s3);
    schrijfBoomInorder(wortel);
    printf("-----------------\n");

    printf("4. Test verwijderen speciale:\n");
    printf("==========================\n");
    verwijderKnoopUitBoom(NULL,s3);
    verwijderKnoopUitBoom(&wortel,s3);
    verwijderKnoopUitBoom(&wortel,"iets");
    schrijfBoomInorder(wortel);
    printf("-----------------\n");

    printf("5. Test waarden toevoegen:\n");
    printf("==========================\n");
    /*eerst verwijderde terug toevoegen*/
    plaatsInBoom(&wortel,s1);
    plaatsInBoom(&wortel,s2);
    plaatsInBoom(&wortel,s3);
    /*waarden toevoegen*/
    voegWaardeToe(wortel,s1,45);
    voegWaardeToe(wortel,s1,17);
    voegWaardeToe(wortel,s1,22);
    voegWaardeToe(wortel,s2,3);
    voegWaardeToe(wortel,s2,8);
    schrijfBoomInorder(wortel);

    printf("6. Test waarden toevoegen speciale:\n");
    printf("==========================\n");
    voegWaardeToe(NULL,s2,77);
    voegWaardeToe(wortel,"druk1k2",68);
    voegWaardeToe(wortel,"iets",999);
    schrijfBoomInorder(wortel);

    printf("7. Test verwijderen alles:\n");
    printf("==========================\n");
    verwijderBoom(&wortel);
    schrijfBoomInorder(wortel);

    printf("klaar\n");

    return 0;
}