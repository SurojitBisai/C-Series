
#include<iostream>
using namespace std;
int main(){
    int marks;

    cout << "enter marks :";
    cin >> marks;

    if (marks >= 90) {
        cout << "A\n";

    } else if(marks >= 80 && marks < 90) {
        cout << "B\n";
    } else if(marks >= 45 && marks < 80) {
        cout << "c\n";
    } else if(marks >= 25 && marks < 45) {
        cout << "d\n";
    } else {
        cout << "fail";
    }

    return 0;
}
