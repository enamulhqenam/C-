#include<iostream>


using namespace std;

    void show();
    void show(int i);
    void show(char ch);
    void show(int i , char ch);

    int main(){
        show();
        show(15);
        show('A');
        show(24 , 'B');

    }

    void show()
    {
        cout << "Nothing to show : " << endl ;

    }
    void show(int i)
    {
        cout << "show the value of i : " << i << endl ;
    }

    void show(char ch)
    {
        cout << "Show the value of character ch : " << ch << endl ;
    }

    void show(int i , char ch)
    {
        cout << "Show the value of integer number : " << i << " & character : " << ch ;
    }
