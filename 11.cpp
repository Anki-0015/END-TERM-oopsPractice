// #include<bits/stdc++.h>
// using namespace std;

// string compressString(const string &str) {
//     string compressed = "";
//     int count = 1;

//     for (size_t i = 0; i < str.length(); ++i) {
//         if (i < str.length() - 1 && str[i] == str[i + 1]) {
//             count++;
//         } else {
//             compressed += str[i];
//             if (count > 1) {
//                 compressed += to_string(count);
//             }
//             count = 1;
//         }
//     }

//     return compressed;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     string result = compressString(input);
//     cout << "Compressed string: " << result << endl;

//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;

class fruit{
public:
    string name;
    string color;
};

int main(){

      fruit apple;
      apple.name = "Apple";
      apple.color = "Red";
      cout<<apple.name<<" - "<<apple.color<<endl;
      
      fruit *mango = new fruit();
      mango->name = "Mango";
      mango->color = "yellow";

    return 0;
}