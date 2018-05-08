#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long double n;
        cin >> n;
        cout << (long long int) ( fmod((fmod(n, 1000000007) * fmod(n, 1000000007)), 1000000007)  ) << endl;
    }

    return 0;
}
