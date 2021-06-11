#include "River.h"
#include <string>
#include <iostream>

    int River::count = 0;
    River::River(std::string n, float le) : name{ n }, length{ le } {count++; }
    River::River() : River{ "none", 0 } {}
    River::~River() {count--;}
    //methods
    std::string River::get_name() { 
        return name; 
    }
    float River::get_length() {
        return length;
    }
    void River::get_all() {
        std::cout << "\n           --" << get_name() << "--\nLength : " << get_length() << std::endl;
    }
    int River::get_count() { return count; }


