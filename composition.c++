

// creating objects of other class inside a class is called composition

#include<iostream>
#include<string>
using namespace std;

class birthday{
    public:
        birthday(int m, int d, int y)
        {
            month = m;
            day = d;
            year = y;
        }
        void print(){
            cout << month << "/"<< day<<"/"<< year<< endl;
        }
    private:
        int month;
        int day;
        int year;
    
};

class people{
    public:
        people(string x, birthday bd)
        :name(x)
        ,dob(bd) // Here I used member initialization cause its an object we cannot ' = ' object.
        {
            //dob = bd; // gives the warning of already declared
        }
        void printinfo(){
            cout << name << " was born on : ";
            dob.print();
        }
    private:
        string name;
        birthday dob;
    
};

int main()
{
    birthday b(10,3,2000);
    people p("Yaswanth", b);
    p.printinfo(); 
    //b.print();
    return 0;
}