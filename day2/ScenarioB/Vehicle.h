#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;

public:
    Vehicle(
        std::string id,
        std::string brand,
        VehicleType type,
        float price
        );

    Vehicle(
        std::string id,
        std::string brand,
        VehicleType type
        ); 

    //default copy constructor.
    // i will not write the body for default constructor compilar should generate it automatically.    
    Vehicle(const Vehicle&)=default;   //shallow copy.   

    virtual float CalculateTax()=0; //pure virtual function.

    ~Vehicle() {
        std::cout<<"Vehicle with Id :"<<_id<<" is destroyed";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }
};



#endif // VEHICLE_H
