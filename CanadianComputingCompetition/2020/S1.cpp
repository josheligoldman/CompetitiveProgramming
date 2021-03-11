#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;

    cin >> N;

    cout << N;

    int obs[N][2];

    for (int i = 0; i < N; i++) {
        int time, location;
        cin >> time >> location;

        obs[i][0] = time;
        obs[i][1] = location;
    }

    return 0;
}