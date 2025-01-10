#include<iostream>
using namespace std;

class Animal{
   public : 
   virtual void sounds(){
     cout << "animal sounding\n";
   }
   void eat(){
      cout << "animal eating\n ";
   }
};

class Dog:public Animal{
      public:
      void sounds(){
        cout << "dog sounds bow bow.....\n";
      }
};

class Cat:public Animal{
      public:
      void sounds(){
        cout << "dog sounds mew mew.....\n";
      }
};


class Math{
    public : 
    void add(string n1,string n2){
        cout << "add menthod was called with two string\n";
        cout << n1+n2;
    }
    void add(float n1,float n2){
        cout << "add menthod was called with two integers\n";
        cout << n1+n2;
    }
};

int main(int argc, char const *argv[])
{
    Animal  a;
    Animal* a1;
    
    a.sounds();
    a1 = new Dog();
    a1->sounds();
    a1 = new Cat();
    a1->sounds();

    Math m;
    m.add("20","20.5");
    return 0;
}
