#include<stdio.h>

int A(){
    printf("hello world");
}
int B(void (*ptr)()){
    ptr();
}

int main(){
    void (*p)() = A;
    B(p);
}