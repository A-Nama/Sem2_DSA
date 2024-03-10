#include<iostream>
using namespace std;

int length(string s){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int match(string s1,string s2){
    int pos = 0;
    while(pos<=length(s1)-length(s2)){
        int j = 0;
        while (s1[pos+j] = s2[j]&&s2[j]!='\0'){
            j++;
        }
        if (s2[j] = '\0'){
            return pos;
        }
        pos++;
    }
    return -1;
}

int main(){
    string a = "cow";
    string b = "cow";
    cout<<match(a,b);
    return 0;
}
