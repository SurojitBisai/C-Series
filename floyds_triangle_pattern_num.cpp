#include<iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter the size of pattern: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        // for(int j = 0; j <=i; j++) {
        for(int j=i+1; j>0; j--){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
