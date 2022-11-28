//DiamondCoder code 28-11-2022

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
//On old system: setlocale(LC_ALL, "hun");

/*
int a, b, c;
bool triangle(int, int, int);
string highest();
int e, f, g;
void quadratic(int, int, int);
int r;
void circle(int);
int main() {
	//1.feladat
	cout << "1.Feladat \nEnter 3 numbers to check if it's a triangle: ";
	cin >> a >> b >> c;
	if (triangle(a, b, c)) { cout << "It is a triangle." << endl; }
	else { cout << "It is not a triangle." << endl; }
	
	//2.feladat
	cout << "\n2.Feladat \nData structure: ";
	highest();
	
	//3.feladat
	cout << " \n3.Feladat \nQuadratic equation: Give me 3 numbers: ";
	cin >> e >> f >> g;
	quadratic(e,f,g);

	//4.feladat
	cout << "\n4.Feladat \nCalculate circle area: Give me the radius: ";
	cin >> r;
	circle(r);
};

bool triangle(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) { return true; }
	else { return false; }
}

struct people {
	string name;
	int age, height;
};
string highest() {
	people person[5];
	person[0].name = "John";
	person[1].name = "Mary";
	person[2].name = "Peter";
	person[3].name = "Jane";
	person[4].name = "Mark";
	for (int i = 0; i < 5; i++) {
		person[i].age = rand() % 100;
		person[i].height = rand() % 200;
	}
	int highest = 0;
	for (int i = 0; i < 5; i++) {
		if (person[i].height > highest) { highest = person[i].height; }
	}
	cout << "debug: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << person[i].name << " (Age: " << person[i].age << ")" << " is " << person[i].height << " cm" << endl;
	}
	cout << "Answer: " << endl;
	for (int i = 0; i < 5; i++) {
		if (person[i].height == highest) {
			cout << person[i].name << " (Age: " << person[i].age << ")" << " is the highest with " << person[i].height << " cm" << endl; 
		}
	}
	return " ";
};

void quadratic(int e, int f, int g) {
	int x1, x2;
	x1 = (-f + sqrt(f * f - 4 * e * g)) / (2 * e);
	x2 = (-f - sqrt(f * f - 4 * e * g)) / (2 * e);
	cout << "First number = " << x1 << " \nSecond number = " << x2 << endl;
};

void circle(int r) {
	float ci, ar, pi;
	pi = 3.14159265359;
	ci = 2 * pi * r;
	ar = pi * r * r;
	cout << "The area of the circle is: " << ar << " and the circumference is: " << ci << endl;
};
*/