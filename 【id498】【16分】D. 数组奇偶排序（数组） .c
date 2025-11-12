#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n,a[50];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int l=0,r=n-1;
        while(l<r){
            if(a[l]%2==0){
                l++;
            }
            else if(a[r]%2!=0){
                r--;
            }
            else{
                int temp=a[r];
                a[r]=a[l];
                a[l]=temp;
                l++;
                r--;
            }
        }
        printf("%d",n);
        for(int i1=0;i1<n;i1++){
            printf(" %d",a[i1]);
        }
        printf("\n");
    }
    return 0;
}