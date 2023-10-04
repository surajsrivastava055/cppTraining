#include<iostream>
#include "Vehicle.h
#include "Functionalities.h"

int main(){
    Vehicle* arr[3];
    createObjects(arr);
    std::cout<<"Average is :"<<averagePrice(arr);
    minimumPriceDetail(arr);
}