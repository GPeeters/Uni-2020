#include <iostream>
#include "Datum.h"
#include "Afspraak.h"
#include "Verzameling.h"

int main() {
    Afspraak a1(12,5,2019,"Gent");
    Afspraak a2(23,8,2019,"Brussel");
    Afspraak a3(1,12,2019,"Antwerpen");
    Afspraak a4(7,1,2020,"Leuven");
    Afspraak a5(14,2,2020,"Kortrijk");
    Afspraak a6(26,3,2020,"Hasselt");
    Afspraak a7(19,5,2020,"Oostende");
    Afspraak a8(4,9,2020,"Gent");
    Afspraak a9(15,12,2020,"Brussel");
    Afspraak a10(17,2,2021,"Aalst");
    Afspraak a11(9,5,2021,"Brugge");
    Verzameling v1; //default alles nul
    Verzameling v2(20); //parameter -> grootte, array 20 plaatsen
    v1.add(&a1);
    v1.add(&a2);
    v1.add(&a3);
    v1.add(&a4);
    v1.add(&a5);
    v1.add(&a6);
    v1.add(&a7);
    v2.add(&a4);
    v2.add(&a5);
    v2.add(&a6);
    v2.add(&a7);
    v2.add(&a8);
    v2.add(&a9);
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    Verzameling v3 = v2;
    cout << "v3: " << v3 << endl;
    Verzameling v4,v5;
    v4 = v1 + v2; //unie
    v5 = v1 * v2; //doorsnede
    cout << "v4: " << v4 << endl;
    cout << "v5: " << v5 << endl;
    v4 = v1 + &a10;
    v5 = &a11 + v1;
    cout << "v4: " << v4 << endl;
    cout << "v5: " << v5 << endl;
    return 0;
}