#include <stdio.h>

int main(){
  int a, b;
  int sum = 0, cnt = 1;
  char arr[20];

  scanf("%d %d", &a, &b);
  sum = a + b;

  int flag = 0;
  if(sum < 0){
    flag = 1;
  }
  //转化成正数，防止在取余的时候，余数为负值
  sum = sum > 0 ? sum : -sum;
  do{
    arr[cnt++] = sum % 10  + '0';
    sum = sum / 10;
    if(cnt % 4 == 0 && sum != 0){//sum!=0，防止在最前面输出逗号
      arr[cnt++] = ',';
    }
  }while(sum != 0);

//负数要添加符号
  if(flag){
    arr[cnt++] = '-';
  }
  //打印结果
  for(int i = cnt-1; i >= 1; i--){
    printf("%c", arr[i]);
  }


  return 0;
}
