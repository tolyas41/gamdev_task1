#pragma once
#include <string>
#include <vector>
#include "Star.h"


class Galaxy {
    std::string name;
    float stars_number;
    const std::string type;
    std::vector <Star> stars;
    static int count;
public:
    Galaxy(std::string, float, std::string);
    Galaxy();
    ~Galaxy();

    std::string get_name () const;
    float get_stars_number () const;
    std::string get_type () const;

    void print_all ();
    static int get_count();

    void add_stars(const Star&);
};

