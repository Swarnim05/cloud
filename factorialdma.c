#include <stdio.h>
#include<stdlib.h>
void factorial(int*);
void main(){
    int n,fac,i,a,j=1;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
    a=p[i];
    factorial(&p[i]);
    printf("factorial of %d = %d",a,p[i]);
}
}
void factorial(int* p){
    for(int i=*(p)-1;i>=1;i--){
        *p=(*p)*i;
    }
}