#include<iostream>

//call by value: copy passed parametere into formAL PARAMETER.
// void magic(int n1){
//     std::cout<<"Address of n1: "<<&n1<<"\n";
//     std::cout<<"Content of n1: "<<n1<<"\n";
//     n1=100;
//     std::cout<<"After modifing Content of n1: "<<n1<<"\n";
// }
void magic(int& n1){
    std::cout<<"Address of n1: "<<&n1<<"\n";
    std::cout<<"Content of n1: "<<n1<<"\n";
    n1=100;
    std::cout<<"After modifing Content of n1: "<<n1<<"\n";
}

int main(){
    int n1=10;
    std::cout<<"Address of n :"<<&n1<<"\n";
    // magic(10); // 10 will be copied into scope of magic
    magic(n1); // n1 will be copied into scope of magic

    std::cout<<"Actual Content of n: "<<n1<<"\n";
}