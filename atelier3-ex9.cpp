#include<iostream>
using namespace std;
class stc {
static int s; //declaration de variable static
public:
string nom;
string prenom;
void call(string n, string p)// fonction call
{
nom=n;
prenom=p;
s++;
}
int afficher(){
cout<<"le nom : "<<nom<<endl;
cout<<"le prenom : "<<prenom<<endl;
}
static void affi();
};
int stc:: s=0;
void stc:: affi() // fonction static
{
cout<<"le nombre de fois la fonction call a repeter est :"<<s<<endl;
}
int main(){
stc S; //creation d'objet de class stc
S.call("Manal", "Ibrahim"); //l'appelle de la fonction call
S.afficher(); //l'appelle de la fonction afficher pour afficher les donnees qui entrer dans la fonction call
cout<<endl ;

S.call("Naima","Khatib");
S.afficher();
cout<<endl ;
stc::affi();
}