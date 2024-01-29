#include <iostream>
using namespace std;

class MetreCm {
private:
    int feet;
    float centimeters;

public:
    MetreCm(){
        feet = 0;
        centimeters = 0.0;
    }

MetreCm& operator=(float meters) {
    feet = static_cast<int>(meters * 3.28084); 
    centimeters = (meters * 39.3701) - (feet * 12); 
    return *this;
}


friend istream& operator>>(istream& in, MetreCm& obj) {
        cout << "Enter MetreCm in meters: ";
        float meters;
        in >> meters;
        obj = meters;
        return in;
    }

    friend ostream& operator<<(ostream& out, const MetreCm& obj) {
        out << "Feet: " << obj.feet << " centimeters: " << obj.centimeters << endl;
        return out;
    }
};

class FeetIn {
private:
    int meter;
    float centimeters;

public:
    FeetIn(){
        meter = 0;
        centimeters = 0.0;
    }

    FeetIn operator=(float feet) {
        float totalcentimeters = feet * 30.48;
        this->meter = int(totalcentimeters / 100);
        this->centimeters = totalcentimeters - this->meter * 100;
        return *this;
    }

    friend istream& operator>>(istream& in, FeetIn& obj) {
        cout << "Enter Feetcentimeters in Feet: ";
        float feet;
        in >> feet;
        obj = feet;
        return in;
    }

    friend ostream& operator<<(ostream& out, const FeetIn& obj) {
        out << "Metre: " << obj.meter << " Centimeters: " << obj.centimeters << endl;
        return out;
    }
};

