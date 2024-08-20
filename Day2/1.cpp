#include<iostream>
using namespace std;

//DE

const int minerPrice=1500;
const int toasterPrice=200;
const int fanPrice=450;
const double minerDiscount=0.05;
const double toasterDiscount=.1;
const double fanDiscount=.15;
const double salesTax=.1;



 

class Order{
    public:
    int n;
    int m;
    int p;
  

    Order(int n,int m,int p){
        this->n=n;
        this->m=m;
        this->p=p;
    }

};

inline double calculateBill(Order* &order){
    int n=order->n;
    int m=order->m;
    int p=order->p;
     
     double cost=0;


       double costMiners = n * minerPrice - (n * minerPrice * minerDiscount);
        
        // Cost calculation for toasters after 10% discount
        double costToasters = m * toasterPrice - (m * toasterPrice * toasterDiscount);
        
        // Cost calculation for fans after 15% discount
        double costFans = p * fanPrice - (p * fanPrice * fanDiscount);
        
        // Total cost before tax
        cost = costMiners + costToasters + costFans;
        
        // Adding 10% sales tax to the total cost
        cost += cost * salesTax;

        return cost;


}

int main(){

    int n,m,p;
    cout<<"Enter order no. of miners,toasters,fans:";
    cin>>n>>m>>p;
    cout<<endl;

    Order* order=new Order(n,m,p);

   double bill= calculateBill(order);
   cout<<"Your Total Cost of Bill:"<<bill<<endl;









}