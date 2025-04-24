#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i=1; i<=n; i++){//line
        int n = 10;
        for(int j=0; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
    // cut << endl;
    return 0;
}