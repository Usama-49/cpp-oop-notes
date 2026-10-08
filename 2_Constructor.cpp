#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNo;
    float gpa;
    //* Constructors
    //? Default
    Student() {

    };
    //? Parameterized
    Student(string s, int r, float g)
    {
        name = s;
        rollNo = r;
        gpa = g;
    }
    //? Copy Constructor
    Student(Student &other)
    {
        this->gpa = other.gpa;
        this->name = other.name;
        this->rollNo = other.rollNo;
    }
    //? Destructor
    ~Student()
    {
        cout << "Destructor Called for:" << " " << name << endl;
    }
};

class Player
{
public:
    int runs;
    string name;
    void print()
    {
        cout << this->name << " " << this->runs << endl;
    }
    Player() {

    };
    Player(string name, int runs)
    {
        this->name = name;
        this->runs = runs;
    }
};

void print(Student c)
{
    cout << c.name << " " << c.rollNo << " " << c.gpa << endl;
}
int main()
{
    //! Student
    Student s1("Usama", 24, 3.77);
    // cout << s1.name << endl;
    // Student s2;
    // s2.name = "Jaffery Epstein";
    // cout << s2.name << endl;
    // // Student s3 = s1; //? Copy constructor
    // Student s3(s1);
    // s3.name = "Donuld Trump";
    // cout << s3.name << " " << s3.gpa << endl;
    // cout << "Now printing using print func ... " << endl;
    // print(s1);
    //! Destructor
    Student *s6 = new Student("Osama", 28, 3.78);
    delete s6; //? Only works for obj craeted using new ...

    //! Player
    // Player p1("Usama", 25000);
    // cout << p1.name << " " << p1.runs << endl;
    // Player p2("Johnny", 20000);
    // cout << "Now printing using print func ... " << endl;
    // p2.print();
    //! Copy Constructor
    Student s5(*s6);
    cout << s5.gpa << " " << s5.name << endl;

    return 0;
}