// Experiment 4. Create a class to represent a bank account. It should include the following:
//  Data Members:
//  Name of account holder
//  Account number
//  Type of account
//  Balance amount
//  Member Function:
//  To initialize the data members with appropriate data
//  To deposit an amount
// To withdraw an amount after checking the balance
// To display details of account holder
// Write a program to use this class.

#include<iostream>
using namespace std;

class Bank
{
    private:
    string name;
    string accountType;
    int accountNumber;
    int initialBalance;
    int curraBalance;
    int password;
    
    public:
    const string BankName="SBI";
    void getAccountDetails(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter account type:(Saving OR Current )";
        cin>>accountType;
        cout<<"Enter account number:";
        cin>>accountNumber;
        cout<<"Enter Initialbalance:";
        cin>>initialBalance;
        curraBalance=initialBalance;
        cout<<"Set password:";
        cin>>password;
    }
    void withdraw(int amount){
        int pass;
        cout<<" Enter Your 4 Digit Pin:";
        cin>>pass;
        if(password==pass){
            cout<<"Your Query is Working:"<<endl;
            if(amount<0){
            cout<<"Invalid amount";
        }
        else if(amount>curraBalance){
            cout<<"Insufficient balance";
            cout<<"Do You want to know the current balance? 1/Y or 0/N"<<endl;
            int choice;
            cin>>choice;
            if(choice==1){
                cout<<curraBalance;
            }
        }
        else{
            curraBalance-=amount;
            cout<<"Withdrawal Successful!!"<<endl;
            
            cout<<"Your current balance is:"<<curraBalance<<endl;
        }


        }
        else{
            cout<<"Password is Incorrect!!"<<endl;
        }
   
    }
    void deposit(int amount){
        int pass;
        cout<<"Enter Your 4 Digit Pin:";
        cin>>pass;
        if(password==pass){
            cout<<"Your Query is Working:"<<endl;
            if(amount<0){
            cout<<"Invalid amount";
        }
        if(amount>0){
            curraBalance+=amount;
            cout<<"Deposit Successful!!"<<endl;
            cout<<"Your current balance is:"<<curraBalance<<endl;
        }
        else{
            cout<<"Invalid amount";
        }
        }
        else{
            cout<<"Password is Incorrect!!"<<endl;
        }
    }


    void ask_task(){
        cout<<BankName<<endl;
        cout<<"Welcome to our Banking System."<<endl;
        cout<<"Your Account Type is:"<<accountType<<endl;
        int choice;
        cout<<"Enter choice: \n1.Deposit \n2.Current Balance: \n3.WithDraw: \n4.Exit\n ::->->";
        cin>>choice;
         cout<<"----------------------------------------------------------------"<<endl;

        while(choice !=4){
            switch(choice){
                case 1:
                    int depo;
                    cout<<"Enter How much amount You Wanted to deposit:";
                    cin>>depo;
                    deposit(depo);
                     cout<<"----------------------------------------------------------------"<<endl;
                    break;
                case 2:
                    cout<<"Your current balance is:"<<curraBalance<<endl;
                     cout<<"----------------------------------------------------------------"<<endl;
                    break;
                case 3:
                    int withd;
                    cout<<"Enter How much amount You Wanted to Withdraw:";

                    cin>>withd;
                    withdraw(withd);
                     cout<<"----------------------------------------------------------------"<<endl;
                    break;
                case 4:
                    cout<<"Exiting...";
                     cout<<"----------------------------------------------------------------"<<endl;
                    break;
                default:
                    cout<<"Invalid choice. Please try again.";
                     cout<<"----------------------------------------------------------------"<<endl;
            }
            cout<<"\nEnter choice: \n1.Deposit \n2. Current Balance: \n3. Withdraw: \n4. Exit";
            cin>>choice;
           
        }
        cout<<"----------------------------------------------------------------"<<endl;
    }


};


int main(){

    Bank acc1;
    acc1.getAccountDetails();

    acc1.ask_task();



   

}