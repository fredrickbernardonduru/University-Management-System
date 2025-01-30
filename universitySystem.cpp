#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person {
    private:
    string  Name;
    int Age;
    string ID;

    public:
    Person(string name, int age, string id){
        Name = name;
        Age = age;
        ID = id;
    }

    void addPersonDetails(){
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Age: ";
        cin >> Age;
        cout << "Enter ID: ";
        cin >> ID;
    }

    void dissplayPersonDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "ID: " << ID << endl;
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
        cout << "Enter GPA: "<< endl;
        cin >> GPA;
    }

    void updateGPA(float gpa){
        cout << "Enter new GPA: "<< endl;
        cin >> GPA;
        cout << "Updating Student GPA: " << GPA << endl;
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

    void increaseSalary(float salary, int percentage){
        cout <<"Enter the percentage increase: ";
        cin >> percentage;
        cout <<"Updating Lecturer salary by: " << percentage << "%" << endl;

        Salary = salary + (salary * percentage/100);

    }
    void updatedLecturerDetails(){
        cout << "My name is " << Name << " and I am " << Age << "years old. My ID is " << ID << endl;
        cout << "I teach in the " << Department << " department and my salary is " << Salary << "per month"<< endl;
    }


};


int main (){
    Student student1();
    Lecturer lecturer1();
}