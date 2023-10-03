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
void CreateObjects(Vehicle* container[3]);

/*
    function to find average of price value of 3 objects in the container array.
*/
float AveragePrice(Vehicle* container[3]);



#endif // FUNCTIONALITIES_H
