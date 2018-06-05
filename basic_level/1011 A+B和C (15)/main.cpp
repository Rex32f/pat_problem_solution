#include <iostream>
using namespace std;

int main(){
  double a, b, c;
  int case_num;
  cin >> case_num;
  for(int i = 1; i <= case_num; i++){
    cin >> a >> b >> c;
    cout << "Case #" << case_num << ": " << (a+b>c?"true":"false") << endl;
  }

  return 0;
}
