#include "Galaxy.h"
#include "Star.h"
#include <string>
#include <iostream>

    int Galaxy::count = 0;

    Galaxy::Galaxy(std::string n, float sn, std::string t) : name{ n }, stars_number{ sn }, type{ t } {count++; }
    Galaxy::Galaxy() : Galaxy{ "none", 0, "unknown" } {}
    Galaxy::~Galaxy() {count--;}

    void Galaxy::add_stars(const Star& r)
    {
        stars.push_back(r);
    }
    void Galaxy::print_all ()
    {
        std::cout << "\n\n           --" << get_name() << "--\n~Number of stars : " << get_stars_number() 
        << "\nGalaxy type : " << get_type() << std::endl;
        std::cout << "Stars " << " : ";
        for (auto& st : stars)
            std::cout << st.get_name() << ", ";
    }
    int Galaxy::get_count() { return count; }

    std::string Galaxy::get_name() const { return name; }
    float Galaxy::get_stars_number() const {
        return stars_number;
    }
    std::string Galaxy::get_type() const {
        return type;
    }


