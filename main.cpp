#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{   
    gardener p1;
    gardener_assistant p2;

    p1.Name = "Joazinho";
    p1.setWage(1500);
    p1.setJob("Gardener");
    p1.setTool("big Scissors");
    p1.HasWater = "he has water";

    cout<<p1.Name <<endl;
    cout<<p1.getJob() <<endl;
    cout<<"your wage is "<< p1.getWage() <<endl;
    cout<<"and yours tool is: "<<p1.getTool() <<endl;
    cout<<p1.HasWater <<endl;

    p2.Name ="Clebinho piroka";
    p2.setWage(700);
    p2.setJob("gardener assistant");
    p2.setTool("rake");
    p2.HasWater = "he hasn't water";

    cout<<"\n"<<p2.Name <<endl;
    cout<<p2.getJob() <<endl;
    cout<<"your wage is "<< p2.getWage() <<endl;
    cout<<"and yours tool is: "<<p2.getTool() <<endl;
    cout<<p2.HasWater <<endl;
    

    
        
    
    

    
  
    return 0;
}