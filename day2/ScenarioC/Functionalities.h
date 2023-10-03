/*

*/

// can every single object do this? OR should a single object be able to do this?

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include "Vehicle.h"
/*
    Function to create 3 objects on the heap and stored theire address in the container array.
*/
void CreateObjects(Vehicle* garage[3]);

/*
    function to find average of price value of 3 objects in the garage array.
*/
float AveragePrice(Vehicle* garage[3]);

/*
    function for calculating tax 
*/
void CalculateTax(Vehicle* garage[3]);

/*
    to free the memory.
*/

void FreeMemory(Vehicle* garage[3]);



#endif // FUNCTIONALITIES_H
