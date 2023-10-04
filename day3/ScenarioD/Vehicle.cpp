#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type, float price)
:_id(id),_brand(brand),_type(type),_price(price)
{
}

float Vehicle::CalculateTax()
{
    return 0.18f * _price;

}

float Vehicle::CalculateTax(float tax_percentage)
{
    return tax_percentage * _price;
}

float Vehicle::CalculateTax(float sgst, float cgst)
{
    return (cgst * _price) + (sgst * _price);
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _type: " << DisplayEnum(rhs._type)
       << " _price: " << rhs._price;
    return os;
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
