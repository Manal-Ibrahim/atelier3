#include<iostream>
using namespace std;

class Animal{
    string nom;
    int age;

    public:
    void set_value (int a,string n ){
      age=a;
      nom=n;
      cout<<"le nom: "<<nom<<endl;
      cout<<"l age : "<<age<<endl;
    }
};
class Zebra :pubic Animal{
    public:
         Zebra(){
            cout<<"le lieu d origine: Afrique"<<endl;
         }
};
class Dolphin: public Animal{
    public:
    Dolphin(){
        cout<<"le lieu d origine : Amerique du Nord "<<endl;
    }

};
int main(){
   Zebra Z;
   Z.set_value(20,"Zebra") ;
   cout<<endl;
   Dolphin D;
    D.set_value(15,"Dolphin") ;
}

}