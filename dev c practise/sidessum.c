#include<stdio.h>
int main(){
    int r,c,i,j;
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
    int l1,r1;
    printf("ENTER NUMBER OF coordinates of 1 side of rectangle :");
    scanf("%d",&l1);
    scanf("%d",&r1);
    int l2,r2;
    printf("ENTER NUMBER OF coordinates of 2 side of rectangle :");
    scanf("%d",&l2);
    scanf("%d",&r2);
    int sum=0;
    for(i=l1;i<=l2;i++){
        for(j=r1;j<=r2;j++){
            sum=sum + arr[i][j];
        }
    }
    printf("%d",sum);
}
