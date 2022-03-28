#ifndef Employee_h
#define Employee_h
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string Job;
        float Wage;
        
    public:
        string Name;

        string getName()
        {
            return this->Name;
        }

        void setJob(string job)
        {
            this->Job = job;
        }
        string getJob()
        {
            return this->Job;
        }
        
        void setWage(float wage)
        {
            this->Wage = wage;
        }
        float getWage()
        {
            return this->Wage;
        }
};

class gardener : public Employee
{
    private:
       string Tool; 
       
    public:
        
        string HasWater;
        
        void setTool(string tool)
        {
            this->Tool = tool;
        }
        string getTool()
        {
            return this->Tool;
        } 
    
};

class gardener_assistant : public gardener
{
    private:

    public:
};




    

















#endif