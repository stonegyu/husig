#include<stdio.h>
int main(){
        int max=0,loc=0;
        int a;
        int i;
        for(i = 0; i<7; i++){
           scanf("%d",&a);
           if(max<a){
                loc=i;
                max=a;
           }
        }
        printf("%d",loc+1);
        return 0;
}
