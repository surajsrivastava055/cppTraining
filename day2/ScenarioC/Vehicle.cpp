#include "Vehicle.h"
#include "VehicleType.h"

#include<iostream>

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type, float price)
:_id(id),_brand(brand),_price(price),_type(type)
{

}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
:_id(id),_brand(brand),_type(type)
{
}


std::string DisplayEnum(const VehicleType value)
{
    if(value==VehicleType::BIKE){
        return "BIKE";
    }else if(value==VehicleType::CAR){
        return "CAR";
    }else{
        return "OTHER";
    }
}


std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs.id()
       << " _brand: " << rhs.brand()
       << " type: " << DisplayEnum(rhs.type())
       << " price: " << rhs.price();
    return os;
}
