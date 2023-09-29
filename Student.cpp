#include<iostream>
#include "Department.h"

class Student
{
private:
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept;  //IT, CS, AI_ML
public:
    Student()= default;
    Student(
        int rnum,
        str::string name,
        float fees,
        char grade,
        Department Department
        ){
            this->_roll_number=rnum;
            this->_name=name;
            this->_fees=fees;
            this->_grade=grade;
            this._dept=dept;
        }
    ~Student() {
        std:cout<<"Student With Roll Number "
        <<this->_roll_number
        <<" is now destroyed\n";
    }
};

int main(){
    //stack
    Student s1(101,"gyan",5678.7f,'A',Department::CS);
    Student s3(102,"shivam",5678.7f,'A',Department::IT);

    //heap
    Student* s2=new Student(201,"shubham",6789.78f,'A',Department::AI_ML);
    Student* s4=new Student(107,"anuj",6789.78f,'A',Department::AI_ML);
    delete s2; // to delete heap.

    Student arr[2]={s1,s3} // array of stack allocated student objects.
    Student* heapArr[1]={s2,s4};
}