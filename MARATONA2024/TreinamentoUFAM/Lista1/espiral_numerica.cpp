#include <iostream>
#include <cmath>

using namespace std;

long long findNumberInSpiral(long long e, long long x) {
    if (e == 1) return 1;
    
    long long layer = ceil(sqrt(e));
    long long base = (layer - 1) * (layer - 1) + 1;
    long long sideLength = layer * 2 - 1;
    long long positionInLayer = e - base;
    long long side = positionInLayer / (layer - 1);
    long long remainder = positionInLayer % (layer - 1);
    long long row, col;

    switch(side) {
        case 0:
            row = layer - 1;
            col = remainder;
            break;
        case 1:
            row = sideLength - remainder - 1;
            col = layer - 1;
            break;
        case 2:
            row = sideLength - layer + 1;
            col = sideLength - remainder - 1;
            break;
        case 3:
            row = remainder;
            col = layer - 1;
            break;
    }

    return base + abs(row - (layer - 1)) + abs(col - (layer - 1));
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long e, x;
        cin >> e >> x;
        cout << findNumberInSpiral(e, x) << endl;
    }

    return 0;
}
