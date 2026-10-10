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
/*
===================================================================
1. Honda Memory Layout (Single Multilevel Chain: Scooty -> Bike -> Honda)
===================================================================
[ Honda Object ]
├── topspeed  (from Scooty)
├── milage    (from Scooty)
├── gears     (from Bike)
└── price     (from Honda)

Total Size: 4 integers (16 bytes)
*/
class OTF : public Honda, public Bike
{
    //! Will access both Honda & Bike Classes public data
};
/*
===================================================================
2. OTF Memory Layout (Diamond Problem: Inherits Honda + Bike)
===================================================================
[ OTF Object ]
├── Path 1 (via Honda):
│   ├── topspeed  (from Scooty)
│   ├── milage    (from Scooty)
│   ├── gears     (from Bike)
│   └── price     (from Honda)
│
└── Path 2 (via direct Bike inheritance):
    ├── topspeed  (from Scooty)   <-- DUPLICATE
    ├── milage    (from Scooty)   <-- DUPLICATE
    └── gears     (from Bike)     <-- DUPLICATE

Total Size: 7 integers (28 bytes)
Note: Accessing 'otf.gears' causes a compile error due to ambiguity!
Must specify path: 'otf.Honda::gears' or 'otf.Bike::gears'.
===================================================================
*/
int main()
{
    Honda h1(120, 40, 4, 120000);
    cout << h1.gears << " " << h1.milage << " " << h1.topspeed << " " << h1.price << endl;
    return 0;
}