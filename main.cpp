#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

void gardenerHasWater(bool hasWater)
{
    if(hasWater == true)
    {
       cout <<"He has water"<<endl;
    }
    else
    {
        cout <<"He hasn't water"<<endl;
    }
}

int main()
{   
    gardener p1;
    gardener_assistant p2;

    p1.Name = "Joazinho";
    p1.setWage(1500);
    p1.setJob("Gardener");
    p1.setTool("big Scissors");
    p1.hasWater = true;

    cout<<p1.Name <<endl;
    cout<<p1.getJob() <<endl;
    cout<<"your wage is "<< p1.getWage() <<endl;
    cout<<"and his tool is: "<<p1.getTool() <<endl;
    gardenerHasWater(p1.hasWater);

    p2.Name ="Clebinho cabide";
    p2.setWage(700);
    p2.setJob("gardener assistant");
    p2.setTool("rake");
    p2.hasWater = false;

    cout<<"\n"<<p2.Name <<endl;
    cout<<p2.getJob() <<endl;
    cout<<"your wage is "<< p2.getWage() <<endl;
    cout<<"and his tool is: "<<p2.getTool() <<endl;
    gardenerHasWater(p2.hasWater);

    return 0;
}