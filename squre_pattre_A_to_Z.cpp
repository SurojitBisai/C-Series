#include<iostream>
using namespace std;
int main(){
    
    int n;
    char ch = 'A';
    cout << "enter the number ";
    cin  >> n;
    // char ch = 'A';
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++ ;
            if(ch > 'z'){
                ch = 'A';
            }
        }
        cout << endl;
    }
    cout << "after  pattern :" << ch << endl;
    return 0;
}


