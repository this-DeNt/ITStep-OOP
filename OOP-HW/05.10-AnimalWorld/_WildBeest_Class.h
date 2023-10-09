#pragma once
#include "animalframework.h"


class WildBeest: public Animal {

    private:

        char* _name;

    public:

        WildBeest(const double _InputWeight, const double _InputBAlive, const Continent& _InputCont, const char* _InputName);

        void eat(void);

        void print(void);

        ~WildBeest();
};