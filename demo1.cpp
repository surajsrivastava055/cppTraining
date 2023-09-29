#include<iostream>

int main(){
    int n1=10;
    int *ptr=&n1;
    int **sptr=&ptr;

    //data inside n1
    std::cout<<"Data inside n1:"<<n1<<"\n";

    //data inside sptr
    std::cout<<"Data inside sptr:"<<sptr<<"\n";

    // jump ptr 1 time
    std::cout<<"Data ptr 1 time Jump:"<<*ptr<<"\n";
    
    // jump ptr 2 time
    std::cout<<"Data sptr 2 time jump:"<<**sptr<<"\n";
    
    //address of n1
    std::cout<<"Address of n1:"<<&n1<<"\n";
    
    //address of ptr
    std::cout<<"Address of ptr:"<<&ptr<<"\n";
    
    //address of sptr
    std::cout<<"Address of sptr:"<<&sptr<<"\n";
}