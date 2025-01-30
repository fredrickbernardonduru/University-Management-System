#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person {
    private:
    string  Name;
    int Age;
    string ID;

    Person(string name, int age, string id){
        Name = name;
        Age = age;
        ID = id;
    }

};

class Student: public Person{
    private:
    string Course;
    float GPA;

    public:
    Student(string course, float gpa: Person(name, age, id)){
        Course = course;
        GPA = gpa;
    }


    void setGPA(float gpa){
        GPA = gpa;
    }

    float getGPA(){
        return GPA;
    }
};

class Lecturer:public Person{
    private:
    string Department;
    float Salary;

    public:
    Lecturer(string department, string salary):Person(name, age, id){
        Department = department;
        Salary = salary;
    }
};