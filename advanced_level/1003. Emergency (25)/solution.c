#include <stdio.h>
#include <string.h>
#define CITY 501
#define INF 1<<20
int min(int a, int b){return a>b ? b : a;}
int main(){
  int N, M, C1, C2;
  int people_in_city[CITY];
  int road[CITY][CITY];
  int from, to, len;
  while(~scanf("%d%d%d%d", &N, &M, &C1, &C2)){
    for(int i = 0; i < N; i++){
      scanf("%d", people_in_city+i);
    }
    //初始化road
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        road[i][j] = INF;
      }
    }
    for(int i = 0; i < M; i++){
      scanf("%d%d%d", &from, &to, &len);
      road[from][to] = road[to][from] = len;
    }


    //初始化vis
    int vis[CITY];
    memset(vis, 0, sizeof(vis));
    //初始化dis
    int dis[CITY];
    for(int i = 0; i < N; i++){
      dis[i] = road[C1][i];
    }
    dis[C1] = 0;
    vis[C1] = 1;

    int cur_city = C1;
    int short_len;
    for(int i = 0; i < N-1; i++){
      short_len = INF;
      for(int j = 0; j < N; j++){
        if(!vis[j] && dis[j] < short_len){
          short_len = dis[j];
          cur_city = j;
        }
      }
      printf("cur_city:%d\n", cur_city);
      vis[cur_city] = 1;
      //路径更新
      for(int j = 0; j < N; j++){
        if(!vis[j]){
          dis[j] = min(dis[j], dis[cur_city]+road[cur_city][j]);
        }
      }
      for (int i = 0; i < N; i++) {
        printf("%d ", dis[i]);
      }
      printf("\n");
    }
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        printf("%d ", road[i][j]);
      }
      printf("\n");
    }
    // for (int i = 0; i < N; i++) {
    //   printf("%d ", dis[i]);
    // }
  }

  return 0;
}
root@localhost: cb>krO_WM5L+
