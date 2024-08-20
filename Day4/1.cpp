#include<iostream>
using namespace std;

// An employer plane to pay a bonus to employees. A bonus of 10% is to be paid to employees with earning
// at least Rs. 2000/- of the earning to others. The input contains name and earning of an employee and the
// desired output is name and bonus to be paid to the employee.
// Create a class to represent an employee. It should incluse the following:
//  Data Members:
//  Name
//  Earning
//  Bonus
//  Member Functions:
//  To input data
//  To compute bonus
//  To output the desired information
// Using this class, write a program to accomplish the intended task
class Employee{
    private:
    string name;
    int earnings;
    int bonus;
    int  computeBonus(){
        if(earnings>=2000){
            bonus=.10*earnings;
            return bonus;
        }
        else{
            return 0;
        }
    }
    public:
    void getData(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Earnings:";
        cin>>earnings;   
    }
    
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Bonus:"<<computeBonus()<<endl;
    }

};
int main(){

    Employee emp;
    emp.getData();
    
    emp.display();


    return 0;
}