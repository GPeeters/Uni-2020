//
// Created by Gilles on 22/11/2019.
//

#include "SaveActie.h"
SaveActie::SaveActie(bool suc): Actie("Save"){
    this->succes=suc;
}

SaveActie::~SaveActie() {

}
bool SaveActie::getSucces() {
    return this->succes;
}