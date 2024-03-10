#include<iostream>
using namespace std;

int length(string s){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
string w = "Majida";
cout<<"Length: "<<length(w)<<endl;
return 0;
}
