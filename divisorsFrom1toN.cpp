#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int d[N];

int main() {
    for (int i = 1; i < N; ++i) {
        for (int j = i; j < N; j += i) {
            d[j]++;
        }
    }
}
