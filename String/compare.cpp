#include<iostream>
using namespace std;

int compare(string s1,string s2){
    int i =0;
    while(s1[i]==s2[i]&& s1[i]!='\0'&&s2[i]!='\0'){
        i++;
    }
    return s1[i]-s2[i];
}

int main(){
    string a = "cat";
    string b = "cat";
    cout<<compare(a,b)<<endl;
    return 0;
}
