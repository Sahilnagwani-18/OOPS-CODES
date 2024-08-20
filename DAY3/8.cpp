#include<iostream>
using namespace std;

class Bank
{
    private:
    string name;
    int accountNumber;
    int initialBalance;
    int curraBalance;
    int password;
    
    public:
    const string BankName="SBI";
    void getAccountDetails(){
        cout<<"Enter name:";
        cin>>name;
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


};


int main(){

    Bank acc1;
    acc1.getAccountDetails();
    int depo;
    cout<<"Enter How much amount You Wanted to deposite:";
    cin>>depo;
    acc1.deposit(depo);
    int withd;
    cout<<"Enter How much amount You Wanted to WithDraw:";
    cin>>withd;

    acc1.withdraw(withd);

}