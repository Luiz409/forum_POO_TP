#include <iostream>
#include "car.h"
#include "motocycle.h"

using namespace std;

int main(){

   motocycle m1;
   m1.set_eng_capacity(0.6);
   m1.set_top_speed(240);
   m1.set_color("Gold");
   m1.set_model("Hornet");

   cout << "Motocycle 1(m1): "<<endl;
   cout << "   eng_capacity: "<<m1.get_eng_capacity()<<endl;
   cout << "   top_speed: "<<m1.get_top_speed()<<endl;
   cout << "   color: "<<m1.get_color()<<endl;
   cout << "   model: "<<m1.get_model()<<endl<<endl;

   motocycle m2;
   m2 = m1;

   cout << "Motocycle 2(m2): "<<endl;
   cout << "   eng_capacity: "<<m2.get_eng_capacity()<<endl;
   cout << "   top_speed: "<<m2.get_top_speed()<<endl;
   cout << "   color: "<<m2.get_color()<<endl;
   cout << "   model: "<<m2.get_model()<<endl<<endl;



   car c1;
   c1.set_eng_capacity(3.0);
   c1.set_top_speed(300);
   c1.set_color("Black");
   c1.set_model("Opala SS");

   cout << "Car 1 (c1): "<<endl;
   cout << "   eng_capacity: "<<c1.get_eng_capacity()<<endl;
   cout << "   top_speed: "<<c1.get_top_speed()<<endl;
   cout << "   color: "<<c1.get_color()<<endl;
   cout << "   model: "<<c1.get_model()<<endl<<endl;

   car c2;
   c2 = c1;
   cout << "Car 2 (c2): "<<endl;
   cout << "   eng_capacity: "<<c2.get_eng_capacity()<<endl;
   cout << "   top_speed: "<<c2.get_top_speed()<<endl;
   cout << "   color: "<<c2.get_color()<<endl;
   cout << "   model: "<<c2.get_model()<<endl<<endl;


    return 0;
}
