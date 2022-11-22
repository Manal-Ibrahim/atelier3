#include<iostream> 
using namespace std; 
class Shape{ 
protected : 
float l,h; 
public: 
Shape(float L,float H){ //declaration du constructeur qui donne une valeur à la largeur et à l’ hauteur 
l=L; 
h=H; 
} }; 
class triangle : public Shape{ //declacation d’un class triangle(fille) qui derivee la class Saphe 
public : 
triangle(float L, float H) : Shape(L, H) {} 
float area(){ 
return( l*h/2); 
} }; 
class rectangle : public Shape{ //declacation d’un class rectangle (fille) qui derivee la class Saphe 
public : 
rectangle(float L, float H) : Shape(L, H) {} 
float area( ){ 
return(l*h); } 
} ; 
int main (){ 
float L, H; 
cout<< " entrez la valeur de largeur : " ; 
cin>> L; 
cout<< " entrez la valeur d'hauteur : " ; 
cin>> H; 
rectangle rectangle(L,H); //l’appelle de constructeur rectangle 
triangle triangle(L,H); //l’appelle de constructeur traingle 
cout<<endl<<"l'aire de triangle est : "; 
cout << triangle.area() << endl; //l’appelle du fonction area() de class triangle 
cout<<"l'aire de rectangle est : " ; 
cout << rectangle.area() << endl; //l’appelle du fonction area() de class rectangle
return 0; }




