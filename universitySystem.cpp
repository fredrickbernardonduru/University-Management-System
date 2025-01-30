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
    void displayStudentDetails(){
        cout <<"Student Details: " << endl;
        cout << "My name is " << Name << " and I am " << Age << "years old. My ID is " << ID << endl;
        cout << "I am studying " << Course << " and my GPA is " << GPA << endl;
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

    void showLecturerDetails(){
        cout << "Lecturer Details: " << endl;
        cout << "My name is " << Name << " and I am " << Age << "years old. My ID is " << ID << endl;
        cout << "I teach in the " << Department << " department and my salary is " << Salary << "per month"<< endl;
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
    cout <<"Enter Student Details: " << endl;
    student1.addPersonDetails();
    student1.setGPA();
    student1.displayStudentDetails();

    Lecturer lecturer1();
    cout <<"Enter Lecturer Details: " << endl;
    lecturer1.addPersonDetails();
    lecturer1.showLecturerDetails();
    student1.updateGPA();
    lecturer1.increaseSalary();
    student1.displayStudentDetails();
    lecturer1.updatedLecturerDetails();
    return 0;
}