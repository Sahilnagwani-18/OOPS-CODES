// Experiment 5: Assume that a publishing company markets prints books and digital books (electronicform – CD’).
// Create a class named Publication with data members named title, price, and author’s name.
// From Publication class, derive two classes named Book and Ebook. 
//The Book class adds a page count data member named pcount while Ebook adds data member playing time name ptime. 
//Each of these classes must have member function getDatd() to read class specific data from keyboard and displayData() to output the class specific data to the computer screen. Write a program to test these classes.

#include<iostream>
using namespace std;

class Publication{
    public:
    string title;
    int price;
    string author;
};

class Book:public Publication{
    public:
    int pcount;

    void getData(){
        cout<<"Enter book title: ";
        cin>>title;
        cout<<"Enter book price: ";
        cin>>price;
        cout<<"Enter book author: ";
        cin>>author;
        cout<<"Enter number of pages: ";
        cin>>pcount;
    }

    void displayData(){
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Number of pages: "<<pcount<<endl;
    }
};
class Ebook:public Publication{
    public:
    int ptime;

     void getData(){
        cout<<"Enter book title: ";
        cin>>title;
        cout<<"Enter book price: ";
        cin>>price;
        cout<<"Enter book author: ";
        cin>>author;
        cout<<"Read time  of pages: : ";
        cin>>ptime;
    }

    void displayData(){
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Read time  of pages: "<<ptime<<endl;
    }
};

int main(){

    Book b;
    b.getData();
    b.displayData();

    Ebook e;
    e.getData();
    e.displayData();


}