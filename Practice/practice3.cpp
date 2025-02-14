#include<iostream>
#include<thread>
using namespace std;

class object
{
    private:
        int position;
        int size;
        int get_size();
        int get_position();
    public:
        void set_size(int s);
        void set_position(int p);
        void display();

};
int object::get_position()
{
    return position;
}
int object::get_size()
{
    return size;
}
void object::display()
{

    

    for (int i = 1; i <= get_size(); i++)
    {
        for (int j = 1; j <= get_position(); j++)
        {
            cout<<"  ";
        }

        for (int j = 1; j <= get_size(); j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
}
void object::set_position(int p)
{
    position = p;
}
void object::set_size(int s)
{
    size = s;
}

int main(){
    object obj1;
    object obj2;
    object obj3;
    int p1 = 0,p2=0,p = 0,n = 80;
    while (n--)
    {
        system("clear");
        obj1.set_size(3);
        obj1.set_position(p);
        obj1.display();
        cout<<endl;
        cout<<endl;
        cout<<endl;
        obj2.set_size(4);
        obj2.set_position(p1);
        obj2.display();
        cout<<endl;
        cout<<endl;
        cout<<endl;
        obj2.set_size(5);
        obj2.set_position(p2);
        obj2.display();
        
        
        (p<80)?p+=3:p=0;
        (p1<80)?p1+=2:p1=0;
        (p2<75)?p2+=1:p2=0;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    
    return 0;
}