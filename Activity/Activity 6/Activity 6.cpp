// Activity5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
public:
    int num1, num2;

    void read() {
        do {
            cout << "Enter first number: ";
            cin >> num1;
            if (num1 >= 1 && num1 <= 1000000)
                break;
        } while (true);
        do {
            cout << "Enter second number: ";
            cin >> num2;
            if (num2 >= 1 && num2 <= 1000000)
                break;
        } while (true);
    }
};

class B {
public:
    string text;
    string read() {
        do {
            cout << "Enter any text: ";
            cin >> text;
            if (text.length() >= 1 && text.length() <= 50)
                break;
            else cout << "\nInvalid try again...\n";
        } while (true);    
        return text;
    }    
};

class C : public  B, A {
private:
    int sum;
    string text;

public:
    int sumOf(int num1, int num2) {
        return sum = num1 + num2;
    }
    void display() {
        A::read();
        text = B::read();
        sum = sumOf(A::num1, A::num2);

        cout << "The sum of " << A::num1 << " and " << A::num2 << " is " << sum << endl
            << "The entered text is: " << text;
    }
};

int main()
{
    C c;
    int num;

    do {
        cout << "How many times do you want to run the program? ";
        cin >> num;
        if (num >= 1 && num <= 10)
            break;
    } while (true);

    int i = 0;
    while (i < num) {
        c.display();
        i++;
    }
}

