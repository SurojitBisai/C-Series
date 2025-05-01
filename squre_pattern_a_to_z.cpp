#include<iostream>
using namespace std;
int main(){
    // int n = 4;
    int n ,i,j;
    cout<< "enter the number:";
    cin >>  n;
    for(int i = 1; i <= n; i++){//outer
        char ch = 'A';
        for(int j = 1; j <= n; j++){//inner stsrt => line start
            cout << ch;
            cout << " ";
            ch = ch + 1;
        }
      
        cout << endl;
    }



    return 0;

}