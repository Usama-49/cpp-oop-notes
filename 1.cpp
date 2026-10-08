#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int RollNo;
    float gpa;
};
int main()
{
    Student s;
    s.name = "Usama";
    s.RollNo = 24;
    s.gpa = 3.77;
    cout<<s.name<<endl;
    return 0;
}