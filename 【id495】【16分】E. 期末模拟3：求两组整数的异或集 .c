#include<stdio.h>
int main(){
    int n1,n2;
    int a[20],b[20],c[40];
    scanf("%d",&n1);
    for(int i1=0;i1<n1;i1++){
        scanf("%d",&a[i1]);
    }
    scanf("%d",&n2);
    for(int i2=0;i2<n2;i2++){
        scanf("%d",&b[i2]);
    }
    int num=0;
    for(int k1=0;k1<n1;k1++){
        int deng=0;
        for(int k2=0;k2<n2;k2++){
            if(a[k1]==b[k2]){
                deng+=1;
            }
        }
        if(deng==0){
            c[num]=a[k1];
            num++;
        }
    }
        for(int k1=0;k1<n2;k1++){
        int deng=0;
        for(int k2=0;k2<n2;k2++){
            if(b[k1]==a[k2]){
                deng+=1;
            }
        }
        if(deng==0){
            c[num]=b[k1];
            num++;
        }
    }
    for(int q=0;q<num-1;q++){
        for(int p=0;p<num-q-1;p++){
            if(c[p]<c[p+1]){
                int temp;
                temp=c[p];
                c[p]=c[p+1];
                c[p+1]=temp;
            }
        }
    }
    if(num!=0){
        for(int aaa=0;aaa<num;aaa++){
            printf("%d",c[aaa]);
            if(aaa!=num-1){
                printf(" ");
            }
        }
    }
    if(num==0){
        printf("NULL\n");
    }

    return 0;
}