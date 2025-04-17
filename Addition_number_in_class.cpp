#include<iostream>
#include<conio.h>
using namespace std;
class addition
{
    private:
           int a,b,c;
    public:
         void input()
        {
          cout<<"Enter two numbers:";
          cin>> a>>b;
        }
          void calculation()
        {
           c=a+b;    
        }
          void output()
        {
            cout<<"The addition resultis:"<<c;
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

// #include <iostream>  
// class Addition {  
//     private:  
//         int num1, num2, sum;  
//     public:  
//         void input() {  
//             std::cout << "Enter two numbers: ";  
//             std::cin >> num1 >> num2;  
//         }  
//         void calculate() {  
//             sum = num1 + num2;  
//         }  
//         void output() {  
//             std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;  
//         }  
// };  
  
// int main() {  
//     Addition add;  
//     add.input();  
//     add.calculate();  
//     add.output();  
//     return 0;  
// }  