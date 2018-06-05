#include <iostream>
using namespace std;

/**
 * 获取字符串长度
 * @param  str [description]
 * @return     [description]
 */

int strlen(char *str){
  int cnt = 0;
  for(; *str != '\0'; str++){
    cnt++;
  }

  return cnt;
}

/**
 * 按指定分隔符切割字符串
 * @param  str    需要分割的字符串
 * @param  dem    分隔符
 * @param  result 结果集数组
 * @return        结果集数组长度
 */
int split(char *str, char dem, char **result){
  int cnt = 1;
  int len = strlen(str);
  result[0] = str;
  for(int i = 0; i < len; i++){
    if(*(str+i) == dem){
      *(str+i) = '\0';
      if(*(str+i+1) != dem && *(str+i+1) != '\0'){
          result[cnt++] = str+i+1;
      }
    }
  }
  return cnt;
}

int main(){
  char str[100];
  cin.get(str, 100);
  char *word[10];
  int cnt;
  cnt = split(str, ' ', word);
  for(int i = cnt-1; i >= 0; i--){
    cout << word[i] << (i ==0 ? "" : " ");
  }

  return 0;
}


//思路也超级简单的，如果知道字符串函数和内置数据结构的话，这题分分钟。写两个版本吧，一个用char自己切割判断，另一个用函数和数据结构
