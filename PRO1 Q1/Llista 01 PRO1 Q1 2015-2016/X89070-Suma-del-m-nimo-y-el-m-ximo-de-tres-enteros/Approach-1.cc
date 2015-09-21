#include <iostream>
using namespace std; 
int main() {
    int x,y,z,a,b; 
    cin >> x >> y >> z;
    if (x>=y) {
        if (x>=z) {a=x;
            if (y>z) b=z;
            else b=y;}
        else {a=z;
            if (x>y) b=y;
            else b=x;}
    }
    else {
        if (y>=z) {a=y;
            if (x>z) b=z;
            else b=x;}             
        else {a=z;
            if (x>y) b=y;
            else b=x;}
    }
    
    cout << a+b<<endl;

}
    
