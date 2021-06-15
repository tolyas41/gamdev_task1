#include "Continent.h"
#include "Country.h"
#include <string>
#include <iostream>

    int Continent::count = 0;

//constructors and destructor
    Continent::Continent (const std::string& init_name, float init_area, const std::string& init_hemisphere) 
        : name{ init_name }, area{ init_area }, hemisphere{ init_hemisphere } {
        count++; 
    }
    Continent::Continent(const std::string& init_hemisphere)
        : name{ "none" }, area{ 0 }, hemisphere{ init_hemisphere } {
        count++;
    }
    Continent::Continent() 
        : Continent {"none", 0, "unknown" } {}
    Continent::~Continent() {
        count--;
    }

//setters
    void Continent::set_name(const std::string& set_name) {
        name = set_name;
    }
    void Continent::set_area(float set_area) {
        area = set_area;
    }
    void Continent::add_countries(const Country& country) {
        countries.push_back(country);
    }

//getters
    int Continent::get_count() { 
        return count; 
    }
    std::string Continent::get_name() const {
        return name;
    }
    float Continent::get_area() const {
        return area;
    }
    std::string Continent::get_hemisphere() const {
        return hemisphere;
    }

//print all variables with getters
    void Continent::print_all() {
        std::cout << "\n\n           --" << get_name() << "--\nArea (mill of kms) : " << 
        get_area() << "\nHemosphere : " << get_hemisphere() << std::endl;
        std::cout << "Countries of " << get_name() << " : ";
        for (auto& country : countries)
            std::cout << country.get_name() << ", ";
    }