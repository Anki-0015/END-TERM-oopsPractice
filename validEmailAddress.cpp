#include <iostream>
#include <string>

using namespace std;

bool isValidEmail(string email) {
    bool hasAt = false;
    bool hasDot = false;

    for (char c : email) {
        if (c == '@') {
            hasAt = true;
        } else if (c == '.') {
            hasDot = true;
        }
    }

    if (!hasAt || !hasDot) {
        return false;
    }

    return true;
}

int main() {
    string email;
    cout << "Enter an email-id: ";
    getline(cin, email);

    if (isValidEmail(email)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}









