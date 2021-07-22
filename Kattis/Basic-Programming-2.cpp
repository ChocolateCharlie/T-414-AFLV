#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;



bool    action1(vector<int> &a) {
    unordered_set<int>  temp;

    for (int i = 0; i < a.size(); i++) {
        if (temp.count(7777 - a[i]))    { return(true); }
        temp.insert(a[i]);
    }

    return(false);
}



bool    action2(vector<int> &a) {
    sort(a.begin(), a.end());

    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == a[i + 1])   { return(false); }
    }

    return(true);
}



int action3(vector<int> & a) {
    unordered_map<int, int> nb_occur;

    for (int i = 0; i < a.size(); i++) {
        nb_occur[a[i]]++;
        if (nb_occur[a[i]] > (a.size() / 2))    { return(a[i]);}
    }

    return(-1);
}



int main() {
    int N, t;

    cin >> N >> t;

    vector<int> A(N);
    for (int i = 0; i < N; i++) { cin >> A[i]; }

    switch(t) {
        case 1:
            cout << (action1(A) ? "Yes" : "No") << endl;
            break;
        case 2:
            cout << (action2(A) ? "Unique" : "Contains duplicate") << endl;
            break;
        case 3:
            cout << action3(A) << endl;
            break;
        case 4:
            sort(A.begin(), A.end());
            if (A.size() % 2)   { cout << A[N / 2] << endl; }
            else                { cout << A[(N - 1) / 2] << " " << A[N / 2] << endl; }
            break;
        case 5:
            sort(A.begin(), A.end());
            for (int i = 0; i < A.size(); i++) {
                if (A[i] > 99 && A[i] < 1000)   { cout << A[i] << " "; }
            }
            cout << endl;
            break;
    }

    return(0);
}
