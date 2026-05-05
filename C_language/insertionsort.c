#include<stdio.h>
int main(){
    int i,j,a[10],key;

    //input array
    for(i=0;i<10;i++){
        printf("enter a array number ");
        scanf("%d",&a[i]);
    }
     
// print original array
printf("enter a original array elements ");
for(i=0;i<10;i++){
    printf("%d",a[i]);
}

for(i=1;i<10;i++){
    key=a[i];
    j=i-1;

while(j>=0 && a[j]>key){
    a[j+1]=a[j];
    j--;
}
a[j+1]=key;
}
printf("\n sorted array is ");
for(i=0;i<10;i++){
    printf("%d ",a[i]); 
}
return 0;
}

