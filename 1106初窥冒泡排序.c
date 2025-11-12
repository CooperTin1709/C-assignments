#include<stdio.h>
#define NUM 10
int main(){
    int a[NUM],b[NUM],flag,j,t1,t2,i;
    for(i=0;i<NUM;i++){//读取10个整数，除空格，a为数，b代表下标
        scanf("%d",&a[i]);
        char c=getchar();//读空格
        b[i]=i;
    }
    for(int k=0;k<NUM-1;k++){//比较的轮次,共比较NUM-1轮
        for(j=0;j<NUM-k;j++){
            if(a[j]<a[j+1]){//从大到小
                t1=a[j];//交换数字
                a[j]=a[j+1];
                a[j+1]=t1;
                t2=b[j];//同时交换下标
                b[j]=b[j+1];
                b[j+1]=t2;
            }
        }
    }
    for(i=0;i<NUM-1;i++){
            printf("%d %d\n",a[i],b[i]);
    }
    return 0;
}
