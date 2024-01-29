#include <iostream>
using namespace std;
#include<math.h>

template <typename T>
class Comparable {
public:
   T re, im;

   Comparable(T re = 0, T im = 0){
    this->re = re;
    this->im = im;
   }

   T magnitude() const {
       return sqrt(re * re + im * im);
   }

   friend bool operator==(const Comparable<T>& c1, const Comparable<T>& c2) {
       return c1.magnitude() == c2.magnitude();
   }

   friend bool operator!=(const Comparable<T>& c1, const Comparable<T>& c2) {
       return !(c1 == c2);
   }

   friend bool operator<(const Comparable<T>& c1, const Comparable<T>& c2) {
       return c1.magnitude() < c2.magnitude();
   }

   friend bool operator>(const Comparable<T>& c1, const Comparable<T>& c2) {
       return c2 < c1;
   }

   friend bool operator<=(const Comparable<T>& c1, const Comparable<T>& c2) {
       return !(c1 > c2);
   }

   friend bool operator>=(const Comparable<T>& c1, const Comparable<T>& c2) {
       return !(c1 < c2);
   }

   friend istream& operator>>(istream& is, Comparable<T>& c) {
       cout<<"Enter real and imaginary part: \n";
       return is >> c.re >> c.im;
   }

   friend ostream& operator<<(ostream& os, const Comparable<T>& c) {
       os << c.re;
       if (c.im >= 0) {
           os << " + " << c.im << "i";
       } else {
           os << " - " << -c.im << "i";
       }
       return os;
   }
};
