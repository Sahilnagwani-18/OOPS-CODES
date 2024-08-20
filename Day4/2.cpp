// Experiment 2. The monthly telephone bill is to be computed as follows:
//  Minimum Rs. 200 for upto 100 calls
//  Plus Rs. 0.60 per call for next 50 calls
//  Plus Rs. 0.50 per call for next 50 calls
//  Plus Rs. 0.40 per call for any call beyond 200 calls.
// The input contains name of the customer and number of calls made and the desired output is the name
// and telephone bill to be paid by the customer.
// Create a class to represent an employee. It should include the following:
//  Data Members:
//  Name
//  Number of calls
//  Bill amount
//  Member Functions:
//  To input data
//  To compute bill
//  To output the desired information
// Using this class, write a program to accomplish the intended task



#include <iostream>
#include <string>
using namespace std;

// Class to represent an Employee
class Employee {
public:
    string name;
    int numCalls;
    double bill;

    // Function to input data for the employee
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number of calls: ";
        cin >> numCalls;
    }

    // Function to calculate the telephone bill
    double calculate() {
        if (numCalls <= 100) {
            bill = 200;
        } else if (numCalls <= 150) {
            bill = 200 + (numCalls - 100) * 0.60;
        } else if (numCalls <= 200) {
            bill = 200 + 50 * 0.60 + (numCalls - 150) * 0.50;
        } else {
            bill = 200 + 50 * 0.60 + 50 * 0.50 + (numCalls - 200) * 0.40;
        }
        return bill;
    }

    // Function to output the employee information and bill amount
    void outputInfo() {
        cout << "Name: " << name << endl;
        cout << "Bill: " << bill << endl;
    }
};

int main() {
    Employee emp1;
    
    // Input data for the employee
    emp1.inputData();
    
    // Calculate the bill
    emp1.calculate();
    
    // Output the employee information and bill amount
    emp1.outputInfo();
    
    return 0;
}