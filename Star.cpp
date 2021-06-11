#include "Star.h"
#include <string>
#include <iostream>

    int Star::count = 0;

    Star::Star(std::string n, std::string t, float d) : name{ n }, type{ t }, dist{ d } {count++; }
    Star::Star() : Star{ "none", "unknown", 0 } {}
    Star::~Star() {count--;}

    void Star::print_all() const {
        std::cout << "\n           --" << get_name() << "--\nType : " << get_type() << 
        "\nDistance to the center of the galaxy : " << get_dist() << " thousands of light-years" << std::endl;
    }
    int Star::get_count() { return count; }
    std::string Star::get_name() const { return name; }
    std::string Star::get_type() const { return type; }
    float Star::get_dist() const { return dist; }


