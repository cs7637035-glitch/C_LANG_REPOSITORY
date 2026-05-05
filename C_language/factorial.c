// #include<stdio.h>
// int main(){
//     int n,i,fact=1;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//     fact=fact*i;
//     }
//     printf("%d\n",fact);
//     return 0;

// }

#include<stdio.h>
int factorial(int n){
    if(n==0 ||n==1)
    return 1;
    else
    return n* factoeial(n-1);
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d\n",n,fact(n));
    return 0;
}