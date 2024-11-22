#include<bits/stdc++.h>
using namespace std;

class Hero{

    // properites

    // public:

    private:

    int health;

    // private:

    public:

    char level;

    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    Hero(int health){
        this -> health = health;
    }

    void print(){
        cout<< level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h    ){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    

    // cout<<"Hi"<<endl;
    // Hero ramesh;
    // cout<<"Hello"<<endl;
      
    // Hero ramesh;

    // cout<< "Ramesh health is : "<<ramesh.getHealth()<< endl;
    // // use setter
    // ramesh.setHealth(70);
    // // ramesh.health = 70;
    // ramesh.level = 'A';

    // cout<< "health is : "<<ramesh.getHealth()<< endl;   
    // cout<< "level is : "<<ramesh.level<< endl;

    // static 

    // Hero a;

    // dynamically

    // Hero *b = new Hero;

    return 0;
}


