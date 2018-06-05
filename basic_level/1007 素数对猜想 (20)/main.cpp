#include <iostream>
using namespace std;

int main(){
  //求素数
  int primeArr[9593]={2}, cnt = 1;
  for(int i = 3; i < 100010; i++){
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

  // cout << cnt << endl;
  int num;
  int result = 0;
  cin >> num;
  for(int i = 0; i < cnt; i++){
    if(num < primeArr[i]){
      for(int j = 1; j < i; j++){
        if(primeArr[j]-primeArr[j-1] == 2){
          result++;
        }
      }
      break;
    }
  }
  cout << result << endl;

  return 0;
}

//思路很简单，求素数，然后计算。
//需要注意的是素数的求法，好久没写过了，但有点模糊的思路在，还是霸蛮写出来了。
//另外一些细节要注意，边界条件，边界计算，primeArr[j]-primeArr[j-1] == 2这个在写的时候就意识到了，结果后面忘了就直接提交了，部分正确
//如果是输入是超过数组里面的数据，由于if(num < primeArr[i])这个判断不能成立，所以输出为0
