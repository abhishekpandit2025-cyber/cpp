#include<iostream>
using namespace std;
int main(){
   float p,r,t;
   cout<<"Enter principal, rate, time : ";
   cin>>p>>r>>t;
   float a=(p*r*t)/100;
   cout<<a;
    return 0;
}