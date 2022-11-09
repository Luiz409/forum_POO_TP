#include "vehicle.h"

vehicle::vehicle(){
    this->eng_capacity = 0;
    this->top_speed = 0;
}

vehicle::vehicle(const vehicle &v){
    this->eng_capacity = v.get_eng_capacity();
    this->top_speed = v.get_top_speed();
}

vehicle::~vehicle(){}

void vehicle::set_eng_capacity(float x){
    this->eng_capacity = x;
}

void vehicle::set_top_speed(float y){
    this->top_speed = y;
}

vehicle vehicle::operator=(const vehicle &v){
    vehicle aux(v);
    this->eng_capacity = v.get_eng_capacity();
    this->top_speed = v.get_top_speed();
    return aux;
}


