#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    Student(string name, int rollno, float gpa)
    {
        this->rollno = rollno;
        this->name = name;
        this->gpa = gpa;
    };
    void printData()
    {
        cout << "RollNo. : " << rollno << " " << "name : " << name << " " << "gpa : " << gpa << endl;
    };
    void setGpa(float g) //? Setter
    {
        gpa = g;
    };
    void printGpa() //? Getter
    {
        cout << gpa << endl;
    }

private:
    float gpa;
};
int main()
{
    Student s1("Usama", 24, 3.77);
    s1.setGpa(2.98);
    s1.printData();
    s1.printGpa();

    return 0;
}