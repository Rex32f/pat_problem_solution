#include <iostream>
using namespace std;

int main(){
  int num_cnt, move_cnt;
  int num_arr[101];
  cin >> num_cnt >> move_cnt;
  for(int i = 0; i < num_cnt; i++){
    cin >> num_arr[(i+move_cnt)%num_cnt];
  }
  for(int i = 0; i < num_cnt; i++){
    cout << num_arr[i] << (i == num_cnt-1 ? "":" ");
  }

  return 0;
}

//恩，不需要模拟循环右移，直接算出来给相应的位置赋值就行啦，超简单的
