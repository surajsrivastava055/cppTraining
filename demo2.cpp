#include<iostream>

int main(){
    int arr[5]={12,45,67,89,65};

    std::cout
        <<"content of arr (addess of first location):"
        <<arr
        <<"\n";

    std::cout
        <<"address of first location: "
        <<(arr+0)
        <<"\n";

    std::cout
        <<"Content of first location: "
        <<*(arr+0)
        <<"\n";

}