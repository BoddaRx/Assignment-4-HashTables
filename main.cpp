#include <iostream>
#include <string>
#include "Hash.h"
#include "LinkedList.h"
#include "Employee.h"

using namespace std;

int main()
{
    
    Employee e;
    
    cout << "\t Employees' information" << endl;
    
    cout << "Name \t    Age Salary  Experience \n" << endl;
    
    e.setName("Mina     ");
    e.setAge("30");
    e.setSalary("10000");
    e.setExperience("4");
    e.print();
    
    e.setName("Fawzy    ");
    e.setAge("45");
    e.setSalary("5000");
    e.setExperience("8");
    e.print();
    
    e.setName("Yara     ");
    e.setAge("19");
    e.setSalary("2000");
    e.setExperience("0");
    e.print();
    
    e.setName("Mariam   ");
    e.setAge("32");
    e.setSalary("8000");
    e.setExperience("2");
    e.print();
    
    e.setName("Ayman    ");
    e.setAge("33");
    e.setSalary("4000");
    e.setExperience("8");
    e.print();
    
    e.setName("Roshdy   ");
    e.setAge("28");
    e.setSalary("9000");
    e.setExperience("3");
    e.print();
    
    e.setName("Aya      ");
    e.setAge("26");
    e.setSalary("6000");
    e.setExperience("3");
    e.print();
    
    e.setName("Abdullah");
    e.setAge("29");
    e.setSalary("7000");
    e.setExperience("4");
    e.print();
    
    e.setName("Fatma    ");
    e.setAge("21");
    e.setSalary("3000");
    e.setExperience("1");
    e.print();
    
    cout << endl << endl;
    
    HashTable h;
    
    cout << "Chaining: \n" << endl;
    
    h.insert("1111", "Mina");
    h.insert("2222", "Fawzy");
    h.insert("3333", "Yara");
    h.insert("4444", "Mariam");
    h.insert("5555", "Ayman");
    h.insert("6666", "Roshdy");
    h.insert("7777", "Aya");
    h.insert("8888", "Abdullah");
    h.insert("9999", "Fatma");
    h.insert("0000", "Mohamed");

    h.print();
    
    cout << endl;
    
    cout << "After removing Mohamed \n" << endl;
    
    h.remove("0000");
    
    h.print();
    
    cout << endl;
    
    cout << "Linear: \n" << endl;
    
    return 0;
}
