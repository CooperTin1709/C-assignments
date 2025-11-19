#include<stdio.h>



int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        int a[100],b[100],c[100];
        scanf("%d",&n);
        int q=0,w=0,e=0;
        for(int k=0;k<n;k++){
            int x;
            scanf("%d",&x);
            if((x%3)==0){
                a[q]=x;
                q+=1;
            }
            else if((x%3)==1){
                b[w]=x;
                w+=1;
            }
            else if((x%3)==2){
                c[e]=x;
                e+=1;
            }
        }
        if(q==0){
            printf("-1\n");
        }
        else{
            for(int m=0;m<q;m++){
                printf("%d",a[m]);
                if(m!=q-1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
        if(w==0){
            printf("-1\n");
        }
        else{
            for(int m=0;m<w;m++){
                printf("%d",b[m]);
                if(m!=w-1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
        if(e==0){
            printf("-1\n");
        }
        else{
            for(int m=0;m<e;m++){
                printf("%d",c[m]);
                if(m!=e-1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }

    return 0;
}