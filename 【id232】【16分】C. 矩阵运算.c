#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i0=0;i0<t;i0++){
        int a[10][10],b[10][10];
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                scanf("%d",&a[i][k]);
            }
        }
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                scanf("%d",&b[i][k]);
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                printf("%d",a[i][j]+b[i][j]);
                if(j<n-1) printf(" ");
            }
            printf("\n");
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                int sum=0;
                for(int k=0;k<n;k++) {
                    sum+=a[i][k] * b[k][j];
                }
                printf("%d", sum);
                if(j < n-1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}