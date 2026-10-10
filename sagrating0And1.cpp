#include<iostream>

using namespace std;
int main(){
  
    int n,z=0,nz=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z++;
        }
        else{
            nz++;
        }
    }
    for(int i=0;i<z;i++){
        arr[i]=0;
    }
    for(int i=z;i<n;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}