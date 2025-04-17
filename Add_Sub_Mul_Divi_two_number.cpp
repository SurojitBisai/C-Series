
#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b, c, option;

public:
    void choose_option() {
        cout << "1. Addition(+)" << endl;
        cout << "2. Subtraction(-)" << endl;
        cout << "3. Multiplication(*)" << endl;
        cout << "4. Division(/)" << endl;
        cout << "Choose an option: ";
        cin >> option;
    }

    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void perform_operation() {
        switch (option) {
            case 1:
                cout << "The addition result is: " << (a + b) << endl;
                break;
            case 2:
                cout << "The subtraction result is: " << (a - b) << endl;
                break;
            case 3:
                cout << "The multiplication result is: " << (a * b) << endl;
                break;
            case 4:
                // if (b == 0) {
                //     cout << "Error: Division by zero is not allowed!" << endl;
                // } else {
                    cout << "The division result is: " << (a / b) << endl;
                // }
                break;
            default:
                cout << "Invalid option! Please choose a valid operation." << endl;
        }
    }
};

int main() {
    Calculator g;
    g.choose_option();
    g.input();
    g.perform_operation();

    return 0;
}
