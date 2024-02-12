#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 1072;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);

    // typecasting to char reduce the value to the last 8 bits (assuming 32 bit compiler)
    char *p0;
    p0 = (char*)p;
    printf("size of integer is %d bytes\n",sizeof(char));
    printf("Address = %d, value = %d\n",p0,*p0);

    int a[]={1,2,3,4,5};
    printf("%d \n",a);
    printf("%d \n",&a[0]);
    printf("%d \n",a[0]);
    printf("%d \n",*a);
    printf("%d\n"  ,*(a+1) );
    return 0;
    getch();

}