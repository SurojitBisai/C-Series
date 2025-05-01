#include<iostream>
using namespace std;
int main(){
    // int n = 4;
    int n ,i,j;
    cout<< "enter the number:";
    cin >>  n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
        
    }



    return 0;

}
