//
// Created by gille on 6/12/2019.
//

#include "doelpoging.h"


doelpoging::doelpoging(bool suc): Actie("doelpoging"){
        this->succes=suc;
}

doelpoging::~doelpoging() {

}
bool doelpoging::getSucces(){
    return this->succes;
};
