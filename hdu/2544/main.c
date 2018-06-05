#include <stdio.h>
#define N 101

int main(){

  int n, m;
  int a, b, c;
  int dis[N][N];
  while(~scanf("%d%d", &n, &m)){
    if(n == m && n == 0) break;
    while(m--){
      scanf("%d%d%d", &a, &b, &c);
      dis[a][b] = dis[b][a] = c;
    }
  }
  return 0;
}

void dijstra(){
  int vis[N];
  memset(vis, 0, sizeof(vis));

}
