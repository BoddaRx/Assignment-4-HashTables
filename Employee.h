#ifndef Employee_h
#define Employee_h

#include <iostream>
#include <string>

using namespace std;

//A class that defines employees’ age, name, salary, and experience.
class Employee
{
private:
    string name, age, salary, experience;

public:
    Employee(string n, string a, string s, string e)
    {
        name = n;
        age = a;
        salary = s;
        experience = e;
        
    }
    
    Employee()
    {
        name = " ";
        age = " ";
        salary = " ";
        experience = " ";
    }
    
    void setName(string s)
    {
        name = s;
    }
    
    string getName()
    {
        return name;
    }
    
    void setAge(string aa)
    {
        age = aa;
    }
    
    string getAge()
    {
        return age;
    }
    
    void setSalary(string ss)
    {
        salary = ss;
    }
    
    string getSalary()
    {
        return salary;
        
    }
    
    void setExperience(string ex)
    {
        experience = ex;
    }
    
    string getExperience()
    {
        return experience;
    }
    
    string print()
    {
        cout << name << '\t' << age << '\t' << salary << '\t' << experience << endl;
        return name;
        return age;
        return salary;
        return experience;
    }
    
    
};

#endif /* Employee_h */
