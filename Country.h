#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <iostream>

class Country {
    std::string name;
    float area;
    std::string state_lang;
    float popul;
    static int count;                     //static counter
public:
//constructors and destructor
Country (std::string, float, std::string, float);
Country ();
~Country ();
//setters
void set_name (std::string);
void set_area (float);
void set_state_lang (std::string);
void set_popul (float);
//getters
std::string get_name ();
float get_area();
std::string get_state_lang ();
float get_popul ();
void get_all_country();
static int get_count ();
}; 

#endif // COUNTRY_H