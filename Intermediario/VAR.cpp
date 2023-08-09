#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X;
    cin >> Y;

    if(-8 <= X && X <= 8 && 0 <= Y && Y <= 8){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}

