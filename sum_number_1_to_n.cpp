#include<iostream>
using namespace std;
int main(){
    int i, n, sum = 0;
    cout << "enter the mumber :";
    cin >> n;
    for(int i = 1; i <= n; i++){
        // sum = sum + i;
        sum += i;
    }
    cout << "sum = " << sum << endl;
    cout << endl;

    return 0;
}