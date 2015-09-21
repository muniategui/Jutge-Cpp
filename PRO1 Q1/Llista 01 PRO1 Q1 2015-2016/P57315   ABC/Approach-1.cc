#include <iostream>

using namespace std;

int  n [3];
char l [3];

int abcIndex(char c){
  if(c == 'A')return 0;
  if(c == 'B')return 1;
  if(c == 'C')return 2;
  return 0;
}

int r(int pos){
  return n[abcIndex(l[pos])];
}

void ordena(int ns[], int s){  
    int i, j, min, temp;
    for (i = 0; i < s-1; i++){  
         min = i;  
      for (j = i+1; j < s; j++){  
        if (ns[j] < ns[min])min = j;         
      }  
      temp = ns[i];  
      ns[i] = ns[min];  
      ns[min] = temp;  
    }  
}  

int main(){
  cin >> n[0] >> n[1] >> n[2];
  cin >> l[0] >> l[1] >> l[2];
  ordena(n, 3);
  cout << r(0) << " " << r(1) << " " << r(2) << endl;
  return 0;
}