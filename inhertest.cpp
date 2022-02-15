#include<iostream>
#include<string>

using namespace std;

class Book {
    protected:
        string title, author;
    
    public:
        Book(string t, string a) {
            title=t;
            author=a;
        }
        virtual void display()=0;
};

class MyBook : Book {
    public:
        int price;
        MyBook(string t, string a, int price) : Book(t, a), price(price) {

        }

        void display() {
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price;
        }
};

int main() {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin>>price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}