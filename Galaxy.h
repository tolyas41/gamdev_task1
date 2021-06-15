#pragma once
#include <string>
#include <vector>
#include "Star.h"


class Galaxy {
    std::string name;
    float number_of_stars;
    const std::string type;
    std::vector <Star> stars;
    static int count;
public:
//constructors and destructor
    Galaxy(const std::string& init_name, float init_numb_of_stars, const std::string& init_type);
    Galaxy(const std::string& init_type);
    Galaxy();
    ~Galaxy();

//setters
    void set_name(const std::string& set_name);
    void set_number_of_stars(float set_number_of_stars);
    void add_stars(const Star& star);

//getters
    std::string get_name () const;
    float get_number_of_stars () const;
    std::string get_type () const;
    static int get_count();

//print
    void print_all ();
};

