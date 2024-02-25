#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    char section;

public:
    void setter(string name, int roll_no, char section)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->section = section;
    }

    void getter()
    {
        cout << this->name << " " << this->roll_no << " " << this->section;
    }
};

class Parents
{
private:
    int x;

protected:
    int z;
public:
    int y;
    void set(int a, int b){
        this->y=a;
        this->z=b;
    }
};

class Child: public Parents{
    int clas =34;
    
    public:
    void set(int a, int b){
        this->y=a;
        this->z=b;
    }
    void get(){
        cout<<this->clas<<" "<<this->y<<" "<<this->z;
    }

};



int main()
{
    // Student st1;
    // st1.setter("binary",23,'C');
    // st1.getter();

    // inheritence
    Parents p1;
    Child c1;
    p1.set(11,22);
    c1.get();

    return 0;
}