#include <iostream>
using namespace std;

int main(){
  int coe, exp;
  bool is_first = true;
  while(cin >> coe >> exp){
    if(exp == 0) continue;
    if(!is_first)   cout << " ";
    cout << coe*exp << " " << exp-1;
    is_first = false;
  }

  if(is_first) cout << "0 0";

  return 0;
}
