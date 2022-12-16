#include <iostream>

using namespace std;

// Addition of two numbers
// Difference between two numbers
// Product of two numbers
// Division of two numbers

// menu
void menu() {
    cout << "Press 1 to calculate sum.\n";
    cout << "Press 2 to calculate difference.\n";
    cout << "Press 3 to calculate product.\n";
    cout << "Press 4 to calculate division.\n";
    cout << "Press 5 to exit.\n";
}

void result(int choice, int a, int b) {
    
    switch (choice) {
    case 1: {
        cout << "Sum is " << (a+b) << endl;
        break;
    }
    case 2: {
        cout << "Difference is " << (a-b) << endl;
        break;
    }
    case 3: {
        cout << "Product is " << (a*b) << endl;
        break;
    }
    case 4: {
        cout << "Division is " << (a/b) << endl;
        break;
    }
    case 5: {
        cout << "Exiting.\n";
        break;
    }
    default: {
        printf("Wrong input.\n");
        break;
    }
    }
}

int main()
{
    int a, b, choice;
    choice = 0;
    while (choice != 5) {
        cout << "What are your two numbers?" << endl;
        cin >> a >> b;
        menu();
        cin >> choice;
    }
    result(choice, a, b);
}
