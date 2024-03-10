#include<iostream>
using namespace std;

string substring(string s1, int start, int length){
    string T(length, ' ');
    for ( int i = 0; i<length;i++){
        T[i]  = s1[start+i];
    }
    return T;
}

int main(){
    string w = "Skyblue";
    cout<<substring(w,2,4)<<endl;
    return 0;

}
