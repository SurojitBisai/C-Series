
#include<iostream>
using namespace std;
class A 
{
    public:
    int a, b;
    void input(){
        cout << "Enter two number : ";
        cin >> a >> b;
    }
};
class B 
{
    public:
    int c, d;
    void input_1(){
        cout << "enter two number : ";
        cin >> c >> d;
    }
};
class C: public A, public B 
{
    public:
    void addition()
    {
        cout << "addition : " << a + b << endl;
    }
    void substraction()
    {
        cout << "substraction : " << c-d << endl;
    }
};
int main()
{
    C obj;
    obj.input();
    // cout << "Addition of two number " << endl;
    obj.addition();
    obj.input_1();
    // cout << "Substraction of two number " << endl;
    obj.substraction();
    return 0;
}


