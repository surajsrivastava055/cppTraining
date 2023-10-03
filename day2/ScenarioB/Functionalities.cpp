#include "Functionalities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"

void CreateObjects(Car* container[3]){
    // container's index address now is holding this object on the heap.
    container[0]=new Car("101","Maruti",VehicleType::CAR,3459.9f,CarType::TOYOTA);
    container[1]=new Car("102","Honda",VehicleType::CAR,345.9f,CarType::SUV);
    container[2]=new Car("103","Toyata",VehicleType::CAR,3457.9f,CarType::SEDAN);
}

float AveragePrice(Car* container[3]){
    float total=0.0f;
    for(int i=0;i<3;i++){
        // total is previous total added with price value taken from address at i position.
        total=total + container[i]->price();
    }
    return total/3;
}

void CalculateTax(Car* container1[3]){
    for(int i=0;i<3;i++){
        std::cout<<"Tax is : "<<container1[i]->CalculateTax()<<std::endl;
    }
}

void FreeMemory(Car* container[3]){
    for(int i=0;i<3;i++){
        delete container[i];
    }
}