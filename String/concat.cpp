#include<iostream>
using namespace std;

int length(string s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

string concat_n(string s1, string s2) {
    int l1 = length(s1);
    int l2 = length(s2);
    int l3 = l1 + l2;
    string s3(l3, ' '); // Initialize s3 with a size of l3 and fill with spaces

    for (int i = 0; i < l1; i++) {
        s3[i] = s1[i];
    }

    for (int i = 0; i < l2; i++) {
        s3[l1 + i] = s2[i];
    }

    return s3;
}

int main() {
    string a = "anjana";
    string b = "nasrin";
    cout << concat_n(a, b) << endl;
    return 0;
}
