
#include<iostream>
using namespace std;
class addition
{
    public:
    void add1 (int a, int b)
    {
        cout << "enter sum of two numbber : " << a + b << endl;
    }
    void add2 (float a, float b)
    {
        cout << "Enter the sum of two floating number : " << a + b << endl;
    }
    void add3 (int a, float b)
    {
        cout << "sum of two numbber : " << a + b << endl;
    }
    void add4 (int a, int b, int c)
    {
        cout << "sum of three number :" << a + b + c << endl;
    }
};
int main()
{
    addition a2;
    a2.add1(18,19);
    a2.add2(21.5,30.5);
    a2.add3(30,25.5);
    a2.add4(20,7,25);
    return 0;

}
