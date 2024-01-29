
#include<iostream>
#include"3Dop.h"
using namespace std;

int main() {
    vector3D vec1, vec2;
    cout << "Enter coordinates for vector 1: ";
    cin >> vec1;
    cout << "Enter coordinates for vector 2: ";
    cin >> vec2;

    cout << "Vector 1: " << vec1 << endl;
    cout << "Vector 2: " << vec2 << endl;

    double scalar;
    cout << "Enter a scalar value: ";
    cin >> scalar;
    vector3D scaled1 = vec1 * scalar;
    vector3D scaled2 = vec2 * scalar;
    cout << "Vector 1 scaled by " << scalar << ": " << scaled1 << endl;
    cout<<"Vector 2 scaled by " << scalar << ": " << scaled2 << endl;

    vector3D sum = vec1 + vec2;
    cout << "Sum of vectors: " << sum << endl;

    vector3D difference = vec1 - vec2;
    cout << "Difference of vectors: " << difference << endl;

    double dotProduct = vec1.dot(vec2);
    cout << "Dot product of vectors: " << dotProduct << endl;

    vector3D crossProduct = vec1.cross(vec2);
    cout << "Cross product of vectors: " << crossProduct << endl;

    return 0;
}