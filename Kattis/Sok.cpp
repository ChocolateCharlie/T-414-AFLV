#include <iostream>
#include <vector>

using namespace std;



int main() {
    int less_id;
    float base;
    vector<float> liters(3);
    vector<float> ratios(3);

    for (int i = 0; i < 3; i++) { cin >> liters[i]; }
    for (int i = 0; i < 3; i++) { cin >> ratios[i]; }

    less_id = 0;
    base = liters[0] / ratios[0];
    for (int i = 1; i < 3; i++) {
        if (liters[i] / ratios[i] < base) {
            base = liters[i] / ratios[i];
            less_id = i;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << liters[i] - (ratios[i] * liters[less_id] / ratios[less_id]) << " ";
    }

    return(0);
}
