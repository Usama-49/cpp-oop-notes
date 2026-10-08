#include <iostream>
using namespace std;
class Scooty //? Parent
{
public:
    int topspeed;
    int milage;
};
class Bike : public Scooty //? Child / Derived
{
public:
    int gears;
};
class Honda : public Bike
{
public:
    int price;
    Honda(int ts, int m, int g, int p)
    {
        topspeed = ts;
        milage = m;
        gears = g;
        price = p;
    }
};
class OTF : public Honda, public Bike
{
    //! Will access both Honda & Bike Classes public data
};
int main()
{
    Honda h1(120, 40, 4, 120000);
    cout << h1.gears << " " << h1.milage << " " << h1.topspeed << " " << h1.price << endl;
    return 0;
}