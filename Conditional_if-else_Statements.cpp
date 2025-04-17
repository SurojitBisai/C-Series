
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n = 15 ;
// //     if (n >= 0){
// //         cout << "n is prositive \n";

// //     } else {
// //         cout << "n is negetive\n";
// //     }

// //     return 0;
// // }

// // age

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int age ;
// //     cout << "enter age ";
// //     cin >> age;

// //     if (age >= 18){
// //         cout << "you can vote \n";

// //     } else {
// //         cout << "you can't vote\n";
// //     }

// //     return 0;
// // }

// // odd and even

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout << "enter number";
//     cin >> n;

//     if (n%2== 0){
//         cout << "even \n";

//     } else {
//         cout << "odd\n";
//     }

//     return 0;
// }



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
    } else {
        cout << "c\n";
    }

    return 0;
}
