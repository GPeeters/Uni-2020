#include <iostream>
#include "Boom.h"

int main() {
    Boom b= Boom();
    b.voegToe(10);
    b.voegToe(6);
    b.voegToe(3);
    b.voegToe(9);
    b.voegToe(4);
    b.voegToe(2);
    b.voegToe(8);
    b.voegToe(7);
    b.voegToe(1);
    b.voegToe(0);

    b.schrijfInOrder();
}
