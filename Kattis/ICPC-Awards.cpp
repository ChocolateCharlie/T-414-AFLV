#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;



int main() {
    int N, prizes;
    string  u_name, team;
    unordered_set<string>   universities;

    prizes = 12;
    cin >> N;

    while (N--) {
        cin >> u_name >> team;

        unordered_set<string>::const_iterator it = universities.find(u_name);
        if (it == universities.end() && prizes) {
            cout << u_name << " " << team << endl;
            universities.emplace(u_name);
            prizes--;
        }
    }

    return(0);
}
