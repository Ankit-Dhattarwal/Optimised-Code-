#include<iostream>
using namespace std;

int  unique(int size, int arr[]){
    int xjor = 0;
    for(int i = 0; i<size; i++){
        xjor = xjor ^ arr[i];
        cout<<xjor<<endl;
    }
    return xjor;
}

int main(){
    cout<<"Enter the size of the arrays"<<endl;
    int n;
    cin>>n;
    
//    int* p = new int[n];
//    cout<<"Enter the size of the arrays"<<endl;
//    for(int i = 0; i< n; i++){
//        cin>>p[i];
//    }
//
    
    int arr[n];
    cout<<"Enter the size of the arrays"<<endl;
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    
  int result =    unique(n, arr);
        cout<<result<<endl;
    
    
}
