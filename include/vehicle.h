#ifndef VEHICLE_H
#define VEHICLE_H


class vehicle{
    public:
        vehicle();
        vehicle(const vehicle &v);
        virtual ~vehicle();
        void set_eng_capacity(float x);
        void set_top_speed(float y);
        float get_eng_capacity() const {return this->eng_capacity;}
        float get_top_speed() const {return this ->top_speed;}

        vehicle operator = (const vehicle &v);

    private:
        float eng_capacity;
        float top_speed;
};

#endif // VEHICLE_H
