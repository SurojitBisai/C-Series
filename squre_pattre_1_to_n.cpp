#include<iostream>
using namespace std;
int main(){
    
    int n,i,j,num=1;
    cout << "enter the number ";
    cin  >> n;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "after  pattern :" << num << endl;
    return 0;
}



