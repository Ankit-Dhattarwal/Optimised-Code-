#include<iostream>
using namespace std;

int dup(int size , int arr[]){
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum = sum + arr[i];
    }
    int naturalsum = ((size-2)*(size-1))/2;
    int result = sum - naturalsum;
    return result;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    
    int ans = dup(n, arr);
    cout<<ans<<endl;
}
