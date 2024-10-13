#include<bits/stdc++.h>
using namespace std;
char toUpperCase(char c) {
    return c & ~(1<<5); 
}
char toLowerCase(char c) {
    return c | (1<<5); 
}

char toggleCase(char c) {
    return c ^ (1<<5);
}

int main() {
    char lower = 'a';
    char upper = 'A';

    cout << lower << " to uppercase: " << toUpperCase(lower) << std::endl;
    cout << upper << " to lowercase: " << toLowerCase(upper) << std::endl;

    cout << "Toggle case of " << lower << ": " << toggleCase(lower) << std::endl;
    cout << "Toggle case of " << upper << ": " << toggleCase(upper) << std::endl;

    return 0;
}
