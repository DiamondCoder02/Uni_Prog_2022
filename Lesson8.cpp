//DiamondCoder code 07-11-2022

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
//On old system: setlocale(LC_ALL, "hun");
#define SPACE " "
/*
int main() {
    int tabla[11][11];       //Azért 11-es mindkét tömb indexe, mert így 1-től 10-ig lehet futtatni mindkét irányt
    cout << "Ez egy 10x10-es szorzotablat ir ki:...\n";

    for (int xindex = 1; xindex < 11; xindex++) {
        for (int yindex = 1; yindex < 11; yindex++) {
            tabla[xindex][yindex] = xindex * yindex;       // Ez a tulajdonképpeni szorzás
            cout << xindex << "x" << yindex << "=";          // Mit is akarunk összeszroozni?
            if (tabla[xindex][yindex] < 10) cout << SPACE;  // Ha túl nagy lenne az eredmény, tesz eléje egy SPACE-t
            cout << tabla[xindex][yindex] << SPACE;        // Kiírja a szorzás eredményét
        }
        cout << endl;                                         // Sorok végét le kell zárni
    }
    cout << endl;
}
*/