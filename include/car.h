#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <iostream>

using namespace std;


class car: public vehicle{
    public:
        car();
        car(const car &c);
        virtual ~car();

        void set_model(string x);
        void set_color(string y);
        string get_model()const{return this->model;}
        string get_color()const{return this->color;}

        car operator = (const car &c);

    private:
        string color;
        string model;
};

#endif // CAR_H
