#include<iostream>
using namespace std;

int sumofdigit(int num){
    int digitSum = 0;

    while(num > 0){
        int lastdigit = num % 10;
        num /= 10;
        digitSum += lastdigit;
    }
    return digitSum;
}

int main(){

  
  cout << "sum = " << sumofdigit(2356) << endl;

    return 0;

}
