#include<stdio.h>

int main(){
        int a,i=1,before;
        scanf("%d",&a);
        before=a;
        while((i*=10)<a){
                if(a%i >= 5*(i/10)){
                        a=a-(a%i);
                        a=a+(i);
                }
        }
        i/=10;
        if((a/i) == (before/i)){
           int result = a/i;
                printf("%d",result*i);
        }else{
           int result = a/i;
                printf("%d", result*i);
        }
        return 0;
}
