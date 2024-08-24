// #include<iostream>
// using namespace std;


// void printarr(int arr[] , int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<< " ";
//     }
//     cout << endl;
    
// }
// void swapAlternate(int arr[] ,  int size){

//     for (int i = 0; i < size; i+=2)
//     {
//     if(i+1<=size)
//     {
//         swap(arr[i] , arr[i+1]);
//     }
//     }
    

// }



// int main(){
//     int odd[5] = {5,9,3,4,7};
//     int even[8] = {6,3,7,8,2,1,0,9};


//     swapAlternate(even , 8);
//     printarr(even,8);
//     swapAlternate(odd , 5);
//     printarr(odd,5);


//     return 0;

// }



#include<iostream>
using namespace std;



int finduni(int arr[] ,  int size){
    int res = 0;
    for (int i = 0; i < size; i++)
    {
    res = res^arr[i];
    
    }
    return res;
    

}



int main(){
    int odd[5] = {9,9,4};
    int even[8] = {6,3,7,8,2,1,0,9};

    int result = finduni(odd , 5);
    cout << result;


    return 0;

}