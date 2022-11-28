//DiamondCoder code 28-11-2022

#include <iostream>
#include <fstream>

using namespace std;
//On old system: setlocale(LC_ALL, "hun");

int main() {
	fstream my_file;
	my_file.open("my_file.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created!";
		my_file << "Hello World!";
		my_file.close();
	}
	return 0;
}