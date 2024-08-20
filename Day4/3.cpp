// Experiment 3. Income tax for individuals is computed on slab rates as follows:
// Income Tax Payable
// Upto Rs. 1,00,000/- Nill
// From Rs. 1,00,001/- to Rs. 1,50,000/- 10% of the excess over Rs. 1,00,000/-
// From Rs. 1,50,001/- to Rs. 200,000/- 20% of the excess over Rs. 1,50,000/-
// Above Rs. 2,00,000/- 30% of the excess over Rs. 2,00,000/-
// The input contains name of the individual and income and the desired output is the name of the
// individual and amount of tax to be paid by the individual.
// Create a class to represent an employee. It include the following:
//  Data Members:
//  Name
//  Income
//  Tax due
//  Member Functions:
//  To input data
//  To compute tax
//  To output the desired information

#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    long long income;
    double taxDue;

    public:
    void takeInput(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter income:";
        cin>>income;
    }

    double tax(){
        taxDue=0;

        if(income<=100000){
            taxDue=0;
        }
        else if(income>100000 && income<=150000){
            taxDue=0.1*(income-100000);
        }
        else if(income>150000 && income <=200000){
            taxDue=.2*(income-150000);
        }
        else{
            taxDue=.3*(income-200000);
        }
         return taxDue;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Income:"<<income<<endl;
        cout<<"Tax payable:"<<tax()<<endl;
    }
   


};

int main(){
    Employee emp;
    emp.takeInput();
    emp.display();

}