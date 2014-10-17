#include<stdio.h>
int main(){
        int input;
        scanf("%d",&input);
        int i;
        int speed, hour;
        int b_hour=0;
        int mile=0;
        for(i=0; i<input; i++){
                scanf("%d %d",&speed, &hour);
                mile+=(hour-b_hour)*speed;
                b_hour=hour;

        }
        printf("%d miles",mile);
        return 0;
}
