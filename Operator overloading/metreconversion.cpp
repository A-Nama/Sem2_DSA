#include<iostream>
#include"metreconversion.h"
using namespace std;

int main() {
    int ans;
    cout << "Enter the measurement system used for the distance:\n1. Metre and Centimeter\n2. Feet and Inches\n(please select the corresponding number)" << endl;
    cin >> ans;

    if (ans == 1) {
        MetreCm d;
        cin >> d;
        cout << "MetreCm in feet and inches \n" << d;
    } 
    else if (ans == 2) {
        FeetIn d;
        cin >> d;
        cout << "FeetInches in MetreCm \n" << d;
    }

    return 0;
}