#include<iostream>
using namespace std;
int main(){
    int  n;
    
    cout << "enter the size of invertad triangle number :";
    cin >> n;
    for(int i=0; i<n; i++){
        char ch ='A';
   
        for(int j=0; j<i; j++){
            cout << " ";
            ch++;
        }
        for(int j=0; j<n-i; j++){
            // cout << (i+1);
           cout<<ch;
            // ch++;
           
        }
        cout << endl;
        ch++;
    }

    return 0;

}



