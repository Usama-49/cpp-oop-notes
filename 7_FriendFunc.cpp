#include <iostream>
using namespace std;
class Sum
{
private:
    int num1;
    int num2;

public:
    Sum(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    friend void printSum(Sum obj);
};
void printSum(Sum obj)
{
    int num = obj.num1 + obj.num2;
    cout << num << endl;
};
int main()
{
    Sum s1(5, 8);
    printSum(s1);

    return 0;
}