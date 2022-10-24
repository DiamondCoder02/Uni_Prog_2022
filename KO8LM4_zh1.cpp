//DiamondCoder code 24-10-2022

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;


int main() {
	//1.feladat
	int a, b, c;
	int x1, x2;
	cout << "1.Feladat \nI need 3 numbers: ";
	cin >> a >> b >> c;
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "First number = " << x1 << " \nSecond number = " << x2 << endl;
	float x3 = (b * b - 4 * a * c);
	if (x3 < 0) {
		cout << "Komplex" << endl;
	}
	else if (x3 == 0) {
		cout << "1 real solution" << endl;
	}
	else {
		cout << "2 real solution" << endl;
	}
	

	//2.feladat
	int tomb[5];
	int i, j;
	cout << "\n2.Feladat \nI need 5 numbers: ";
	for (i = 0; i < 5; i++) { cin >> tomb[i]; }
	int min, max;
	min = max = tomb[0];
	for (i = 1; i < 5; i++) {
		if (tomb[i] < min) min = tomb[i];
		if (tomb[i] > max) max = tomb[i];
	}
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (tomb[i] < tomb[j]) {
				int temp = tomb[i];
				tomb[i] = tomb[j];
				tomb[j] = temp;
			}
		}
	}
	cout << "The numbers in descending order: ";
	for (i = 0; i < 5; i++) cout << tomb[i] << " ";
	cout << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	//3.feladat
	int x;
	cout << "\n3.Feladat \nPlease give me the point (1-10): ";
	cin >> x;
	switch (x) {
		case 1: case 2: case 3: case 4: cout << "It's a one"; break;
		case 5: case 6: cout << "It's a two"; break;
		case 7: case 8: cout << "It's a three"; break;
		case 9: cout << "It's a four"; break;
		case 10: cout << "It's a five"; break;
		default: cout << "Invalid points"; break;
	}
	
	//4.feladat
	int y;
	cout << "\n\n4.Feladat \nPlease give me a number: ";
	cin >> y;
	if (y < 0) y = -y;
	cout << "The absolute value of the number is: " << y << endl;

	//5.feladat
	setlocale(LC_ALL, "hun");
	char name[50];
	cout << "\n5.Feladat \nPlease give me your name: ";
	cin >> name;
	cout << "Hello " << name << endl;
	
}