#include<stdio.h>
int main(){
        int a;
        scanf("%d",&a);
        int i,j,k=0;
        int arr[4]={0};
        while(a!=6174){
                k++;
                
                for(i=0; i<4; i++){
                        arr[i] = a%10;
                        for(j=0; j<i; j++){
                                if(arr[i]>arr[j]){
                                        int t=arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=t;
                                }
                        }
                        a/=10;
                }
                a=0;
                int b=0;
                int temp=1;
                for(i=0; i<4; i++){
                    a+=arr[i]*temp;
                    b+=arr[3-i]*temp;
                    temp*=10;
                }
                a=b-a;
        }
        printf("%d",k);
        return 0;
}
