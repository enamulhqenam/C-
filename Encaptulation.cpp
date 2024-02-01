#include<iostream>
using namespace std ;

class Parson
{
private:
    int age ;
    void show(){
        cout << "Enam" <<endl;
    }
public:
    string name ;
    //access private data .
    void setValue(int a ){
        // access private function.
        show();
        age = a;
        cout << age <<endl;
    }

};

int main(){
    Parson obj;
    obj.setValue(22);
    obj.name = "Hq";
    cout << obj.name ;
    return 0 ;
}

