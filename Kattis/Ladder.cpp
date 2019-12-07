#include <cmath>
#include <iostream>
#define PI  3.14159265

using namespace std;



int main() {
    double  h, v;

    cin >> h >> v;

    cout << ceil(h / sin(v * PI / 180.0));

    return(0);
}
