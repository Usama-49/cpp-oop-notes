#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0; // pure virtual
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Bark\n";
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Meow\n";
    }
};

int main()
{

    Animal *a1 = new Dog();
    Animal *a2 = new Cat();

    a1->sound();
    a2->sound();
}