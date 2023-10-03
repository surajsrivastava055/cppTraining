#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"

#include<iostream>

int main(){
    Vehicle *arr[3];
    CreateObjects(arr);
    std::cout<<"Average Price: "<<AveragePrice(arr);

}

// g++ day2/Vehicle/Main.cpp day2/Vehicle/Functionalities.cpp day2/Vehicle/Vehicle.cpp.