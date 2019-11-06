#include <iostream>

using namespace std;

bool    is_Mandelbrot(double x, double y, int r);



int main() {
    double  x;
    double  y;
    int     r;
    int     i;

    i = 0;

    while (cin >> x >> y >> r) {
        cout << "Case " << ++i << ": ";
        cout << (is_Mandelbrot(x, y, r) ? "IN" : "OUT") << endl;
    }

    return(0);
}



bool    is_Mandelbrot(double x, double y, int r) {
    double  z_r;
    double  z_i;
    double  zr_copy;
    bool    ans;

    ans = true;
    z_r = 0.0;
    z_i = 0.0;

    while(ans && r--) {
        zr_copy = z_r;
        z_r = z_r * z_r - z_i * z_i + x;
        z_i = 2.0 * zr_copy * z_i + y;

        if (z_r * z_r + z_i * z_i > 4.0)    ans = false;
    }

    return(ans);
}
