#include "Vehicle.h"
#include "Type.h"

#include<iostream>

Vehicle::Vehicle(std::string id, std::string brand, Type type, float price)
:_id(id),_brand(brand),_price(price),_type(type)
{

}

Vehicle::Vehicle(std::string id, std::string brand, Type type)
:_id(id),_brand(brand),_type(type)
{
}
