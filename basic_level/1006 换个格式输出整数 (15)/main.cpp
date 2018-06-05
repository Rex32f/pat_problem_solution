#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  for(int i = 0; i < num/100; i++){
    cout << "B";
  }
  for(int i = 0; i < num/10%10; i++){
    cout << "S";
  }
  for(int i = 1; i <= num%10; i++){
    cout << i;
  }
  
  return 0;
}
