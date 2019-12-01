#include <iostream>
#include <string>

using namespace std;



int main() {
    string  name;

    cin >> name;

    cout << name[0];
    for (int i = 1; i < name.length(); i++) {
        if (name[i] != name[i - 1]) cout << name[i];
    }

    return(0);
}
