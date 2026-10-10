#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int tamp = n;
    int rev=0;
    while(n!=0){
        int dig = n%10;
        rev = rev*10 + dig;
        n=n/10;
    }

    if(rev==tamp){
        cout<<"PalinDrom ";
    }
    else{
        cout<<"Not a PalinDrom";
    }


    

    return 0;


}