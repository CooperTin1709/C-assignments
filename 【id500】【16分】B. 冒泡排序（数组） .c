#include<stdio.h>

int main(){
    int t,flag;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a[20];
        for(int i1=0;i1<n;i1++){//读取n个整数，除空格，a为数
            scanf("%d",&a[i1]);
        }
        for(int k=0;k<n-1;k++){
            for(int j=0;j<n-k-1;j++){
                if(a[j]>a[j+1]){
                    int t;
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
            for(int i2=0;i2<n;i2++){
                printf("%d",a[i2]);
                if(i2!=n-1) printf(" ");
            }
            printf("\n");
            
        }
    }
    return 0;
}