#include <stdio.h>

int main(){
        int cnt;
        float arr[1001];
        int a;
        float b;
        for(int i = 0; i < 1001; i++) {
                arr[i] = 0;
        }

        scanf("%d", &cnt);
        while(cnt--) {
                scanf("%d %f", &a, &b);
                arr[a] = b;
        }

        scanf("%d", &cnt);
        while(cnt--) {
                scanf("%d %f", &a, &b);
                arr[a] = arr[a]+b;
        }

        int count = 0;
        int saveArr[1001];
        for(int i = 1000; i >= 0; i--) {
                if(arr[i] != 0) {
                        saveArr[count++] = i;
                }
        }

        printf("%d%s", count, count == 0 ? "" : " ");
        for(int i = 0; i < count; i++) {
                printf("%d %.1f%s", saveArr[i],  arr[saveArr[i]], i == count-1 ? "" : " ");
        }

        return 0;
}
