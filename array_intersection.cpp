#include<iostream>
using namespace std;

void sort(int arr[], int s1){
    for(int i =0 ; i<s1-1;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i = -1;
        }
    }
}
void sort2(int arr2[], int s2){
    for(int i =0 ; i<s2-1;i++){
        if(arr2[i] > arr2[i+1]){
            int temp = arr2[i];
            arr2[i] = arr2[i+1];
            arr2[i+1] = temp;
            i = -1;
        }
    }
}

void merge(int s1, int s2, int arr1[], int arr2[]){
    int i = 0;
    int j = 0;
    while(i<s1 && j<s2){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a1[n];
    for(int i = 0; i<n;i++){
        cin>>a1[i];
    }

    int m;
    cin>>m;
    int a2[m];
    for(int i = 0; i<m;i++){
        cin>>a2[i];
    }
    
   sort(a1, n);
    sort2(a2, m);
   
    merge(n, m, a1, a2);
}
