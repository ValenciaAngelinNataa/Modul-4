#include <stdio.h>

int main(){
int a, b;
scanf("%d %d", &a, &b);
if(a>b){
    printf("%d %d\n", b, a);}
else if(b>a){
    printf("%d %d\n", a, b);}
}
