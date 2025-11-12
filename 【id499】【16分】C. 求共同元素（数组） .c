#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
        for(int i=0;i<t;i++){
            int n1;
            int a[10];
            scanf("%d",&n1);
            for(int i1=0;i1<n1;i1++){
                scanf("%d",&a[i1]);}
            
            int n2;
            int b[10];
            scanf("%d",&n2);
            for(int i2=0;i2<n2;i2++){
                scanf("%d",&b[i2]);}

            int n3;
            int c[10];
            scanf("%d",&n3);
            for(int i3=0;i3<n3;i3++){
                scanf("%d",&c[i3]);}
            
            int common[10];//装共同的
            int count=0;

            for(int k=0;k<n1;k++){
                int found1=0;
                for(int j=0;j<n2;j++){
                    if(a[k]==b[j]){
                        found1=1;
                        break;
                    }
                }
                if(found1==1){
                    int found2=0;
                    for(int q=0;q<n3;q++){
                        if(a[k]==c[q]){
                            found2=1;
                            break;
                        }
                    }

                    if(found2==1){
                        int already=0;
                        for(int m=0;m<count;m++){//去重
                            if(a[k]==common[m]){
                                already=1;
                                break;
                            }
                        }
                        if(already==0){
                            common[count]=a[k];
                            count+=1;}
                        }
                }
            for(int i0=0;i<count-1;i0++){
                for(int j0=0;j0<count-i0-1;j0++){
                    int temp0;
                    if(common[j0]>common[j0+1]){
                        temp0=common[j0];
                        common[j0]=common[j0+1];
                        common[j0+1]=temp0;
                    }
                }
            }
        }
            if(count!=0){
                printf("%d:",count);
                for(int i00=0;i00<count;i00++){
                    printf("%d",common[i00]);
                    if(i00!=count-1){
                        printf(" ");
                    }
                }
            }
            if(count==0){
                printf("0:");
            }
            printf("\n");

    }
    return 0;
}