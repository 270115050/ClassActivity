// Activity5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Add {
public:
    int addProduct(int num1, int num2) {
        return num1 + num2;
    }
};

class Product {
public:
    int num1, num2;

    void sumOfProduct() {
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

class showMeTheMoney : private Product, Add {
    Product p;
    Add a;
public:
    void display() {
        p.sumOfProduct();
        cout << "The sum of product " << p.num1 << ", " << p.num2 << " is: " << a.addProduct(p.num1, p.num2);
    }
};


int main()
{
    showMeTheMoney s;
    int num;

    do {
        cout << "How many times do you want to run the program? ";
        cin >> num;
        if (num >= 1 && num <= 10)
            break;
    } while (true);
    
    int i = 0;
    while (i < num){
        s.display();
        i++;
    }
}

