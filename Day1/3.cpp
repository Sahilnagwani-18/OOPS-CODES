// Experiment 3: Assume that a publishing company markets prints books and digital books (electronic form –
// CD’). Create a structure named Publication with data members named title, price, and author’s name. From
// the Publication structure, derive two structures named Book and Ebook. The Book structure adds a page
// count data member named count, while the Ebook adds data member playing time name time. Each of these
// structures must have a member function getDatd() to read structure-specific data from the keyboard and
// display data () to output the structure-specific data to the computer screen. Write a program to test these
// classes.
#include <iostream>
#include <string>
using namespace std;

// Structure to hold publication details
struct Publication {
    string title;
    double price;
    string author;

    // Function to get data for publication
    void getData() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter author: ";
        cin.ignore();
        getline(cin, author);
    }

    // Function to display data for publication
    void displayData() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
    }
};

// Derived structure for Book
struct Book : public Publication {
    int count;

    // Function to get data for book
    void getData() {
        Publication::getData();
        cout << "Enter book count: ";
        cin >> count;
    }

    // Function to display data for book
    void displayData() const {
        Publication::displayData();
        cout << "Book Count: " << count << endl;
    }
};

// Derived structure for Ebook
struct Ebook : public Publication {
    double playingTime;

    // Function to get data for ebook
    void getData() {
        Publication::getData();
        cout << "Enter ebook playing time: ";
        cin >> playingTime;
    }

    // Function to display data for ebook
    void displayData() const {
        Publication::displayData();
        cout << "Ebook Playing Time: " << playingTime << " hours" << endl;
    }
};

int main() {
    // Book data input and display
    Book book;
    cout << "Enter details for the book:\n";
    book.getData();
    cout << "\nBook details:\n";
    book.displayData();

    // Ebook data input and display
    Ebook ebook;
    cout << "\nEnter details for the ebook:\n";
    ebook.getData();
    cout << "\nEbook details:\n";
    ebook.displayData();

    return 0;
}
