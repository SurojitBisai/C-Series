#include<iostream>
using namespace std;
int main(){
    int  n, num = 1;
    cout << "enter the size of floyds triangle number :";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}