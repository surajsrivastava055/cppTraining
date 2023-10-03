#include "Functionalities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"
#include "Bike.h"
#include "BikeType.h"

void CreateObjects(Vehicle* garage[3]){
    // garage's index address now is holding this object on the heap.
    garage[0]=new Car("101","Maruti",VehicleType::CAR,3459.9f,CarType::TOYOTA);
    garage[1]=new Bike("bk102","Bajaj",VehicleType::BIKE,345.9f,BikeType::SPORTS);
    garage[2]=new Car("103","Toyata",VehicleType::CAR,3457.9f,CarType::SEDAN);

    for(int i=0;i<3;i++){
        std::cout<<*(garage[i])<<"\n";
    }

}

float AveragePrice(Vehicle* garage[3]){
    float total=0.0f;
    for(int i=0;i<3;i++){
        // total is previous total added with price value taken from address at i position.
        total=total + garage[i]->price();
    }
    return total/3;
}

void CalculateTax(Vehicle* container1[3]){
    for(int i=0;i<3;i++){
        std::cout<<"Tax is : "<<container1[i]->CalculateTax()<<std::endl;
    }
}

void FreeMemory(Vehicle* garage[3]){
    for(int i=0;i<3;i++){
        delete garage[i];
    }
}