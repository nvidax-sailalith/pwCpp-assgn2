//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the Radius of the cylinder:\n";
    cin>>r;
    cout<<"Enter the Height of the cylinder:\n";
    cin>>h;
    float v=3.14159*r*r*h;
    cout<<"Volume of cylinder is: "<<v;
}