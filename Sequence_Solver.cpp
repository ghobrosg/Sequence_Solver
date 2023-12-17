#include <iostream>
#include <math.h>

using namespace std;
double U1;
double U2;
double U3;
char in;

void arithmetic() {
    cout << "Arithmetic sequence" << endl;
    double d = U3 - U2;
    for (int i = 0; i < 10; i++) {
        cout << U3 + (d * i) << endl;
    }
}

void geometric() {
    cout << "Geometric sequence" << endl;
    double d = U3 / U2;
    for (int i = 0; i < 10; i++) {
        cout << U3 * (pow(d, i)) << endl;
    }
}
void error() {
    cout << "Entered values do not make a sequence" << endl;
}

void optionx() {
    cout << "Enter the first 3 values of the sequence" << endl;
    cin >> U1;
    cin >> U2;
    cin >> U3;
    if (U2 - U1 == U3 - U2) {
        arithmetic();
    }
    else if (U2 / U1 == U3 / U2) {
        geometric();
    }
    else {
        error();
    }
}

void optiona() {
    cout << "Enter the first 2 values of the arithmetic sequence" << endl;
    cin >> U2;
    cin >> U3;
    arithmetic();
}

void optiong() {
    cout << "Enter the first 2 values of the geometric sequence" << endl;
    cin >> U2;
    cin >> U3;
    geometric();
}

int main()
{
    cout << "Enter the type of sequence\nInput 'a' if arithmetic, 'g' if geometric, or any other key if type is not known" << endl;
    cin >> in;

    if (in == 'a') {
        optiona();
    }

    else if (in == 'g') {
        optiong();
    }

    else {
        optionx();
    }

    system("pause");
    return 0;
}