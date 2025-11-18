#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x,y,m,n;
        float min;
        scanf("%d %d",&n,&m);
        for(int k=0;k<n;k++){
            for(int j=0;j<m;j++){
                if((k==0)&&(j==0)){
                    scanf("%f",&min);
                    x=0;
                    y=0;
                    continue;
                }
                float temp=0;
                scanf("%f",&temp);
                if(temp<min){
                    min=temp;
                    x=k;
                    y=j;
                }
                
            }
        }
        printf("%g %d %d\n",min,x+1,y+1);
    }
    return 0;
}