#include<stdio.h>
int main(){
    int a,b,k,l,m,n,o,p,i,j;
    printf("ENTER NUMBER OF ROWS OF 1 MATRIX:");
    scanf("%d",&a);
    printf("ENTER NUMBER OF COLUMNS OF 1 MATRIX:");
    scanf("%d",&b);
    int arr[a][b];
    printf("ENTER ALL ELEMENTS OF 1ST MATRIX :");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int c,d;
    printf("ENTER NUMBER OF ROWS 2 MATRIX:");
    scanf("%d",&c);
    printf("ENTER NUMBER OF COLUMNS 2 MATRIX :");
    scanf("%d",&d);
    int brr[c][d];
    printf("ENTER ALL ELEMENTS OF 2ND MATRIX :");
    for(k=0;k<c;k++){
        for(l=0;l<d;l++){
            scanf("%d",&brr[k][l]);
        }
    }
    if(b!=c){
        printf("THE MATRIX CAN NOT BE MULTIPLIED");
    }
    else{
    int res[a][d];
    for(m=0;m<a;m++){
        for(n=0;n<d;n++){
            res[m][n]=0;
            for(k=0;k<b;k++){
                res[m][n]+=arr[m][k]*brr[k][n];
            }
        }
    }
    for(o=0;o<a;o++){
        for(p=0;p<d;p++){
            printf("%d ",res[o][p]);
        }

    printf("\n");
    }
}
}
