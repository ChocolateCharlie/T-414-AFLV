#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
    int N, c, b_d, b_m;
    string  s;
    char    dash;
    int     calendar_like[12][31];
    string  calendar_name[12][31];
    vector<string>  name_list;

    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 31; j++)    { calendar_like[i][j] = -1; }
    }

    cin >> N;

    while (N--) {
        cin >> s >> c >> b_d >> dash >> b_m;

        if (calendar_like[b_m - 1][b_d - 1] < c) {
            calendar_like[b_m - 1][b_d - 1] = c;
            calendar_name[b_m - 1][b_d - 1] = s;
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 31; j++) {
            if (calendar_like[i][j] > -1)  { name_list.push_back(calendar_name[i][j]); }
        }
    }

    cout << name_list.size() << endl;
    sort(name_list.begin(), name_list.end());
    for (int i = 0; i < name_list.size(); i++) {
        cout << name_list[i] << endl;
    }

    return(0);
}
