// INHERITENCE:  

#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    int price;

public:
    Publication(string t, int p) : title(t), price(p) {}

    virtual void putdata() const = 0; // Pure virtual function
};

class Book : public Publication {
private:
    int pages;
    string author;

public:
    Book(string t, int p, int pg, string a) : Publication(t, p), pages(pg), author(a) {}

    void putdata() const override {
        cout << "Book Title \"" << title << "\", written by \"" << author
             << "\" has " << pages << " pages and costs " << price << " rupees." << endl;
    }
};

class CD : public Publication {
private:
    int playingTime;

public:
    CD(string t, int p, int pt) : Publication(t, p), playingTime(pt) {}

    void putdata() const override {
        cout << "CD Title \"" << title << "\", is of " << playingTime
             << " minutes length and costs " << price << " rupees." << endl;
    }
};

int main() {
    Book book("C++ Programming", 500, 300, "John Doe");
    CD cd("Classical Music", 300, 60);

    book.putdata();
    cd.putdata();

    return 0;
}
