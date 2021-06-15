#include "River.h"
#include <string>
#include <iostream>

    int River::count = 0;
    
//constructors and destructor
    River::River(const std::string& init_name, float init_length) 
        : name{ init_name }, length{ init_length } {
        count++; 
    }
    River::River() 
        : River{ "none", 0 } {}
    River::~River() {
        count--;
    }
    
//setters
    void River::set_name(const std::string& set_name) {
        name = set_name;
    }
    void River::set_length(float set_length) {
        length = set_length;
    }

//getters
    std::string River::get_name() const {
        return name; 
    }
    float River::get_length() const {
        return length;
    }
    int River::get_count() {
        return count; 
    }

//print with getters
    void River::print_all() const {
        std::cout << "\n           --" << get_name() << 
        "--\nLength : " << get_length() << std::endl;
    }
    


