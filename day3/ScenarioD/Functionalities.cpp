#include "Functionalities.h"

void createObjects(Vehicle *arr[3])
{
    arr[0]=new Vehicle("101","Maruti",VehicleType::CAR,1234.0f);
    arr[1]=new Vehicle("102","Tata",VehicleType::CAR,1274.0f);
    arr[2]=new Vehicle("103","Suzki",VehicleType::CAR,3334.0f);
}

float averagePrice(Vehicle *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=arr[i]->price();
    }
    return total/3;
}

void minimumPriceDetail(Vehicle *arr[3])
{
    float min=arr[0]->price();
    Vehicle* result=arr[0];
    for(int i=0;i<2;i++){
        if(min>arr[i+1]->price()){
            min=arr[i+1]->price();
            result=arr[i];
        }
    }
        std::cout<<"\nCar Deatil is:"<<*result;
}
