#include<iostream>
using namespace std;

void search(int arr[] ,  int size , int key){

    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            cout<<"element is found at index "<< i << endl;
            cout<<"element is found at position "<< i+1 << endl;
            found++;
            break;
        }
    }
       if(found==0)
       {

        cout<<" element not found "<< endl;
        
        
       }
        
    
    
}

int main(){
    int arr[10] = { 1,5,8,6,9,7,55,6,33,2};
    cout<<"enter the element to search " << endl;
    int data;
    cin>>data;
    search(arr, 10 ,data);

    return 0;
   
}