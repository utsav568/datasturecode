#include <iostream>
#include <stack>
using namespace std;

void decimalToHex(int n) {
    stack<char> s;

    while (n > 0) {
        int rem = n % 16;

        if (rem < 10)
            s.push(rem + '0');
        else
            s.push(rem - 10 + 'A');

        n /= 16;
    }

    cout << "Hexadecimal: ";
    while (!s.empty()) {
        
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    int num;

    cout << "Enter decimal number: ";
    cin >> num;

    if (num == 0)
        cout << "Hexadecimal: 0";
    else
        decimalToHex(num);

    return 0;
}