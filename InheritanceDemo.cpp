#include<iostream>
#include<list>
#include<vector>
class Student
{
private:
    int _id;
    std::string name;
public:
    Student(int id, std::string name) {
        this->_id=id;
        this->name=name;
    }
    ~Student() {}
};

class Engineer:public Student
{
private:
    std::string _course_name;
public:
    Engineer(int id,std::string name,std::string cname)
    :Student(id,name) {
        this->_course_name=cname; // my part is done.

    }
    ~Engineer() {}
};

int main(){
    Engineer* e1=new Engineer(101,"gyan","Btech");
    Student* c1=new Student(102,"shubham");

    Student* arr[2]={e1,c1};
    std::list<Student*>data1={e1,c1};
    std::vector<Student*>data2={e1,c1};
}
