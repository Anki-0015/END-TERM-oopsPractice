#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout<<"enter a string "<<endl;
    getline(cin, str);

    // cout<<"a"-"A" <<endl;

    // for(int i =0; i<str.size(); i++){
    //     if(str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] -=32;
    //     }
    // }
    // cout<<str;

    for(char &c : str){
        // c = toupper(c);
        c = tolower(c);
    }

    cout<<str<<endl;

    return 0;
}