#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;

public:
    Vehicle()=delete; // disabled default constructor.

    Vehicle(const Vehicle&)=default; // copy constructor.

    Vehicle(
    std::string id,
    std::string brand,
    VehicleType type,
    float price
    );

    float CalculateTax();

    float CalculateTax(float tax_percentage);

    float CalculateTax(float sgst,float cgst);
    
    ~Vehicle() {
        std::cout<<"Vehicle with id:"<<_id<<" is destoryed\n";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

};

std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H
