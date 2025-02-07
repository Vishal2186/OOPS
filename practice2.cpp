#include<iostream>
using namespace std;

class employee
{
    private:
        int age;
        int salary;
        string address;
    public:
        string name;
        int rank;
        int working_days;
        string shift;

        void set_all(string n,int a,int s,string ad,int r,int w, string sh);
        void set_age(int a);
        void set_salary(int s);
        void set_adress(string ad);
        
        void get_all();
        void get_age();
        void get_salary();
        void get_adress();

};

void employee::set_all(string n,int a,int s,string ad,int r,int w, string sh)
{
    name = n;
    age = a;
    salary = s;
    address = ad;
    rank = r;
    working_days = w;
    shift = sh;
}
void employee::set_age(int a)
{
    age = a;
}
void employee::set_salary(int s)
{
    salary = s;
}
void employee::set_adress(string ad)
{
    address = ad;
}


void employee::get_all()
{
    cout<<"name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"salary = "<<salary<<endl;
    cout<<"address = "<<address<<endl;
    cout<<"rank = "<<rank<<endl;
    cout<<"workind days = "<<working_days<<endl;
    cout<<"shift = "<<shift<<endl;
}
void employee::get_age()
{
    cout<<"Age = "<<age<<endl;
}
void employee::get_salary()
{
    cout<<"salary = "<<salary<<endl;
}
void employee::get_adress()
{
    cout<<"address = "<<address<<endl;
}

int main(){
    employee Gopal;
    employee manish;
    employee vikas;
    employee vishal;

    Gopal.set_all("Gopal",24,80000,"indore",1,5,"day");
    manish.set_all("Mainsh",19,50000,"Rewapur",10,6,"night");
    vikas.set_all("Vikas",18,50000,"Harsud",10,6,"day");
    vishal.set_all("Vishal",20,50000,"rewapur",10,6,"night");


cout<<endl;
cout<<endl;
    Gopal.get_all();
cout<<endl;
cout<<endl;
    manish.get_all();
cout<<endl;
cout<<endl;
    vikas.get_all();
cout<<endl;
cout<<endl;
    vishal.get_all();
cout<<endl;
cout<<endl;

    

    return 0;
}