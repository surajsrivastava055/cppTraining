#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void CreateObjects(Vehicle* container[3]){
    // container's index address now is holding this object on the heap.
    container[0]=new Vehicle("101","Maruti",Type::CAR,3459.9f);
    container[1]=new Vehicle("102","Honda",Type::CAR,345.9f);
    container[2]=new Vehicle("103","Toyata",Type::CAR,3457.9f);
}

float AveragePrice(Vehicle* container[3]){
    float total=0.0f;
    for(int i=0;i<3;i++){
        // total is previous total added with price value taken from address at i position.
        total=total + container[i]->price();
    }
    return total/3;
}