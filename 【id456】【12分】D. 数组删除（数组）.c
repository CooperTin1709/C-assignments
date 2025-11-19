#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a[10];
        for(int m=0;m<10;m++){
            scanf("%d",&a[m]);
        }
        int del;
        scanf("%d",&del);
        int check=0;
        for(int k=0;k<10;k++){
            if(a[k]!=del){
                check+=1;
            }
            else if(a[k]==del){
                continue;
            }
        }
        if(check==10){
            printf("Not found\n");
        }
        else{
        int c=0;
        for(int k=0;k<10;k++){
            if(a[k]!=del){
                
                printf("%d",a[k]);
                c+=1;
                if(c!=9){
                    printf(" ");
                }
            }
            else if(a[k]==del){
                continue;
            }
        }
        printf("\n");
        }
    }

    return 0;

}