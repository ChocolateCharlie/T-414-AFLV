#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
    int N, G;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> G;

        vector<string>  g(G);
        for (int j = 0; j < G; j++) cin >> g[j];
        sort(g.begin(), g.end());

        string  ans;
        ans = "";

        for (int j = 0; j < g.size() && ans == ""; j++) {
            if (!((j > 0 && g[j - 1] == g[j]) || (j < g.size() - 1 && g[j + 1] == g[j])))
                ans = g[j];
        }

        cout << "Case #" << i + 1 << ": " << ans << endl;
    }

    return(0);
}
