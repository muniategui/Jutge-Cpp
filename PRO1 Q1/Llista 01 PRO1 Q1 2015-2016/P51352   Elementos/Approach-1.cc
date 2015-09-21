#include <iostream>

using namespace std;

int battle(char e1, char e2){
  if(e1 == e2)return 0;
  if(e1 == 'A'){
    if(e2 == 'P')return 1;
    if(e2 == 'V')return 2;
  }
  if(e1 == 'P'){
    if(e2 == 'V')return 1;
    if(e2 == 'A')return 2;
  }
  if(e1 == 'V'){
    if(e2 == 'A')return 1;
    if(e2 == 'P')return 2;
  }
  return 0;
}

int main() {
  char e1, e2;
  cin >> e1 >> e2;
  int r = battle(e1, e2);
  if(r == 0)cout << "-";
  if(r > 0)cout << r;
  cout << endl;
  return 0;
  
}