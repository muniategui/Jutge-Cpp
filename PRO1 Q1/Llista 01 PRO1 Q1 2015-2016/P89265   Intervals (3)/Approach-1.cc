#include <iostream>

using namespace std;

int main(){
  int a1, b1, a2, b2;
  int i1, i2;
  cin >> a1 >> b1 >> a2 >> b2;
  //[a1, b1]  [a2, b2]
  i1 = max(a1, a2);
  i2 = min(b1, b2);
  int ins = -1;
  if(i1 == a1 && i2 == b1)ins = 1; 
  if(i1 == a2 && i2 == b2)ins = 2; 
  if(a1 == a2 && b1 == b2)ins = 0;
  int r = 1; 
  if(i2 - i1 < 0)r = -1;
  if(ins < 0)cout << "?";
  if(ins == 0)cout << "=";
  if(ins > 0)cout << ins;
  cout << " , ";
  cout << "[";
  if(r == 1){
    cout << i1 << "," << i2;
  }
  cout << "]" << endl;
}