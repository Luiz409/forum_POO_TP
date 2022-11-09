#ifndef MOTOCYCLE_H
#define MOTOCYCLE_H

#include "vehicle.h"
#include <iostream>

using namespace std;

class motocycle:public vehicle{
    public:
        motocycle();
        motocycle(const motocycle &m);
        virtual ~motocycle();
        void set_model(string x);
        void set_color(string y);
        string get_model() const {return this->model;}
        string get_color() const {return this ->color;}

    private:
        string model;
        string color;
};

#endif // MOTOCYCLE_H
