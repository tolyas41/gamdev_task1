#include "Country.h"

	int Country::count = 0;  

//constructors & destructor
	Country::Country(const std::string& init_name, float init_area, const std::string& init_st_lang, float init_popul)
		: name{ init_name }, area{ init_area }, state_lang{ init_st_lang }, population { init_popul } {
		count++;
	}
	Country::Country() 
		: Country {"none", 0, "unknown", 0} {}
	Country::~Country() {
		count--;
	}        

//setters
	void Country::set_name(const std::string& set_name) {
		name = set_name;
	}
	void Country::set_area(float set_area) {
		area = set_area;
	}
	void Country::set_state_lang(const std::string& set_state_lang) {
		state_lang = set_state_lang;
	}
	void Country::set_population(float set_population) {
		population = set_population;
	}

//getters
	std::string Country::get_name() const {
		return name;
	}
	float Country::get_area() const {
		return area;
	}
	std::string Country::get_state_lang() const {
		return state_lang;
	}
	float Country::get_population() const {
		return population;
	}
	int Country::get_count() {
		return count;
	}

//print all with getters
	void Country::print_all() const {
	std::cout << "\n\n           --" << get_name() << "--\nArea : " << get_area() << "\nState language : " <<
	get_state_lang() << "\npopulationation : " << get_population() << std::endl;
	}
