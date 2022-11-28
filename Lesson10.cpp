//DiamondCoder code 21-11-2022

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
//On old system: setlocale(LC_ALL, "hun");

/*
int main() {
	
}struct rec {

	int szam;

	rec* kovetkezo;

};
*/

/*
int main() {
	int adat;
	rec* uj, * elso = NULL, * aktualis;
	printf("Kerek egy számot: "); scanf("%d", &adat);
	while (adat) {
		uj = (rec*)malloc(sizeof(rec));
		if (!uj) {
			//Típuskényszerítés, helyfoglalás
			//Ha nincs cím (NULL), akkor nem sikerült a helyfoglalás
			printf("Nincs elég memória\n");
			system("pause");
			return -1;
		}
		uj->szam = adat;
		uj->kovetkezo = NULL;
		if (!elso) elso = uj;
		//Ha legelső elem
		else aktualis->kovetkezo = uj;
		aktualis = uj;
		printf("Kerek egy számot: "); scanf("%d", &adat);
	}
	//Adatkiírás
	aktualis = elso;
	//Ez első elem címe
	while (aktualis) { //A lista végén NULL
		printf("%d\n", aktualis->szam);
		aktualis = aktualis->kovetkezo;
	}
}
*/

/*
int main() {
	string firstName, lastName;
	int birthYear, birthMonth, birthDay;
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;
	cout << "Enter your birth year: ";
	cin >> birthYear;
	cout << "Enter your birth month: ";
	cin >> birthMonth;
	cout << "Enter your birth day: ";
	cin >> birthDay;
	cout << "Your full name is: " << firstName << " " << lastName << endl;
	cout << "Your birth date is: " << birthYear << "." << birthMonth << "." << birthDay << endl;
}
*/
/*
struct date {
	int day;
	char month[10];
	int year;
};
int main() {
	date d;
	setlocale(LC_ALL, "");
	printf("Year:\t"); scanf_s("%d", &d.year);
	printf("Month:\t"); scanf_s("%s", d.month);
	printf("Day:\t"); scanf_s("%d", &d.day);
	printf("\n%d - %s - %d", d.year, d.month, d.day);
}
*/
/*
int fakt(int);
int main() {
	int n;
	printf("Give a number: "); scanf_s("%d", &n);
	printf("The factorial of %d is %d", n, fakt(n));
}
int fakt(int n) {
	if (n <= 1) return 1;
	return n * fakt(n - 1);
}
*/
/*
void brick();
int a, b, ter, ker;
int main() {
	setlocale(LC_ALL, "hun");
	printf("Please give me the length of the brick: "); scanf_s("%d", &a);
	printf("Please give me the other length of the brick: "); scanf_s("%d", &b);
	brick();
	printf("A téglalap kerülete: %d, a területe: %d\n", ker, ter);
}
void brick() {
	ker = 2 * (a + b);
	ter = a * b;
}
*/
/*
void brick(int, int, int*, int*);
int main() {
	setlocale(LC_ALL, "hun");
	int a, b, ter, ker;
	printf("Please give me the length of the brick: "); scanf_s("%d", &a);
	printf("Please give me the other length of the brick: "); scanf_s("%d", &b);
	brick(a, b, &ter, &ker);
	printf("A téglalap kerülete: %d, a területe: %d\n", ker, ter);
}
void brick(int x, int y, int* k, int* t) {
	*k = 2 * (x + y);
	*t = x * y;
}
*/