#include "car.h"

car::car():vehicle(){
  this-> color = "white";
  this-> model = "gol";
}

car::car(const car &c):vehicle(){
    this->color = c.get_color();
    this->model = c.get_model();
}

car::~car(){}

void car::set_model(string x){
    this->model = x;
}

void car::set_color(string y){
    this->color = y;
}

car car::operator=(const car &c){
    car aux(c);
    this->color = c.get_color();
    this->model = c.get_model();
    return aux;
}


