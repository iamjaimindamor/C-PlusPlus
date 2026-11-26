#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }

};

class Student : public Person {
public:
 string studentID;

 Student(string name,int age,string studentID):Person(name,age){
    this->studentID = studentID;
 }

 void displayStudentInfo(){
    cout << "Student Id : "<<this->studentID<<endl;
    cout <<"Name : "<< this->name<<endl;
    cout <<"Age : "<< this->age<<endl;
 }

};

int main(){
    Student student("Alice",20,"S12345");
    student.displayStudentInfo();
    return 0 ;
}