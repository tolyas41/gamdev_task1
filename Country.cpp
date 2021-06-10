#include "Country.h"

int Country::count = 0;  

Country::Country (std::string n, float a, std::string la, float p) : name{n}, area{a}, state_lang{la}, popul {p} {count++;} 
Country::Country () : Country {"none", 0, "unknown", 0} {}
Country::~Country () {count--;}           
//methods
void Country::set_name (std::string n){name = n;}
void Country::set_area (float a){area = a;}
void Country::set_state_lang (std::string la){state_lang = la;}
void Country::set_popul (float p){popul = p;}
//getters
std::string Country::get_name () {return name;}
float Country::get_area() {return area;}
std::string Country::get_state_lang () {return state_lang;}
float Country::get_popul () {return popul;}
void Country::get_all_country() {
    std::cout << "\n\n           --" << get_name() << "--\nArea : " << get_area() << "\nState language : " <<
        get_state_lang() << "\nPopulation : " << get_popul() << std::endl;
}
int Country::get_count () {return count;}




