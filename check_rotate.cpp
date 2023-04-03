#include<iostream>
using namespace std;

 void rotates_check(int arr[], int start , int end){
     while(start<end){
         int temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
         end--;
         start++;
     }
}

int main(){
    
    cout<<"Enter the size of the arrays"<<endl;
    int n;
    cin>>n;
    
//    cout<<"Enter the how many rotate"<<endl;
    int d = 0;
//    cin>>d;
    
    int arr[n];
    cout<<"Enter the elements of the arrays"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i + 1]){
            d = i+1;
            break;
        }
    }
    cout<<d<<endl;
//    rotates_check(arr, 0 , n-1);
//
//    rotates_check(arr, 0 , n-d-1);
//
//    rotates_check(arr, n-d , n-1);
//
//    for(int i = 0; i<n;i++){
//        cout<<arr[i];
//    }
}
