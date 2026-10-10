#include<iostream>
using namespace std;
int main(){
  char ch='+';
  cout<<(int)ch;//explicate type casting.

  int assci=ch;//implicite Typecasting.
  cout<<assci;

  int a=76;
  char c=a;
  cout<<c;

  char v='A';
  char b='a';
  cout<<v+b;
  cout<<(char)('a'+1);
    return 0;
}