// BEAUTIFY VECTOR : 

// #include <bits/stdc++.h>
// using namespace std;
// void beautify(vector <string> &v){
//   vector <string> result;
//   result.push_back("#");
//   for(int i =0;i<v.size();i++){
//     result.push_back(v[i]);
//     result.push_back("#");
//   }
//   v=result;
// }





// FIND CUMILATIVE SUM : 

// #include <bits/stdc++.h>
// using namespace std;
// void cumulative(vector<int> &v)
// {
//     /*if (v.empty())
//     {
//         return;
//     }*/
//     int sum = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         sum += v[i];
//        	v[i]=sum;
//     }
// }





// FIND MEAN : 

// Write the mean() function as specified above
// #include <bits/stdc++.h>
// using namespace std;
// double mean(vector<double> &v)
// {
//   	if (v.empty()){
//       return 0.0;
//     }
//     double sum = 0.0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         sum += v[i];
//     }
//     return sum / v.size();
// }






// COUNT IN RANGE FROM A VECTOR : 

// #include <iostream>
// #include <vector>
// int countInRange(const std::vector<int>& v, int min, int max) {
//     int count = 0;
//     for (int num : v) {
//         if (num >= min && num <= max) {
//             ++count;
//         }
//     }
//     return count;
// }  






// SPLIT THE VECTOR IN TWO :

// #include <iostream>
// #include <vector>
// void split(std::vector<int>& v) {
//     std::vector<int> result;
//     for (int num : v) {
//         if (num % 2 == 0) {
//             int half = num / 2;
//             result.push_back(half);
//             result.push_back(half);
//         } else {
//             int first = num / 2 + 1;
//             int second = num / 2;
//             result.push_back(first);
//             result.push_back(second);
//         }
//     }
//     v = result;
// }






// REMOVE DUPLICATE FROM A VECTOR : 

// #include <vector>
// #include <unordered_set>
// void removeDuplicates(std::vector<int>& v) {
//     std::unordered_set<int> seen;
//     std::vector<int> result;
//     for (int num : v) {
//         if (seen.count(num) == 0) {
//             seen.insert(num);
//             result.push_back(num);
//         }
//     }
//     v = std::move(result);
// }






// CHECK FOR BALANCED PARANTHESES : 

// #include <string>
// #include <stack>
// int balancedString(const std::string& s) {
//     std::stack<char> st;
//     for (int i = 0; i < s.size(); ++i) {
//         char c = s[i];
//         if (c == '(' || c == '{') {
//             st.push(c);
//         } else if (c == ')' || c == '}') {
//             if (st.empty()) {
//                 return i; 
//             }
//             char top = st.top();
//             st.pop();
//             if ((c == ')' && top != '(') || (c == '}' && top != '{')) {
//                 return i; 
//             }
//         }
//     }
//     if (!st.empty()) {
//         return s.size(); 
//     }
//     return -1; 
// }






// REMOVE DUPLICATES :

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    // Take the number of elements as input
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);

    // Take the elements of the vector as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    // Sort the vector
    sort(vec.begin(), vec.end());

    // Remove duplicates using std::unique
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    // Output the result
    cout << "Sorted vector without duplicates: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}







// number is happy or not :

#include <iostream>
#include <unordered_set>
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    std::unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = sumOfSquares(n);
    }
    return n == 1;
}