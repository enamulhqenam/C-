#include<iostream>

using namespace std ;

class Teacher
{
public:
    int id ;
    string department ;
    string address ;

    Teacher(int id , string department , string address){
        this->id = id;
        this->department = department ;
        this->address = address ;
    }

};

class Student
{
public:
    Teacher *teacher; //create pointer variable
    int id ;
    string name ;
    string email ;


    Student(int id , string name ,string email , Teacher *teacher ){
        this->id = id;
        this-> name = name;
        this->email = email ;
        this->teacher = teacher;


        cout << "Student Id :" << this->id << endl;
        cout << "Student Name : " << this->name << endl;
        cout << "Student email : " << this->email << endl;
        cout << "Teacher Id : " << this->teacher->id << endl;
        cout << "Teacher Department : " << this->teacher->department << endl ;
        cout << "Teacher Address : " << this->teacher->address << endl ;
    }


};

int main(){
    Teacher t1=Teacher(123 , "science" , "khulna");
    Student s1=Student(234 , "Enam" , "enam@gmail.com" , &t1);

    return 0;

}
