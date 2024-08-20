#include<iostream>
using namespace std;

class SchoolStudent{
    private:
    string name;
    int marks;

    public:
   
    void getData(){
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter marks of student:";
        cin>>marks; 
    }
    int getmarks(){
        return marks;
    }
    string getName(){
        return name;
    }

};


int main(){

    int numOfstudent;
    cout<<"Enter Number of Student:"<<endl;
    cin>>numOfstudent;

    SchoolStudent st[numOfstudent];
    string ans="";
    int maxMarks=-100;

    for(int i=0;i<numOfstudent;i++){
        st[i].getData();
        if(st[i].getmarks() >=maxMarks){
            maxMarks=st[i].getmarks();
            ans=st[i].getName();
        }
    }

    cout<<"Topper's name is:"<<ans<<endl;



}