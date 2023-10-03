#include<iostream>
#include "Car.h"

Car::Car(std::string id, std::string brand, VehicleType type, float price,CarType ctype)
:Vehicle(id,brand,type,price),_car_type(ctype)
{

}

Car:: Car(std::string id, std::string brand, VehicleType type,CarType ctype)
:Vehicle(id,brand,type),_car_type(ctype)
{

}

float Car::CalculateTax(){
    return 0.1f*price();
}