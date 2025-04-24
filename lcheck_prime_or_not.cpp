
#include<iostream>
using namespace std;
int main(){
    // int n = 14;
    // bool isPrime = true;
    int n, isPrime = true;
    cout << "enter the nuer : ";
    cin >> n;
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    } 
    if(isPrime == true){
        cout << "prime number\n";

    } else {
        cout << "non prime number\n";

    }
    return 0;
}