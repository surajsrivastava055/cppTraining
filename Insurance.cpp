#include<iostream>
#include "InstanceType"

 class Insurance{
    private:
        int insuranceId;
        float insuranceAmount;
        InsuranceType insuranceType;
    public:
        Insurance( int insuranceId, float insuranceAmount, InsuranceType insuranceType)  
        {
            this->insuranceId=insuranceId;
            this->insuranceAmount=insuranceAmount;
            this->insuranceType=insuranceType;

        }  
 }