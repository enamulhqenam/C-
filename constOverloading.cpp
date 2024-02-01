#include<iostream>
using namespace std ;

class construstor
{

public :
    float area ;

    construstor()
    {
        area = 0;
    }
    construstor(int a , int b ){
        area = a*b ;
    }

    void display(){
    cout << "area is : " << area << endl;
    }
};

int main(){

construstor obj;
construstor obj2(10,20);

obj.display();
obj2.display();
return 1;
}
