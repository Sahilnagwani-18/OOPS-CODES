#include<iostream>
using namespace std;

class Data{
    private:
    int day;
    int month;
    int year;

    public:
    Data(){
        this->day=12;
        this->month=3;
        this->year=1993;
        cout<<"Default constructor called"<<endl;
    }
    Data(int x,int day=12,int month=10,int year=2000){
        cout<<"parametrzed constructor called"<<endl;
        this->day=day;
        this->month=month;
        this->year=year;
    }
    Data(Data* p1){
        cout<<"Copy constructor called"<<endl;
        this->day=p1->day;
        this->month=p1->month;
        this->year=p1->year;

    }
};



int main(){
    Data*d1=new Data();
    Data*d2=new Data(5,15,6,1976);
    Data*d3=new Data(d1);

   

}