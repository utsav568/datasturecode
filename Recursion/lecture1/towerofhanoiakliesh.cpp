#include <iostream>
using namespace std;

void hanoi(int n, char s, char m, char d) {

    if (n == 1) {
        cout << s << " -> " << d << endl;
    }
    else {
        hanoi(n - 1, s, d, m);

        cout << s << " -> " << d << endl;

        hanoi(n - 1, m, s, d);
    }
}

int main() {

    int n;
    cout << "Enter the value: ";
    cin >> n;

    hanoi(n, 's', 'm', 'd');

    return 0;
}