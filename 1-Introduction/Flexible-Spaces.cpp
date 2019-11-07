#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



int main() {
    vector<int> configs;
    vector<int> walls;
    int     W;
    int     P;
    int     L;

    cin >> W >> P;
    configs.push_back(W);

    for (int i = 0; i < P; i++) {
        cin >> L;

        walls.push_back(L);
        configs.push_back(L);
        configs.push_back(W - L);
        for (int j = 0; j < i; j++) configs.push_back(L - walls[j]);
    }

    sort(configs.begin(), configs.end());
    configs.erase(unique(configs.begin(), configs.end()), configs.end());

    for (int i = 0; i < configs.size(); i++)    cout << configs[i] << " ";

    return(0);
}
