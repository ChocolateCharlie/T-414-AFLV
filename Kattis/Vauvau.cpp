#include <iostream>

using namespace std;



void    dogs_mood(int A, int B, int C, int D, int m) {
    bool    dog1, dog2;
    int m_copy;

    m_copy = m;

    if (m > (A + B))    { m %= (A + B); }
    dog1 = (m <= A && m > 0 ? true : false);

    m = m_copy;

    if (m > (C + D))    { m %= (C + D); }
    dog2 = (m <= C && m > 0 ? true : false);

    cout << (dog1 ? (dog2 ? "both" : "one") : (dog2 ? "one" : "none")) << endl;
}

int main() {
    int A, B, C, D;
    int P, M, G;

    cin >> A >> B >> C >> D >> P >> M >> G;

    dogs_mood(A, B, C, D, P);
    dogs_mood(A, B, C, D, M);
    dogs_mood(A, B, C, D, G);

    return(0);
}
