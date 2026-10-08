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
    // cout << (*p).name << endl;
    // change(&p1);
    // cout << p1.age << endl;
    // cout << p->name << endl;

    //? Dynamic Pointers

    int *ptr = new int(4);
    cout << *ptr << endl;
    Player *p2 = new Player("Osama", 17);
    cout << p2 << endl;
    cout << p2->name << endl;

    return 0;
}