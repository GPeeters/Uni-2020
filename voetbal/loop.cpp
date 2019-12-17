//
// Created by Gilles on 22/11/2019.
//

#include "loop.h"

loop::loop(int afstand): Actie("loop"){
   this->runDist=afstand;
}

loop::~loop() {

}

int loop::getDist(){
    return this->runDist;
}
