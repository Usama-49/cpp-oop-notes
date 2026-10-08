#include <iostream>
using namespace std;
class Cat
{
public:
    int weight;
    Cat()
    {
    }
    virtual void sound()
    {
        cout << "Meowwww" << endl;
    }
};
class Dog : public Cat
{
public:
    int weight;
    void sound()
    {
        cout << "Boww Boww" << endl;
    };
};
int main()
{
    Cat *d = new Dog();
    d->sound();
    Cat c;
    c.sound();

    return 0;
}