#include<stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        int n;
        int a[101][101];
        scanf("%d",&n);
        for(int k=1;k<=n;k++){
            for(int j=1;j<=k;j++){
                scanf("%d",&a[k][j]);
            }
        }
        int sum[101][101];
        for(int k=1;k<=n;k++){
            for(int j=1;j<=k;j++){
                sum[k][j]=max(sum[k-1][j],sum[k-1][j-1])+a[k][j];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,sum[n][i]);
        }
        printf("%d\n",ans);
    }

    return 0;
}