//DiamondCoder code 10-10-2022
//
#include <stdio.h>
#include <iostream>
#include <cmath>

#define MAX 5

using namespace std;
//On old system: setlocale(LC_ALL, "hun");
/*
int main() {
	int exercise;
	cout << "Which exercise should we test first? (1-5): ";
	cin >> exercise;
	if (exercise == 1) {
		float owo, nya, lewd, creamPi, horny;
		owo = 0.0;
		nya = 0.0;
		lewd = 0.0;
		horny = 0.0;
		creamPi = 3.14159265359;

		cout << "Please give me the radius: ";
		cin >> owo;
		cout << "Please give me the height: ";
		cin >> nya;
		cout << "How much paint you need per square meter? ";
		cin >> horny;
		lewd = (owo * owo * creamPi * nya);
		printf("Cylinder Surface is %f \n", lewd);
		lewd = (owo * owo * creamPi * nya * horny);
		printf("You need this much paint: %f \n", lewd);
		return 0;
	}
	else if (exercise == 2) {
		char c;
		printf("Type some character and press enter: \n");
		c = getchar();
		while (c != '\n') {
			putchar(c);
			c = getchar();
		}
	}
	else if (exercise == 3) {
		int a, b, c;
		cout << "Enter 3 numbers: ";
		cin >> a >> b >> c;
		if (a < b && a < c) {
			cout << a << " is the smallest number";
		}
		else if (b < a && b < c) {
			cout << b << " is the smallest number";
		}
		else if (c < a && c < b) {
			cout << c << " is the smallest number";
		}
		else {
			cout << "All numbers are equal";
		}
		return 0;
	}
	else if (exercise == 4) {
		int week;
		cout << "Enter a number of week: ";
		cin >> week;
		switch (week) {
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
		case 7: cout << "Sunday"; break;
		default: cout << "Invalid week"; break;
		}
		return 0;
	}
	else if (exercise == 5) {
		int tomb[MAX];
		int i, j;
		//Tömb feltöltése
		for (i = 0; i < MAX; i++) { printf("Kerem a %d. szamot ", i + 1); scanf_s("%d", &tomb[i]); }
		//Minimum- és maximumkeresés
		int min, max;
		min = max = tomb[0];
		for (i = 1; i < MAX; i++) {
			if (tomb[i] > max)max = tomb[i];
			if (tomb[i] < min)min = tomb[i];
		}
		printf("Minimum = %d\nMaximun = %d\n", min, max);
		//Buborékrendezés
		int csere;
		for (j = 0; j < MAX - 1; j++)
			for (i = 0; i < MAX - 1 - j; i++)
				if (tomb[i] > tomb[i + 1]) {
					csere = tomb[i];
					tomb[i] = tomb[i + 1];
					tomb[i + 1] = csere;
				}
		for (i = 0; i < MAX; i++) printf("%d\n", tomb[i]);
		return 0;
	}
	else {
		cout << "Invalid exercise number!";
		return 0;
	}
}
*/
//Exercise 4
/*
int main() {
	int week;
	cout << "Enter a number of week: ";
	cin >> week;
	switch (week) {
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
		case 7: cout << "Sunday"; break;
		default: cout << "Invalid week"; break;
	}
}
*/


//Exercise 3
//ask for 3 numbers and print the smallest one
/*
int main() {
	int a, b, c;
	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a << " is the smallest number";
	}
	else if (b < a && b < c) {
		cout << b << " is the smallest number";
	}
	else if (c < a && c < b) {
		cout << c << " is the smallest number";
	}
	else {
		cout << "All numbers are equal";
	}
	return 0;
}
*/


//Exercise 2
//using getchar and putchar to ask for multiple characters and print them out
/*
int main() {
	
}
*/

//Exercise 1
/*
int main() {
    float owo, nya, lewd, creamPi, horny;
    owo = 0.0;
    nya = 0.0;
    lewd = 0.0;
    horny = 0.0;
    creamPi = 3.14159265359;
	
    cout << "Please give me the radius: ";
    cin >> owo;
    cout << "Please give me the height: ";
    cin >> nya;
    cout << "How much paint you need per square meter? ";
    cin >> horny;
    lewd = (owo * owo * creamPi * nya);
    printf("Cylinder Surface is %f \n", lewd);
	lewd = (owo * owo * creamPi * nya * horny);
    printf("You need this much paint: %f \n", lewd);
}
*/