#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string>  g_days = {
    "Thursday", "Friday", "Saturday",
    "Sunday", "Monday", "Tuesday", "Wednesday" };
vector<int> g_months = {
    31, 28, 31, 30,
    31, 30, 31, 31,
    30, 31, 30, 31 };



int main() {
    int D, M;

    cin >> D >> M;

    for (int i = 0; i < M - 1; i++) D += g_months[i];
    cout << g_days[(D - 1) % 7];

    return(0);
}
