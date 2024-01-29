#include <iostream>
using namespace std;

class vector3D {
private:
    double x, y, z;

public:
    vector3D(){
        x=0;
        y=0;
        z=0;
    }

    vector3D(double x, double y, double z){
        this->x=x;
        this->y=y;
        this->z=z;
    }

    friend istream& operator>>(istream& in, vector3D& vec) {
        cout << "Enter x, y, z coordinates: ";
        in >> vec.x >> vec.y >> vec.z;
        return in;
    }

    friend ostream& operator<<(ostream& out, const vector3D& vec) {
        out  <<"("<< vec.x << ") x + (" << vec.y << ") y + (" << vec.z << ") z \n";
        return out;
    }

    vector3D operator+(const vector3D& vec) const {
        return vector3D(x + vec.x, y + vec.y, z + vec.z);
    }

    vector3D operator-(const vector3D& vec) const {
        return vector3D(x - vec.x, y - vec.y, z - vec.z);
    }

    vector3D operator*(double scalar) const {
        return vector3D(x * scalar, y * scalar, z * scalar);
    }

    double dot(const vector3D& vec) const {
        return (x * vec.x + y * vec.y + z * vec.z);
    }

    vector3D cross(const vector3D& vec) const {
        return vector3D(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x);
    }
};