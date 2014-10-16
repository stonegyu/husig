#include<stdio.h>

int main(){
   int x,y;
   scanf("%d %d",&x,&y);
   if((x-y)==2 || (x-y)==0){
        if(x%2==1 && y%2==1){
                printf("%d",x+y-1);
        }else{
                printf("%d",x+y);
        }
   }else{
        printf("No Number");
   }
   return 0;
}
