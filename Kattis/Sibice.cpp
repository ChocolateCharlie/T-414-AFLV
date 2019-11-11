#include <cmath>
#include <iostream>

using namespace std;



int main() {
    int     N;
    int     W, H;
    int     l;

    cin >> N >> W >> H;

    while (N--) {
        cin >> l;
        cout << (l <= sqrt((double)(W * W + H * H)) ? "DA" : "NE") << endl;
    }

    return(0);
}
