#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
    vector<string>  words;
    vector<string>  dup;
    vector<string>::iterator    it;
    string  s;

    while (cin >> s)    words.push_back(s);

    dup = words;
    sort(dup.begin(), dup.end());
    it = unique(dup.begin(), dup.end());
    dup.resize(distance(dup.begin(), it));

    cout << (words.size() == dup.size() ? "yes" : "no");

    return(0);
}
