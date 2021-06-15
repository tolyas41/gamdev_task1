#include "Star.h"
#include <string>
#include <iostream>

    int Star::count = 0;

//constructors and destructor
    Star::Star(const std::string& init_name, const std::string& init_type, float init_distance) 
        : name{ init_name }, type{ init_type }, distance{ init_distance } {
        count++; 
    }
    Star::Star() 
        : Star{ "none", "unknown", 0 } {}
    Star::~Star() {
        count--;
    }

//setters
    void Star::set_name(const std::string& set_name) {
        name = set_name;
    }
    void Star::set_type(const std::string& set_type) {
        type = set_type;
    }
    void Star::set_distance(float set_distance) {
        distance = set_distance;
    }

//getters
    int Star::get_count() { 
        return count; 
    }
    std::string Star::get_name() const { 
        return name; 
    }
    std::string Star::get_type() const { 
        return type; 
    }
    float Star::get_distance() const { 
        return distance; 
    }

//print all with getters
    void Star::print_all() const {
        std::cout << "\n           --" << get_name() << "--\nType : " << get_type() << 
        "\nDistance to the center of the galaxy : " << get_distance() << " thousands of light-years" << std::endl;
    }


