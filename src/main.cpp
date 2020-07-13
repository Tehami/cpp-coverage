#include <string>
using std::string;

string triangle(int sidea,int sideb,int sidec){

    //check whether all sides are equal  
    if(sidea==sideb && sideb==sidec)
    {  
        return("equilateral");  
    }  
    //check whether two sides are equal  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) 
    {  
        return("isosceles");  
    }
    //check whether no sides are equal    
    else 
    {  
        return("scalene");  
    }  
}