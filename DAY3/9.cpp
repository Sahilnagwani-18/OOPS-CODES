#include<iostream>
using namespace std;

class Book{
    private:
    string bookName;
    int *amount;
    int size;

    public:
    Book(string bookName,int size){
        this->bookName=bookName;
        this->size=size;
        amount=new int[size];
    }

    void getBookAmount(){
        for(int i=0;i<size;i++){
            cin>>amount[i];
        }
    }


};


int main(){

}