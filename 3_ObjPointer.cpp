#include <iostream>
using namespace std;
class Player
{
public:
    string name;
    int age;
    Player(string n, int a)
    {
        name = n;
        age = a;
    };
};

void change(Player *p)
{
    (*p).age = 22;
    p->name = "Napoleon";
}
int main()
{
    // Player p1("Usama", 21);
    // Player *p = &p1;
    // cout << "Name: " << (*p).name << endl;   //* Usama
    // change(&p1);
    // cout << "Age: " << p1.age << endl; //* 22
    // cout << p->name << endl;  //* Napoleon

    //? Dynamic Pointers

    int *ptr = new int(4);
    cout << *ptr << endl; //* 4
    Player *p2 = new Player("Osama", 17);
    cout << p2 << endl;       //* Adress of p2
    cout << p2->name << endl; //* Osama

    return 0;
}