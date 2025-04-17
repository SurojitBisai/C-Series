
#include<iostream>
using namespace std;
class minimax
{
    private:
        int a, b, c, mini, max;
    public:
        void input()
        {
            cout << "enter three number :" ;
            cin >> a >> b >> c ;
        }
        void maximum()
        {
            if ((a >= b) && (a >= c))
            {
                max = a;
            }
            else if ((b >= a) && (b >= c))
            {
                max = b;
            }
            else
            {
                max = c ;
            }
            cout << "The maximum number are three number is : " << max << endl;
        }
        void minimum()
        {
            if ((a <= b) && (a <= c))
            {
                mini = a;
            }
            else if ((b <= a) && (b <= c))
            {
                mini =  b;
            }
            else
            {
                mini = c;
            }
            cout << "The minimum number are three number is : " << mini <<endl;
        }

};
int main()
{
    minimax g;
    g.input();
    g.maximum();
    g.minimum();
    return 0;
}