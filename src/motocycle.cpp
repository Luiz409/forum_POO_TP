#include "motocycle.h"

motocycle::motocycle():vehicle(){
    this->model = "titan";
    this->color = "red";
}

motocycle::motocycle(const motocycle &v):vehicle(){
    this->model = v.get_model();
    this->color = v.get_color();
}

motocycle::~motocycle(){}

void motocycle::set_model(string x){
    this->model = x;
}

void motocycle::set_color(string y){
    this->color = y;
}



