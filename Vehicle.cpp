#include<iostream>
#include "VehicleType"

class Vehicle{
    private:
        int vehicleId;
        int vehicleRegistration;
        VehicleType vehicleType;
        Insurance vehicleInsurancePlan;
    public:
        Vehicle(int vehicleId, int vehicleRegistration, VehicleType vehicleType,Insurance vehicleInsurancePlan)
        {
            this->vehicleId=vehicleId;
            this->vehicleRegistration=vehicleRegistration;
            this->vehicleType;
            this->vehicleInsurancePlan;
        }

}