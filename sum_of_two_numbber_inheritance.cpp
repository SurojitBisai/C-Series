
#include<iostream>
using namespace std;
class A 
{
public:
int a, b;
void input(){
    cout << "Enter two numbber : ";
    cin >> a >> b;
    }
};
class B: public A
{
    public:
    void addition()
    {
        cout << "sum = " << a + b;
    }
};
int main()
{
    B add;
    add.input();
    add.addition();
    return 0;
}
