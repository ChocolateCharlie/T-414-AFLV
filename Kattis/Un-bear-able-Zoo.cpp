#include <bits/stdc++.h>
#include <ctype.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;



int main() {
    int     list_count;
    int     number_animals;
    string  full_name, specie_name;

    list_count = 1;
    cin >> number_animals;

    while (number_animals != 0) {
        map<string, int>    animal_list;
        vector<string>      list_keys;

        for (int i = 0; i <= number_animals; i++) {
            getline(cin, full_name);

            int j = full_name.length() - 1;
            while (full_name[j] != ' ' && j > -1) {
                full_name[j] = tolower(full_name[j]);
                specie_name = full_name[j] + specie_name;
                j--;
            }

            if (animal_list.count(specie_name) > 0) { animal_list[specie_name]++; }
            else {
                animal_list[specie_name] = 1;
                list_keys.push_back(specie_name);
            }

            specie_name = "";
        }

        sort(list_keys.begin(), list_keys.end(), [](const string &a, const string &b) -> bool { return(a < b); });

        cout << "List " << list_count << ":" << endl;
        for (int i = 1; i < list_keys.size(); i++) {
            cout << list_keys[i] << " | " << animal_list[list_keys[i]] << endl;
        }

        cin >> number_animals;
        list_count++;
    }

    return(0);
}
