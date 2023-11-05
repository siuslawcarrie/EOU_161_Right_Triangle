
//Carrie Bailey
//CS221 Fall 2023
//October 15, 2023
//Program #3: Week 3, Right triangle
//What it does: This program takes 3 sides of a triangle from the user and determines if it is a right triangle.
 //INSTRUCTIONS
/*In a right triangle, the square of the length of the hypotenuse is equal to the sum of the squares of the other two sides. Write a program that prompts the
user to enter the lengths of the three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.*/
#include <iostream>
using namespace std;
//FUNCTIONS
void userWelcome();
int validation_integer(int side);
double calculation(int side_1_sq, int side_2_sq, int hyp_sq);
bool right_triangle(calculation);
//END VARIABLES

int main() {
    //VARIABLES
    string username;
    int side_a;
    int side_b;
    int hyp;
    double calculation(int side_a_sq, int side_b_sq, int hyp_sq);
    bool right_triangle(calculation);
    //END VARIABLES
    //PROGRAM
    cout<<"Please enter side a: "<<endl;
    cin>>side_a;
    cout<<"Please enter side b: "<<endl;
    cin>>side_b;
    cout<<"Please enter side c: "<<endl;
    cin>>hyp;
    side_a = validation_integer(side_a);  //function to validate integers
    side_b = validation_integer(side_b);  //function to validate integers
    hyp = validation_integer(hyp);  //function to validate integers
}
void userWelcome() //greeting
{
    string user_name;
    cout << "Welcome to Carrie's Triangle Calculator! What is your name? ";
    cin >> user_name;
    cout << "Hi " << user_name << "!" << endl;
    cout << "I'm going to ask you for three sides of a triangle and I will tell you whether it is a right triangle or not. "
            cout<<"Important! Side c MUST be the longest side. Side a and b are interchangeable."
    sleep(2);
    cout << "So, let's play!" << endl;