#include<iostream>
#include<string>
using namespace std;
int main(){
   int hh, mm, ss;
char c1, c2;
string time;

cin >> hh >> c1 >> mm >> c2 >> ss >> time;
    
    if(hh==12 && (time=="am" || time=="AM")){
        cout<<hh*0<<c1<<mm<<c2<<ss;
        
    }
    else if(time=="pm" || time=="PM"){
         cout<<hh+12<<c1<<mm<<c2<<ss;
    }
     else if(time=="am" || time=="AM"){
         cout<<hh+12<<c1<<mm<<c2<<ss;
    }
}