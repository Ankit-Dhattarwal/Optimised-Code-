#include<iostream>
using namespace std;

void help(int x, int y, int size, int arr[]){
    int count = 0;
    int count2 = 0;
    int temp = -1000;
    for(int i = 0; i<size-1;i++){
        if(arr[i] == x){
            count++;
        }
    }
    for(int i = 0; i<size-1; i++){
        if(arr[i] == y){
            count2++;
        }
    }
    cout<<"the ist count is: "<<count<<" second is: "<<count2<<endl;
    int mult = count * count2;
    if(mult>temp){
        temp = mult;
        cout<<temp<<"r"<<endl;
    }
    cout<<"The mult is: "<<temp<<endl;
    
}

void pairs(int arr[], int size, int element){
    int i = 0;
    int j = size-1;
    int many = 0;
    while (i<j){
        int ans = arr[i] + arr[j];
        if(ans == element){
            many++;
        help(arr[i], arr[j], size, arr); 
            i++;
            j--;
        }
        else if(ans > element){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<many<<endl;
}

int main(){
    cout<<"Enter the size of the arrays"<<endl;
    int n;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the arrays "<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the sum that you want to be "<<endl;
    int e;
    cin>>e;
    
    pairs(arr, n, e);
}
