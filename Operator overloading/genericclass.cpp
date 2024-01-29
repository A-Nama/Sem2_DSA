#include<iostream>
using namespace std;
#include"genericclass.h"

int main() {
   Comparable<double> vec1(3, 4);
   Comparable<double> vec2(6, 7);
   Comparable<double> comp1(3, 4);
   Comparable<double> comp2(5, 2);

   cout << "Vector 1: " << vec1 << endl;
   cout << "Vector 2: " << vec2 << endl;
   cout << "Complex 1: " << comp1 << endl;
   cout << "Complex 2: " << comp2 << endl;

   cout << "vec1 == vec2? " << (vec1 == vec2) << endl;
   cout << "vec1 < vec2? " << (vec1 < vec2) << endl;
   cout << "comp1 >= comp2? " << (comp1 >= comp2) << endl;

   return 0;
}