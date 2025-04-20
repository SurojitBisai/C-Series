#include<iostream>
using namespace std;
int main(){
    int n, oddsum =0,i;
    cout << "enter the number :";
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0){
            // cout << i << " ";
            oddsum +=i;
        }
    }
    cout << "odd dum = " << oddsum << endl;
    return 0;
}

