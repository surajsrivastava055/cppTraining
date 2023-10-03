#ifndef BIKE_H
#define BIKE_H

#include "BikeType.h"
#include "Vehicle.h"
#include <ostream>

class Bike:public Vehicle
{
private:
    float _bike_mileage;
    BikeType _bike_type;
public:
    Bike(
        std::string id,
        std::string brand,
        VehicleType type,
        float price,
        float mileaga,
        BikeType btype
        );

    Bike(
        std::string id,
        std::string brand,
        VehicleType type,
        float mileaga,
        BikeType btype
        );

    float CalculateTax()override;         
    ~Bike() {
        std::cout<<"Bike part of Vehicle with Id :"
        <<id()
        <<" is destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
};

std::string DisplayEnum1(const BikeType value);

#endif // BIKE_H
