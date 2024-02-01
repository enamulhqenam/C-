#include<iostream>


using namespace std ;

class A{
public:
    int age ;
    string name ;
    void show()
    {
        cout << "Age is : "<< age << "\nName is : " << name << endl;

    }

    A(int a , string b ){
    age = a ;
    name = b ;
    }

    ~A(){
    cout << "\n\nConstructor Destroy\n" ;
    }

    A()
    {

        cout << "Constructor called successfully" << endl ;
    }

};

int main(){

    A first(23 , "Hasan");
    first.show();

    return 0;
}
