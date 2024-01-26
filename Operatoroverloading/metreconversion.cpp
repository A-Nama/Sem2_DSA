#include <iostream>
using namespace std;

class MetreCm {
public:
    int feet;
    float inches;

    MetreCm() {
        feet = 0;
        inches = 0.0;
    }

    void operator=(float meters) {
        float totalFeet = meters * 3.28084;
        feet = int(totalFeet);
        inches = (totalFeet - feet) * 12;
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

class FeetIn {
public:
    int meters;
    float centimeters;

    FeetIn() {
        meters = 0;
        centimeters = 0.0;
    }

    void operator=(float feet) {
        meters = feet / 3.28084;
        centimeters = (feet * 12) * 2.54;
    }

    void display() {
        cout << "Meters: " << meters << " Centimeters: " << centimeters << endl;
    }
};

int main() {
    int ans;
    cout << "Enter the measurement system used for the distance:\n1. Metre and Centimeter\n2. Feet and Inches\n(please select the corresponding number)" << endl;
    cin >> ans;

    if (ans == 1) {
        MetreCm d;
        float meters;

        cout << "Enter MetreCm in meters: ";
        cin >> meters;

        d = meters;

        cout << "MetreCm in feet and inches: ";
        d.display();
    }
    else if (ans == 2) {
        FeetIn d;
        float feet;

        cout << "Enter FeetInches in Feet: ";
        cin >> feet;

        d = feet;

        cout << "FeetInches in MetreCm: ";
        d.display();
    }

    return 0;
}
