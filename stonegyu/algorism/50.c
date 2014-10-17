#include<stdio.h>
int main(){
        int i=1;
        int a,b;
        scanf("%d %d",&a,&b);
        int sum=0;
        int min=99999;
        while((i*i)<=b){
                if((i*i)>=a){
                        min=((i*i)<min)?(i*i):min;
                        sum+=(i*i);
                }
                i++;
        }
        if(min == 99999){
                printf("-1");
        }else{
                printf("%d\n%d",sum,min);
        }
        return 0;
}
