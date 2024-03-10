#include<iostream>
using namespace std;

int length(const char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char* concat_dynamic(const char* s1, const char* s2) {
    int l1 = length(s1);
    int l2 = length(s2);
    int l3 = l1 + l2;

    // Allocate dynamic memory for the concatenated string
    char* s3 = new char[l3 + 1]; // +1 for the null terminator

    // Copy the first string into the new memory
    for (int i = 0; i < l1; i++) {
        s3[i] = s1[i];
    }

    // Copy the second string into the new memory
    for (int i = 0; i < l2; i++) {
        s3[l1 + i] = s2[i];
    }

    // Null-terminate the concatenated string
    s3[l3] = '\0';

    return s3;
}

int main() {
    const char* a = "anjana";
    const char* b = "nasrin";

    // Concatenate the strings using dynamic memory allocation
    char* result = concat_dynamic(a, b);

    // Output the concatenated string
    cout << result << endl;

    // Deallocate the dynamically allocated memory
    delete[] result;

    return 0;
}
