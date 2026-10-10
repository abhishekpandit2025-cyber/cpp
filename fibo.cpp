#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"Enter number : ";
    cin>>n;
    int a = 0,b = 1;
    cout<<a<<" ";
    
    for(int i=1;i<=n;i++){
        c = a+b;
      a=b;
      b=c;

      cout<<b<<" "<<c<<" ";
    }
    

    return 0;

}