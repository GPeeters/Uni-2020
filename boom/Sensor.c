//
// Created by Gilles on 4/10/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "Boom.h"

Sensor* maakSensor(char* naam)
{
    Sensor* init = NULL;
    init = (Sensor*) malloc(sizeof(Sensor));
    char* input[16];
    printf("Enter name:\n");
    gets(input);
    int* values = [];
    int counter = 0;
    new Sensor*(input, values, counter);
    return input;
}

void verwijderSensor(Sensor** pSensor){
    if((**pSensor).waarden != NULL){
        free((**pSensor).waarden);//delete sensor and clear memory
    }
    free(*pSensor);
    *pSensor = NULL;
}
void schrijfSensor(Sensor* sensor){
    for(int i = 0; i <(*sensor).aantalWaarden; ++i){

        printf("%d",(*sensor).waarden[i]);
    }
}
void voegSensorWaardeToe(Sensor* sensor,int waarde){
    int size = (*sensor).aantalWaarden;
    (*sensor).waarden[size+1] = waarde;

}
