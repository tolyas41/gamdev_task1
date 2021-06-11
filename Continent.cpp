#include "Continent.h"
#include "Country.h"
#include <string>
#include <iostream>
int Continent::count = 0;
//constructors and destructor
Continent::Continent (std::string n, float a, std::string h) : name{ n }, area{ a }, hemi{ h } {count++; }
Continent::Continent() : Continent{"none", 0, "unknown" } {}
Continent::~Continent() {count--;}
//methods
void Continent::add_countrs (const Country& c)  {
    countrs.push_back(c);
}

void Continent::print_all()  {
    std::cout << "\n\n           --" << get_name() << "--\nArea (mill of kms) : " << get_area() << "\nHemosphere : " << get_hemi() << std::endl;
    std::cout << "Countries of " << get_name() << " : ";
    for (auto& cn : countrs)
        std::cout << cn.get_name() << ", ";
}
int Continent::get_count() { return count; }

std::string Continent::get_name() const {
    return name;
}
float Continent::get_area() const {
    return area;
}
std::string Continent::get_hemi() const {
    return hemi;
}