#include<stdio.h>

int main(){
    int a[6],b[8];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<8;i++){
        scanf("%d",&b[i]);
        for(int k=0;k<6;k++){
            if(a[k]==b[i]){
                printf("%d\n",b[i]);
            }
        }
    }

    return 0;
}