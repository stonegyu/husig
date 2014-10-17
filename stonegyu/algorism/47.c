#include<stdio.h>
int main(){
        int min=999999,max=-1;
        int input;
        scanf("%d",&input);
        int i;
        int a;
        for(i=0; i<input; i++){
                scanf("%d",&a);
                min=(min>a)?a:min;
                max=(max<a)?a:max;
        }
        printf("%d",(max-min)*2);
        return 0;
}
