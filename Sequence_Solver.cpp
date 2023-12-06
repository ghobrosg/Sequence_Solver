#include <iostream>
#include <math.h>

using namespace std;
double U1;
double U2;
double U3;

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
int main()
{
    cin >> U1;
    cin >> U2;
    cin >> U3;
    if (U2 - U1 == U3 - U2) {
        arithmetic();
} else if (U2/U1 == U3/U2){
    geometric();
    } else {
    error();
    }
    system("pause");
    return 0;
}