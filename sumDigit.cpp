#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter number : ";
    cin>>n;
    while(n!=0){
        int dig = n%10;
        sum = sum + dig;
        n=n/10;
    }
    cout<<sum;
}