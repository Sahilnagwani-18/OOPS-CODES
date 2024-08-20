#include<iostream>
#include<string>
using namespace std;


class Library{
    public:
    int currDate;
    int currMonth;
    int currYear;
    int dueDays;

    Library(int currDate, int currMonth, int currYear,int dueDays) {
        this->currDate = currDate;
        this->currMonth=currMonth;
        this->currYear=currYear;
        this->dueDays = dueDays;

    }
    string dueDate(){
        int totalDate=currDate+dueDays;
        int newDate=totalDate%30;
        int newMonth=currMonth+(totalDate/30);
        int newYear=currYear;
        if(newMonth>12){
            newYear=currYear+1;
        }
        
        string ans=to_string(newDate)+"-"+to_string(newMonth)+"-"+to_string(newYear);

        return ans;

    }
};




int main(){
    int currDate;
    int currMonth;
    int currYear;
    int dueDays;
    cout<<"Enter date: Month: Year:: duedays";
    cin>>currDate>>currMonth>>currYear>>dueDays;
    cout<<endl;
    Library *lib=new Library(currDate,currMonth,currYear,dueDays);

    string ans=lib->dueDate();
    cout<<ans<<endl;


}