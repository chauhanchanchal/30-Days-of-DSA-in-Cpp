

    #include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:";
    cin >> n;

    int original = n;
    int reverse = 0;

    for (; n > 0; n = n / 10) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    if (reverse == original)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
