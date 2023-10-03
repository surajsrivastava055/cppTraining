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
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " << DisplayEnum2(rhs._car_type);
    return os;
}

std::string DisplayEnum2(const CarType value)
{
    if(value==CarType::SEDAN){
        return "SEDAN";
    }else if(value==CarType::SUV){
        return "SUV";
    }else{
        return "TOYOTO";
    }
}
