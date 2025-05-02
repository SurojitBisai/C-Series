#include<iostream>
using namespace std;
int main(){
    int  n, num =1;
    cout << "enter the size of invertad triangle number :";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
            
            // num++;
        }
        for(int j=0; j<n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }

    return 0;
}