#include<iostream>
using namespace std;

class animal
{
    private:
        int age;
        bool gender;
    
    public:
        int run_speed;
        string sound;

        void set_all(int a, bool g, int r, string sound);
        void set_age(int a)
        {
            age = a;
        }
        
        void get_all();
        void get_age()
        {
            cout<<age;
        }
        void get_gender()
        {
            cout<<"gender = "<<(gender? "Male\n" : "female\n");
        }
        

};

void animal::set_all(int a, bool g, int r, string s)
{
    age = a;
    gender = g;
    run_speed = r;
    sound = s;
}

void animal::get_all()
{
    cout<<"age = "<<age<<endl;
    cout<<"gender = "<<(gender? "Male\n" : "female\n");
    cout<<"speed = "<<run_speed<<endl;
    cout<<"sound = "<<sound<<endl;
}
int main(){
    animal dog;
    animal cat;
//  cout<<endl;
//     cout<<"About my dog\n";
     dog.set_all(2,1,10,"bark");
//     dog.get_all();
//  cout<<endl;
//     cout<<"About my cat\n";
     cat.set_all(1,0,15,"Meow");
//     cat.get_all();
//  cout<<endl;

    // cout<<"can you tell me your dogs age again?\n";
    // // cout<<"He is "<<dog.age; // this will give error
    // cout<<"He is " , dog.get_age(); 

    //we can access public variables of any class easily,
    //but if we want to access privet variables we have to create a funcution in class to do that;


    cout<<"Before his speed was "<<dog.run_speed<<endl;
    dog.run_speed = 11; // Speed is updated
    dog.set_age(3);
    cout<<"He grew up Now he can run faster at speed "<<dog.run_speed<<endl;
    dog.get_all();

    cout<<endl;
    cout<<endl;

    cout<<"My cat also grew up"<<endl;
    cat.set_age(2);
    cat.get_all();
    return 0;
}