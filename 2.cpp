#include<bits/stdc++.h>
using namespace std;

int main() {

    int marks[4] = {23, 45, 56, 89};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    marks[2] = 60;              // value changed
    cout<<marks[2]<<endl;

    for(int i = 0; i < 4; i++){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    int* p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;

    return 0;
}   