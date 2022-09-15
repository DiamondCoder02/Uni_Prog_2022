//DiamondCoder code 15-09-2022
//
#include <iostream>
#include <cmath>
using namespace std;

//Homework1
int main()
{
    float owo, nya, lewd, creamPi, horny;
    string uwu; 
    int objectNum;
    bool dim;
    owo = 0.0;
    nya = 0.0;
    lewd = 0.0;
    horny = 0.0;
    creamPi = 3.14159265359;

    cout << "Do we calculate a 3d object? (1 for true or 0 for false)";
    cin >> dim;
    try {
        if (dim) {
            cout << "What's the object? \n1 Cube\n2 Cuboid\n3 Pyramid\n4 Sphere\n5 Cylinder\nChoosen:";
            cin >> objectNum;
            cout << "What would you like to calculate? Surfece or Volume? (Type S or V) ";
            cin >> uwu;
            if (objectNum == 1) {
                cout << "Please give me a side: ";
                cin >> owo;
                lewd = (owo * owo * 6);
                printf("Cube Surface is %f \n", lewd);
                lewd = (owo * owo * owo);
                printf("Cube Volume is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 2) {
                cout << "Please give me one side: ";
                cin >> owo;
                cout << "Please give me second side: ";
                cin >> nya;
                cout << "Please give me third side: ";
                cin >> horny;
                lewd = (2*(owo*nya+owo*horny+nya*horny));
                printf("Cuboid Surface is %f \n", lewd);
                lewd = (owo*nya*horny);
                printf("Cuboid Volume is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 3) {
                cout << "Please give me the base side: ";
                cin >> owo;
                cout << "Please give me the height: ";
                cin >> nya;
                horny = sqrt((owo/2)*(owo/2)+nya*nya);
                lewd = ((owo * owo) + (horny *owo*2));
                printf("Pyramid Surface is %f \n", lewd);
                lewd = (owo * owo * nya * 1/3);
                printf("Pyramid Volume is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 4) {
                cout << "Please give me the radius: ";
                cin >> owo;
                lewd = (owo * owo * creamPi * 4);
                printf("Sphere Surface is %f \n", lewd);
                lewd = (4 / 3 * creamPi * owo * owo * owo);
                printf("Sphere Volume is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 5) {
                cout << "Please give me the radius: ";
                cin >> owo;
                cout << "Please give me the height: ";
                cin >> nya;
                lewd = (owo * owo * creamPi * nya);
                printf("Cylinder Surface is %f \n", lewd);
                lewd = (2 * owo * owo * creamPi) + (2 * owo * creamPi * nya);
                printf("Cylinder Volume is %f \n", lewd);
                return 0;
            }
            else {
                printf("\nError, you made mistake! \n");
                return 0;
            }
        }
        else {
            cout << "What's the object? \n1 Square\n2 Rectangle\n3 Triangle\n4 Circle\n5 Ellipse";
            cin >> objectNum;
            if (objectNum == 1) {
                cout << "Please give me the side: ";
                cin >> owo;
                lewd = (owo * owo);
                printf("Rectangle Area is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 2) {
                cout << "Please give me one side: ";
                cin >> owo;
                cout << "Please give me other side: ";
                cin >> nya;
                lewd = (owo * nya);
                printf("Rectangle Area is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 3) {
                cout << "Please give me the base: ";
                cin >> owo;
                cout << "Please give me the height: ";
                cin >> nya;
                lewd = ((owo * nya) /0.5 );
                printf("Triangle Area is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 4) {
                cout << "Please give me the radius: ";
                cin >> owo;
                lewd = (owo * owo * creamPi);
                printf("Circle Area is %f \n", lewd);
                return 0;
            }
            else if (objectNum == 5) {
                cout << "Please give me one radius: ";
                cin >> owo;
                cout << "Please give me second radius: ";
                cin >> nya;
                lewd = (owo * creamPi * nya);
                printf("Ellipse Area is %f \n", lewd);
                return 0;
            }
            else {
                printf("\nError, you made mistake! \n");
                return 0;
            }
        }
    }
    catch (...) {
        printf("\n\n__Error, you made mistake!__ \n");
        return 0;
    }
}


// Lesson1
/*
int main()
{
    int a, b, c,d,e,f;
    float g,h,i;
    a = 7;
    b = 5;
    h = 7.1;
    i = 5.7;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = h / i;
    printf("Add up: %d + %d = %d\n", a, b, c);
    printf("Minus: %d - %d = %d\n", a, b, d);
    printf("Multiply: %d * %d = %d\n", a, b, e);
    printf("Divide: %d / %d = %d\n", a, b, f);
    printf("Divide: %d / %d = %0.6f\n", a, b, g);

    //std::cout << "Hello World!\n";
    std::cout << " Horny ";
    std::cout << " The bee movie script: ";
    
    printf(" sdf ");
    printf(" lkj ");
    cout << " asd ";
    return 0;
}
*/