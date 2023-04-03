#include<iostream>
using namespace std;

void help(int x, int y, int size, int arr[]){
    int count = 0;
    int count2 = 0;
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
    cout<<"the ist count is: "<<count<<" the second count is: "<<count2<<endl;
    int mult = count * count2;
    cout<<"The mult is: "<<mult<<endl;
    int z =1;
    while(z<mult-1){
        cout<<x<<","<<y<<endl;
        z++;
    }
    
}

void pairs(int arr[], int size, int element){
    int i = 0;
    int j = size-1;
    while (i<j){
        int ans = arr[i] + arr[j];
        if(ans == element){
            cout<<arr[i]<<","<<arr[j]<<endl;
            int z = 0;
            while (z<1){
                help(arr[i], arr[j], size, arr);
                z++;
            }
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
}

int main(){
    cout<<"Enter the size of the arrays"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the sum that you want to b "<<endl;
    int e;
    cin>>e;
    
    int arr[n];
    cout<<"Enter the elements of the arrays "<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    pairs(arr, n, e);
}
