// Activity5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
public:
	void display() {
		cout << "I am the Grand Parent\n";
	}
};

class B:public A {
public:
	void display() {
		cout << "I am the Parent\n";
	}
	void view() {
		cout << "I am Derived from Class A\n";
	}
};

class C : public B {
public:
	void display() {
		cout << "I am a Child\n";
	}
	void view() {
		cout << "I am Derived from Class B\n";
	}
};

int main()
{
	A a;
	B b;
	C c;

	a.display();
	b.display();
	b.view();
	c.display();
	c.view();

	return 0;
}

