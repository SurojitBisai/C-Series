#include<iostream>
using namespace std;
 //sum of 2 number
 double sum(double a, double b){
    double s = a + b;
    return s;
}

int sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum +=i ;

    }
    return sum;
}

int main(){
    cout << sum(5) << endl;
    cout << sum(10) << endl;


    return 0;

}

    
