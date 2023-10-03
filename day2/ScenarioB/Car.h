#ifndef CAR_H
#define CAR_H
#include "CarType.h"
#include "Vehicle.h"

class Car: public Vehicle
{
private:
    CarType _car_type;
public:
    //4+1
    Car(std::string id, std::string brand, VehicleType type, float price,CarType _car_type);

    //3+1
    Car(std::string id, std::string brand, VehicleType type,CarType _car_type);

    float CalculateTax() override;



    ~Car() {
        std::cout<<"Car part of Vehicle with id:"<<id()<<"is destroyed"<<"\n";
    }

    CarType carType() const {return _car_type;}
};

#endif // CAR_H
