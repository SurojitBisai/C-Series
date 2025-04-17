#include<iostream>
using namespace std;
class calculator
{
    private:
        int a, b, c, option;
    public:
        void choose_option(){
        cout << "1. addition (+)" << endl;
        cout << "2. substrection (-)" << endl;
        cout << "3. multiplecation (*)" << endl;
        cout << "4. division (/)" << endl;
        cout << "choose_ option 1 to 4:- " << endl;
        cin >> option;
    }
    void input(){
        cout << "enter two number " << endl;
        cin >>  a >> b;

    }
    void perform_opteration(){
        switch (option) {
            case 1:
            cout << "the addition result is :" << (a + b) << endl;
            break;
            case 2:
            cout << "the substrection result is :" << (a - b) << endl;
            break;
            case 3:
            cout << "the multiplecation result is :" << (a * b) << endl;
            break;
            case 4:
            cout << "the division result is :" << (a / b) << endl;
            break;
            default:
            cout << "Invalid option please choose a valid option" << endl;
            
    
        }
    }
};
int main (){
    calculator g;
    g. choose_option();
    g.input();
    g.perform_opteration();
    return 0;
}
