//DiamondCoder code 14-11-2022

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
//On old system: setlocale(LC_ALL, "hun");
/*
int osszeadas(int a, int b) {
	return a + b;
}
int area(int a, int b) {
	return a * b;
}

int main() {
	int z,a,b;
	cout << "Give 2 numbers: ";
	cin >> a >> b;
	z = osszeadas(a, b);
	cout << "Add: " << z;
	z = area(a, b);
	cout << "\nArea: " << z;
	return 0;
}*/

/*
int main() {
	char szoveg[80], masolat[80], i = 0;
	printf("kerek egy sor szöveget: "); scanf_s("%[^\n]", szoveg);
	while (masolat[i] = szoveg[i++]) i++;
	printf("\nEz a masolt szoveg: %s\n", masolat);
}
*/
/*
int main() {
	setlocale(LC_ALL, "hun");
	char a, szoveg[3][80];
	for (char j = 0; j < 3; j++) {
		printf("kerem az %d. sor szöveget: ", j);
		fflush(stdin);
		scanf_s("%s[^\n]", szoveg[j]);
	}
	for (char j = 0; j < 3; j++)printf("\nEz a szoveg: %s\n", szoveg[j]);
}
*/
/*
int main() {
	char szoveg[80], * p = szoveg;
	printf("kerek egy sor szoveget: ");
	while ((*p = getchar()) != '\n')p++;
	*p = '\0';
	p = szoveg;
	while (*p)p++;
	printf("\n\"%s\" szoveg hossza = %d\n", szoveg, p - szoveg);
}
*/
/*
int main() {
	char szoveg[80], hossz = 0;
	printf("kerek egy sor szoveget: "); scanf_s("%[^\n]", szoveg);
	while (szoveg[hossz])hossz++;
	printf("\nA szoveg hossza: %d\n", hossz);
}
*/