#include<stdio.h>
int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        int i;
        int isrprime=0;
        for(i=2; i<=a; i++){
                if(a%i==0 && b%i==0){
                        isrprime++;
                        break;
                }
        }
        if(isrprime==0) printf("yes");
        else printf("no");
        return 0;
}
