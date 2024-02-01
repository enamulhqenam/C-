//find are are circumference onstructor and destructor c++

#include<iostream>
#include<cmath>
using namespace std ;

class Circle{

private:
    double radius;
    double area;
    double circumference;

public:
    Circle(double r){
        radius = r ;
        calculateArea();
        calculateCircumference();

        cout << "Constructor called :" << endl ;

    }
    ~Circle(){
        cout << "destructor called" << endl ;
    }

    void calculateArea(){
        area = M_PI*radius*radius ;
    }

    void calculateCircumference(){
        circumference = 2*M_PI*radius ;
    }

    void displayInfo(){
        cout << "Radius : " << radius <<endl;
        cout << "Area : " << area <<endl ;
        cout << "Circumference : " << circumference <<endl;
    }
};

int main()
{

double circleRadius ;
cout << "Enter the radius of the circle : " ;
cin >> circleRadius;

Circle myCircle(circleRadius);

myCircle.displayInfo();

return 0;

}
