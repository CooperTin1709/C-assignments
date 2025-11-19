#include<stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int m,n,k,l,d;
    scanf("%d %d %d %d %d",&m,&n,&k,&l,&d);
    int hang[1000][2]={0},lie[1000][2]={0};

    for(int o=0;o<1000;o++){
        hang[o][0]=o;
        lie[o][0]=o;
    }
    for(int i=0;i<d;i++){
        int x,y,p,q;
        scanf("%d %d %d %d",&x,&y,&p,&q);
        if(x==p){
            lie[min(y,q)][1]++;
        }
        else if(y==q){
            hang[min(x,p)][1]++;
        }
    }
    for(int h=1;h<n;h++){
        for(int j=1;j<n-h;j++){
            if(lie[j][1]<lie[j+1][1]){
                int temp=0,temp1=0;
                temp=lie[j][1];
                lie[j][1]=lie[j+1][1];
                lie[j+1][1]=temp;
                temp1=lie[j][0];
                lie[j][0]=lie[j+1][0];
                lie[j+1][0]=temp1;
            }
        }
    }
    for(int h=1;h<m;h++){
        for(int j=1;j<m-h;j++){
            if(hang[j][1]<hang[j+1][1]){
                int temp=0,temp1=0;
                temp=hang[j][1];
                hang[j][1]=hang[j+1][1];
                hang[j+1][1]=temp;
                temp1=hang[j][0];
                hang[j][0]=hang[j+1][0];
                hang[j+1][0]=temp1;
            }
        }
    }
    for(int i=1;i<=k;i++){
        printf("%d",hang[i][0]);
        if(i<k) printf(" ");
    }
    printf("\n");

    for(int i=1;i<=l;i++){
        printf("%d",lie[i][0]);
        if(i<l) printf(" ");
    }
    printf("\n");

    return 0;
}