#include <iostream>
using namespace std;
int main(){
    int a1,a2,b1,b2;
    char s1;
    cin>>a1>>a2>>b1>>b2;
    if (a1==b1 and a2==b2) { s1='=';
        cout <<s1<<" , "<<'['<<a1<<','<<a2<<']'<<endl;
    } 
    else if(((b1<=a1 and b2>a2) or (b1<a1 and b2>=a2))or((b1>=a1 and b2<a2) or (b1>a1 and b2<=a2))){
        if ((b1<=a1 and b2>a2) or (b1<a1 and b2>=a2)) { 
            s1='1';
            cout<<s1<<" , "<<'['<<a1<<','<<a2<<']'<<endl;}
        else if ((b1>=a1 and b2<a2) or  (b1>a1 and b2<=a2)) {
            s1='2';
            cout<<s1<<" , "<<'['<<b1<<','<<b2<<']'<<endl;}
            
        }
    else {s1='?';
        if (a1==b2) cout<<s1<<" , "<<'['<<a1<<','<<a1<<']'<<endl;
        else if (a2==b1) cout<<s1<<" , "<<'['<<b1<<','<<b1<<']'<<endl;
        else if (a2<b1) cout<<s1<<" , "<<'['<<']'<<endl;
        else if (a1<b2 and b1<=a2 and a1<b1) cout<<s1<<" , "<<'['<<b1<<','<<a2<<']'<<endl;
        else if (a1<=b2 and b1<a2 and a1>b1)cout<<s1<<" , "<<'['<<a1<<','<<b2<<']'<<endl;
        else cout<<s1<<" , "<<'['<<']'<<endl;
    } 
}            
