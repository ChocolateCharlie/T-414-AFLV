#include <iostream>
#define THICK   4

using namespace std;



int main() {
    int     n;
    int     h;
    int     v;

    cin >> n >> h >> v;
    cout << (h > n - h ? h : n - h) * (v > n - v ? v : n - v) * THICK;

    return(0);
}
