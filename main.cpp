// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Buoyancy Prog.cpp
// Last Modification Date: 3/4/2017
// Author1 and ID and Group: ahmed magdy 20170027
// Author2 and ID and Group: ahmed mostafa 20170033
// Teaching Assistant: xxxxx xxxxx
// Purpose:..........
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   double F=0 , V=0 , Y=62.4 , r=0 , pi=3.1415 , W=0 ;
    cout << "Hello! this is Buoyancy program that is the ability of an object to float." << endl;
    cout<<"Please enter the radius of the sphere: ";
    cin>>r;
    V=(4/3)*pi*pow(r,3);
    cout<<"Please enter the weight of the object in pound: ";
    cin>>W;
    F=V*Y;
    if (F>=W){
        cout<<"The Object Will Float"<<endl;
    }
    else
    {
        cout<<"The Object Will sink"<<endl;
    }
    return 0;
}
