
#include<iostream>
using namespace std;

class A{
protected:
    int a;
public:
    void getA(int n){
        a=n;
    }
};

class B {
protected:
    int b;
public:
    void getB(int n){
        b = n;
    }
};

class C : public A , public B
{

  public:
      void show()
      {

            cout << "the value of a is : " << a <<endl;
            cout << "the value of b is : " << b <<endl;
            cout << "additaion of a and b : " << a+b <<endl;
      }
};

int main()
{

    C obj;
    obj.getA(10);
    obj.getB(12);

    obj.show();
    return 0;
}
