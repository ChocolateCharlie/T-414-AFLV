#include <iomanip>
#include <iostream>

using namespace std;



int main() {
    int     c_h, c_m, c_s;
    int     w_h, w_m, w_s;
    int     t_h, t_m, t_s;
    char    c;

    t_h = 0;
    t_m = 0;
    t_s = 0;
    cin >> c_h >> c >> c_m >> c >> c_s;
    cin >> w_h >> c >> w_m >> c >> w_s;

    if (w_s < c_s) {
        t_s += 60;
        w_m--;
    }
    t_s += (w_s - c_s);

    if(w_m < c_m) {
        t_m += 60;
        w_h--;
    }
    t_m += (w_m - c_m);

    if (w_h < c_h)  t_h += 24;
    t_h += (w_h - c_h);

    if(t_h + t_m + t_s == 0)    t_h = 24;

    cout << setfill('0') << setw(2) << t_h << ":";
    cout << setfill('0') << setw(2) << t_m << ":";
    cout << setfill('0') << setw(2) << t_s << endl;

    return(0);
}
