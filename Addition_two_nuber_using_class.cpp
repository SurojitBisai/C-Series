#include<iostream>
using namespace std;
class addition
{
    private:
        int a, b, c;
    public:
        void input()
        {
            cout << "enter two number :";
            cin >> a >> b;

        }
        void calculation()
        {
            c = a +  b;
        }
        void output()
        {
            cout << "The addition result is -"<< c;
        }
};
int main()
{
    addition add;
    add.input();
    add.calculation();
    add.output();
    return 0;
}