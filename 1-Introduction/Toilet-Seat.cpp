#include <iostream>
#include <string>

using namespace std;

int no_policy   (string s);
int policy      (string s, char p);



int main() {
    string  input;
    cin >> input;

    cout << policy(input, 'U') << endl;
    cout << policy(input, 'D') << endl;
    cout << no_policy(input) << endl;

    return(0);
}



int no_policy   (string s) {
    int c;

    c = 0;
    for (int i = 1; i < s.length(); i++)    if (s[i - 1] != s[i])   c++;

    return(c);
}

int policy      (string s, char p) {
    int     c;

    c = 0;

    if (s[1] != s[0])   c++;
    if (s[1] != p)      c++;
    for (int i = 2; i < s.length(); i++)    if(s[i] != p)           c+=2;

    return(c);
}
