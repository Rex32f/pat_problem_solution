#include <iostream>
using namespace std;

int main(){
  int n;
  string name, stuId, max_name, max_stuId, min_name, min_stuId;
  int score, max_score = -1, min_score = 101;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> name >> stuId >> score;
    if(score > max_score){
      max_score = score;
      max_name = name;
      max_stuId = stuId;
    }

    if(score < min_score){
      min_score = score;
      min_name = name;
      min_stuId = stuId;
    }

  }

  cout << max_name <<" " << max_stuId  << endl;
  cout << min_name <<" " << min_stuId  << endl;

  return 0;
}

// 这道题，这样解决略显幼稚了，因为大多情况下应该是排序后再取最值的。
