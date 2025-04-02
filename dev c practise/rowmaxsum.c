#include<stdio.h>
#include<limits.h>
int main(){
    int r,c,i,j,k,l;
    printf("ENTER NUMBER OF ROWS :");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS :");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum,max=0,maxind;
    for(k=0;k<r;k++){
    	sum=0;
        for(l=0;l<c;l++){
            sum=sum + arr[k][l];
        }
        if(max<sum){
                max=sum;
                maxind=k;
            }
    }
    printf("%d IS HIGHEST SUM IS IN %d INDEXED ROW",max,maxind);
}
