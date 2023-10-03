#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "Type.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;

public:
    Vehicle(
        std::string id,
        std::string brand,
        Type type,
        float price
        );

    Vehicle(
        std::string id,
        std::string brand,
        Type type
        ); 

    //default copy constructor.
    // i will not write the body for default constructor compilar should generate it automatically.    
    Vehicle(const Vehicle&)=default;   //shallow copy.    

    ~Vehicle() {
        std::cout<<"Vehicle with Id :"<<_id<<" is destroyed";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};

#endif // VEHICLE_H
