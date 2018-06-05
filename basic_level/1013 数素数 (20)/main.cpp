#include <iostream>
using namespace std;

int main(){
  //求素数
  int primeArr[10000]={2}, cnt = 1;
  for(int i = 3; cnt <= 10000 ; i++){
    if(i%2 == 0){
      continue;
    }
    bool isPrime = true;
    for(int j = 3; j*j <= i; j+=2){
      if(i%j == 0){
        isPrime = false;
        break;
      }
    }
    if(isPrime){
      primeArr[cnt++] = i;
    }
  }

  int n, m;
  cin >> n >> m;
  for(int i = n-1; i <= m-1; i++){
    cout << primeArr[i] << ((i-n+2)%10==0 ? "\n" : (i==m-1)?"":" ");
  }
  return 0;
}
