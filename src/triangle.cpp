#include "triangle.h"

string triangle(int sidea,int sideb,int sidec){

    //check whether all sides are equal  
    if(sidea==sideb && sideb==sidec)
    {  
        cout<<"This is equilateral triangle"<<"\n";
        return("equilateral");  
    }  
    //check whether two sides are equal  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) 
    {  
        cout<<"This is isosceles triangle"<<"\n";
        return("isosceles");  
    }
    //check whether no sides are equal    
    else 
    {  
        cout<<"This is scalene triangle"<<"\n";
        return("scalene");  
    }  
}
