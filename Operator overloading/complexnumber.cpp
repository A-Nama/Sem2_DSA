#include<iostream>
#include"complex.h"
using namespace std;

int main(){
    complex c1(1.2,2.3);
    complex c2(2.3,3.4);
    complex c3=c1+c2;
    complex c4=c1*c2;
    --c2;
    cout<<c1<<endl<<c2<<endl<<c3<<endl<<c4<<endl;

}