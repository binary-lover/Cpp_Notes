#include<iostream>
using namespace std;

void welcome(string name){
    static int a = 0;
    cout<<"welcome "<<name<<" "<<a<<" times"<<endl;
    a++;
}

int main(){
    welcome("lucky");
    welcome("lucky");
    welcome("lucky");
    welcome("lucky");
    int arr[4] = {2,3,4,5};
    int a = 4;
    int *b = &a;
    int **c = &b;
    // cout<<**c;

    int w = 9;
    int &x = w;
    cout<<x;
    return 0;
}