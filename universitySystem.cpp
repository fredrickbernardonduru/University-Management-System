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

class Student{
    private:
    string Course;
    float GPA;

    public:
    Student(string course, float gpa){
        Course = course;
        GPA = gpa;
    }
};

class Lecturer{
    private:
    string Department;
    float Salary;

    public:
    Lecturer(string department, string salary){
        Department = department;
        Salary = salary;
    }
};