#include<iostream>
using namespace std;

class Base1{
public:
    void greet(){
        cout << "Hello Base 1" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout<<"Hello base 2 " << endl;
    }

};

class Drive:public Base1 , public Base2
{

public:
    void greet(){
        Base2::greet();
    }
};

int main(){

    Base1 base1obj;
    base1obj.greet();

    Drive d;
    d.greet();

    return 0;
}
