/*there is given the radius of a circle .
find are are circumference of it parameterized constructor c++ */

#include<iostream>
#include<cmath>

using namespace std ;

class Circle
{

private:
    double radius ;

// Parameterized constructor initialize the radius .
public:
    Circle(double r){

        radius = r ;
    }

//Function to calculate the are of the circle .
    double CalculateArea() const{
        return M_PI * radius*radius ;
    }

//Function to calculate the circumference of the circle.
    double calculateCircumference() const{
        return 2*M_PI*radius ;

    }
};


int main()
{
    double circleRadius;

    cout<< "Enter the radius of the circle : ";
    cin >> circleRadius ;

//create a circle object using the parameterized constructor.
    Circle myCircle(circleRadius);

    cout << "Area of the circle :" << myCircle.CalculateArea() << endl;
    cout << "Circumference of the circle : " <<myCircle.calculateCircumference() << endl ;


}
