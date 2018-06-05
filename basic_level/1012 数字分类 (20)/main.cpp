#include <iostream>
#include<iomanip>
using namespace std;

int main(){
  int x;
  int a1, a1_cnt, a2, a2_cnt, a3, a4_cnt, a5;
  double a4;
  a1 = a1_cnt = a2 = a2_cnt = a3 = a4 = a4_cnt = a5 = 0;
  bool a2_posi_flag = true;

  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x;
    if(x % 10 == 0){
      a1+=x;
      a1_cnt++;
    }
    if(x % 5 == 1){
       a2_cnt++;
       if(a2_posi_flag){
         a2+=x;
         a2_posi_flag = false;
       }else{
         a2-=x;
         a2_posi_flag = true;
       }
    }

    if(x % 5 == 2){
      a3++;
    }
    if(x % 5 == 3){
      a4+=x;
      a4_cnt++;
    }
    if(x % 5 == 4){
      a5 = a5 < x ? x : a5;
    }
  }

if(n != 0){
  if(a1 == 0 && a1_cnt == 0){
     cout << "N ";
  }else{
     cout << a1 << " ";
  }
  if(a2 == 0 && a2_cnt == 0){
     cout << "N ";
  }else{
     cout << a2 << " ";
  }
  if(a3 == 0){
     cout << "N ";
  }else{
     cout << a3 << " ";
  }
  if(a4 == 0){
     cout << "N ";
  }else{
     cout << setprecision(1) << fixed << a4/a4_cnt << " ";
  }
  if(a5 == 0){
     cout << "N";
  }else{
     cout << a5;
  }

}

  return 0;
}

//这题错了很多次，有两个原因，一个是没看清题意，第一个数居然是个数。
//另一个原因是我判断结果等于0输出N,但这里有个问题是：是没有还是计算结果就是0，所以这题最好还是用两个数组
