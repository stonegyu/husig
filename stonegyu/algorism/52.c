#include<stdio.h>
int main(){
        int a;
        scanf("%d",&a);
        int i=1;
        int sum=i*(i+1)*0.5;
        while(sum<a){
           i++;
           sum+=i;
        }
        int gap = sum-a;
		if(i%2==0){
			printf("%d IS %d/%d",a,i-gap,1+gap);
		}else{
			printf("%d IS %d/%d",a,1+gap,i-gap);
		}
        
        return 0;
}
