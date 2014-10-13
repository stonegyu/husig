#include<stdio.h>
int main(){
        int a;
        int i;
        int cnt=0;
        scanf("%d",&a);
        for(i=1; i<=a; i++){
                if(a%i==0) cnt++;
        }
        if(cnt%2==0) printf("no");
        else printf("yes");
        return 0;
}
