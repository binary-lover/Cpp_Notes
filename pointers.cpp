#include<iostream>
using namespace std;
// void swap(int *a, int *b){
//     int temp = *b;
//     *b = *a;
//     *a = temp;
//     cout<<"a :"<<*a<<" b: "<<*b<<endl;
// }
// void sum(int a[]){
//     cout<<sizeof(a);
//     cout<<a;
// }

// int main(){
    // int a = 4;
    // int b = 5;
    // swap(&a,&b);
    // cout<<"a :"<<a<<" b: "<<b<<endl;
    // int *p = &a;
    // cout<<p<<endl;
    // cout<<*p<<endl<<endl;

    // p+=1;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // *p+=1;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<a<<endl;


    // int a = 172;
    // int *p;
    // p = &a;
    // printf("size of integer is %d bytes\n",sizeof(int));
    // printf("Address = %d, value = %d\n",p,*p);

    // char *p0;
    // p0 = (char*)p;
    // printf("size of integer is %d bytes\n",sizeof(char));
    // printf("Address = %d, value = %d\n",p0,*p0);

    // cout<<"Address = "<<p0<<" address: "<<*p0<<endl;
 

    
//     int a[]={1,2,3,4,5};
//     // printf("%d \n",a);
//     // cout<<a<<endl;
//     // printf("%d \n",&a[0]);
//     // cout<<&a[0]<<endl;
//     // printf("%d \n",a[0]);
//     // cout<<a[0]<<endl;
//     // printf("%d \n",*a);
//     // cout<<*a<<endl;
//     // printf("%d\n"  ,*(a+1) );
//     // cout<<*(a+1)<<endl;

//     int seize = sizeof(a);
//     cout<<seize<<endl;
//     sum(a);


//     return 0;
// }      
int sum (int* arr,int size){
    int i,sum=0;
    for (i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    // int a[]={1,2,3,4,5};
    // int size = sizeof(a)/sizeof(a[0]);
    // int b = sum(a,size);
    // cout<<b;
    char C[4];
    C[0]='l';
    C[1]='u';
    C[2]='c';
    C[3]='\0';
    char A[4]="lcu";
    cout<<A<<endl;
    // cout<<C;
    // printf("%s",C);
    for (int i = 0; i < sizeof(C); i++)
    {
        cout<<C[i]<<endl;
    }
    return 0;

}