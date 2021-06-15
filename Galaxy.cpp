#include "Galaxy.h"
#include "Star.h"
#include <string>
#include <iostream>

    int Galaxy::count = 0;
//constructors and destructor
    Galaxy::Galaxy(const std::string& init_name, float init_numb_of_stars, const std::string& init_type) 
        : name{ init_name }, number_of_stars{ init_numb_of_stars }, type{ init_type } {
        count++; 
    }
    Galaxy::Galaxy(const std::string& init_type)
        : name{ "none" }, number_of_stars{ 0 }, type{ init_type } {
        count++;
    }
    Galaxy::Galaxy() 
        : Galaxy{ "none", 0, "unknown" } {}
    Galaxy::~Galaxy() {
        count--;
    }

//setters
    void Galaxy::set_name(const std::string& set_name) {
        name = set_name;
    }
    void Galaxy::set_number_of_stars(float set_number_of_stars) {
        number_of_stars = set_number_of_stars;
    }
    void Galaxy::add_stars(const Star& star) {
        stars.push_back(star);
    }

//getters
    int Galaxy::get_count() { 
        return count; 
    }
    std::string Galaxy::get_name() const { 
        return name; 
    }
    float Galaxy::get_number_of_stars() const {
        return number_of_stars;
    }
    std::string Galaxy::get_type() const {
        return type;
    }

//print all with getters
    void Galaxy::print_all() {
        std::cout << "\n\n           --" << get_name() << "--\n~Number of stars : " << get_number_of_stars() 
        << "\nGalaxy type : " << get_type() << std::endl;
        std::cout << "Stars " << " : ";
        for (auto& star : stars)
            std::cout << star.get_name() << ", ";
    }


