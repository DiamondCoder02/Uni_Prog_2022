//DiamondCoder code 17-10-2022

#include <stdio.h>
#include <iostream>
#include <cmath>

#define MAX 5
using namespace std;
//On old system: setlocale(LC_ALL, "hun");

/*
int main() {
	setlocale(LC_ALL, "");
	int tomb[MAX], vege = MAX;
	int i;
	for (i = 0; i < MAX; i++) {
		printf("Kerem a %d. szamot ", i + 1); scanf_s("%d", &tomb[i]);
	}
	int keres;
	printf("Kerem a torlendo szamot "); scanf_s("%d", &keres);
	for (i = 0; i < MAX; i++) if (tomb[i] == keres) break;
	if (i == MAX)
		printf("\nNincs ilyen elem\n");
	else {
		for (; i < vege; i++)tomb[i] = tomb[i + 1];
		vege--;
	}
	for (i = 0; i < vege; i++) printf("%d\n", tomb[i]);
}
*/

/*
int main() {
	setlocale(LC_ALL, "");
	int tomb[MAX];
	int i;
	for (i = 0; i < MAX; i++) {
		printf("Kérem a %d. számot ", i + 1); scanf_s("%d", &tomb[i]);
	}
	int keres;
	printf("Kerem a keresendo szamot "); scanf_s("%d", &keres);
	for (i = 0; i < MAX; i++) if (tomb[i] == keres) break;
	if (i == MAX)
		printf("\nNincs ilyen elem\n");
	else
		printf("A %d. indexu elem = %d\n\n", i, keres);
}
*/


/*
int main() {
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
}
*/