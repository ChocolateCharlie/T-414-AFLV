#include <iostream>
#include <map>
#include <string>

using namespace std;



int main() {
    int n;
    string  action, employee;
    map<string, bool>   employees_in;

    cin >> n;

    while (n--) {
        cin >> action >> employee;

        cout << employee << (action == "entry" ? " entered" : " exited");

        if (employees_in.count(employee) > 0) {
            if ((employees_in[employee] && action == "entry") || (!employees_in[employee] && action == "exit")) { cout << " (ANOMALY)"; }
        }
        else if (action == "exit")  { cout << " (ANOMALY)"; }

        cout << endl;
        employees_in[employee] = (action == "entry");
    }

    return(0);
}
