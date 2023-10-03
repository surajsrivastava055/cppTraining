#include "Car.h"
#include "CarType.h"
#include "VehicleType.h"
#include "Functionalities.h"
#include "Vehicle.h"

#include <iostream>

int main(){
    // 3 locations reserved; each location can store 8 bytes(address)
    Vehicle* arr[3];
    CreateObjects(arr);
    std::cout<<"Average Price: "<<AveragePrice(arr)<<"\n";
    CalculateTax(arr);
    FreeMemory(arr);

}

// g++ Main.cpp Car.cpp Functionalities.cpp Vehicle.cpp