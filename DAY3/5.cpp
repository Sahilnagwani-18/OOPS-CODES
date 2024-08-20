#include<iostream>
using namespace std;

class Number{
    private:
    double value1;
    double value2;

    public:
    void getvalue(int val1,int val2){
        value1=val1;
        value2=val2;
    }
    double getval1(){
        return value1;
    }
    double getval2(){
        return value2;
    }

    void add(Number num){
        value1 = num.getval1();
        value2 = num.getval2();
        cout<<"sum is:"<<value1+value2<<endl;

    }

    void substract(Number* num){
        value1 = num->getval1();
        value2 = num->getval2();
        cout<<"Diff is :"<<value1-value2<<endl;

    }
    void Multiply(Number &num){
        value1 = num.getval1();
        value2 = num.getval2();
        cout<<"Product is:"<<value1*value2<<endl;

    }

};


int main(){
    Number num1,num2;
    num1.getvalue(5,10);
    int numb1,numb2;
    cout<<"Add Numbers:";
    cin>>numb1>>numb2;
    num2.getvalue(numb1,numb2);

    num1.add(num2);
    num1.substract(&num2);
    num1.Multiply(num2);

    return 0;

}