#include<iostream>
using namespace std;

struct name
{
    string name;
};

int main(){
    struct name lucky;
    lucky.name = "lucky";
    cout<<lucky.name;
    return 0;
}