#include<iostream>
using namespace std;

class Array{
    private:
    int size;
    int *arr;

    public:
    Array(){
        cout<<"Default Constructor!!!"<<endl;
    }
    Array(int size){
        this->size=size;
        arr=new int[size];
    }
    void getValues(){
        cout<<"Enter elements:";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void displayMax(){
        int maxElement=-1000;

        for(int i=0;i<size;i++){
            maxElement=max(maxElement,arr[i]);  
        }
        cout<<"Max element is:"<<maxElement<<endl;

    }
};


int main(){
    int size;
    cout<<"Enter the size of the Array:";
    cin>>size;
    Array *array=new Array(size);

    array->getValues();
    array->displayMax();



}