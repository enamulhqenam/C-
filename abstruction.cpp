
#include<iostream>
using namespace std ;

class UserMessage
{
    public:
    virtual void sendMessage() = 0 ;

};

class Karim : public UserMessage
{
public:
    void sendMessage()
    {
        cout <<"Hello this is karim massage " << endl;

    }
};

class Rahim : public UserMessage
{

public:
    void sendMessage()
    {

        cout <<"Hello this is Rahami massatge" << endl;
    }
};

int main()
{
    //pointer variable cara abbustructor er class banano jay na.
    UserMessage *obj;

    Karim k ;
    Rahim r ;

    obj = &k ;
    obj->sendMessage();


}

