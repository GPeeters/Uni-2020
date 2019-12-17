//
// Created by annemie on 9/19/19.
//

#ifndef BOOMC_SENSOR_H
#define BOOMC_SENSOR_H

typedef struct Tsensor {
    char* naam;
    int* waarden;
    int aantalWaarden;
} Sensor;

Sensor* maakSensor(char* naam);
void verwijderSensor(Sensor** pSensor);
void schrijfSensor(Sensor* sensor);
void voegSensorWaardeToe(Sensor* sensor,int waarde);

#endif //BOOMC_SENSOR_H
