#include<iostream>
using namespace std;

class Bike;

class Person{
     
     string address;
     Bike * mybike;
     protected :
     string name;
     string uid;
     public:
     
};

class Teacher:Person{
   friend class Teacher_clone;
   public:
   void setName(string s){
      name = s;
   }
   string getName(){
      return name ;
   }
};

class Bike{
    string vehicle_no;
};

class Teacher_clone{
    public:
    string getName(Teacher t){
        return t.name;
    }
};


int main(int argc, char const *argv[])
{
    Teacher t;
    t.setName("Ananta");
    cout << t.getName();
    Teacher_clone tc;
    cout << tc.getName(t);
    return 0;
}
