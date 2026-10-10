#include<iostream>
using namespace std;
int main(){
    int n,cube=0;
    cout<<"Enter number : ";
    cin>>n;
    int tamp=n;
    while(n!=0){
        int dig = n%10;
        cube=cube + dig*dig*dig;
        n=n/10;
    }

    if(cube==tamp){
        cout<<"armstrong number ";
    }
    else{
        cout<<"Not ";
    }

    return 0;
}