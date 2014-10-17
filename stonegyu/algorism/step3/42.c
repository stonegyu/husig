#include<stdio.h>
int main(){
        int a,i;
        int isSouSoo=0;
        scanf("%d",&a);
        for(i=2; i<a; i++){
                if(a%i==0){
                        isSouSoo++;
                        break;
                }
        }
        if(isSouSoo==0)printf("prime");
        else printf("not prime");
        return 0;
}
