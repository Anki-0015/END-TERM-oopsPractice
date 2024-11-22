#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}






#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Sum of numbers: " << sum << endl;
    return 0;
}






#include <iostream>
using namespace std;

void displayString(string str) {
    cout << "The string is: " << str << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, input);
    displayString(input);
    return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "The " << k << "th largest number is " << numbers[k - 1] << endl;
    return 0;
}





#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    cout << "Area of rectangle: " << rect.area() << endl;
    return 0;
}






#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPalindrome(string word) {
    string reversed = word;
    reverse(reversed.begin(), reversed.end());
    return word == reversed;
}

int main() {
    string sentence, word;
    cout << "Enter a sentence: ";
    cin.ignore();
    getline(cin, sentence);

    stringstream ss(sentence);
    int count = 0;

    while (ss >> word) {
        if (isPalindrome(word))
            count++;
    }

    cout << "Number of palindrome words: " << count << endl;
    return 0;
}






#include <iostream>
#include <sstream>
using namespace std;

string capitalize(string sentence) {
    stringstream ss(sentence), result;
    string word;

    while (ss >> word) {
        word[0] = toupper(word[0]);
        result << word << " ";
    }
    return result.str();
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    cin.ignore();
    getline(cin, sentence);

    cout << "Capitalized sentence: " << capitalize(sentence) << endl;
    return 0;
}
