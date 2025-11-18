#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[10][10];
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                scanf("%d", &a[j][k]);
            }
        }
        int found=0;
        int final,x0,y0;
        for(int o=0;o<n;o++){
            for(int p=0;p<m;p++){
                int temp=a[o][p];
                int x=1,y=1;
                for(int hang=0;hang<m;hang++){
                    if(a[o][hang]>temp){
                        x=0;
                        break;
                    }
                }
                for(int lie=0;lie<n;lie++){
                    if(a[lie][p]<temp){
                        y=0;
                        break;
                    }
                }
                if(x&&y){
                    final=temp;
                    x0=o+1;
                    y0=p+1;
                    found=1;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if(found){
            printf("%d %d %d\n",final,x0,y0);
        }
        else{
            printf("null\n");
        }
    }
    return 0;
}