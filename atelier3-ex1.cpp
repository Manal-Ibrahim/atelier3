#include <iostream>
using namespace std;
class mere{
public :
//creation de methode void display dans class mere
void display(){
cout<< " bonjour , je suis class mere "<<endl;
};
};
class fille : public mere// creation la class fille de class mere
{ public:
//creation de methode void display dans class fille
void display(){
cout<< " bonjour ,je suis class fille "<<endl;
};
};
int main(){
fille F; //objet de class fille
F.display(); // l'appelle du methode display de class fille
F.mere :: display(); // l appelle du methode display de class mere
return 0;
}