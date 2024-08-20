#include<iostream>
using namespace std;

class Student{
    private:
    int admno;
    string name;
    float marksEng;
    float marksMaths;
    float marksSci;
    float marksTotal;
    float compute(){
        float sum=marksMaths+marksSci+marksEng;
        marksTotal=sum;
        return sum;
    }
    public:
    void readData();
    void showData();


};

void Student::readData(){
    cout<<"Enter admission Number:";
    cin>>admno;
    cout<<"Enter marksEng:";
    cin>>marksEng;
    cout<<"Enter marksMaths:";
    cin>>marksMaths;
    cout<<"Enter marksSci:";
    cin>>marksSci;
    cout<<"Enter name:";
    cin>>name;
    

}

void Student::showData(){
    cout<<"Student name:"<<name<<endl;
    cout<<"Entered admission Number:"<<admno<<endl;
    
    cout<<"Entered marksEng:"<<marksEng<<endl;
    
    cout<<"Entered marksMaths:"<<marksMaths<<endl;
    
    cout<<"Entered marksSci:"<<marksSci<<endl;
    float total=compute();
    cout<<"Total marks"<<total;
   

}



int main(){
    Student s1;
    s1.readData();
    s1.showData();


}