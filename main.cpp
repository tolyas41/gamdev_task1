#include <iostream>
#include <string>
#include <vector>
#include "Country.h"
#include "Continent.h"
#include "River.h"
#include "Sea.h"
#include "Star.h"
#include "Galaxy.h"


int main() {
    
//1. Country and Continent classes
   std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Countries and Continents\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    Country russia;
    russia.set_name("Russia");
    russia.set_area(17.1);                                       
    russia.set_state_lang("Russian");
    russia.set_population(144.4);
    russia.print_all();
    Country germany ("Germany", 0.36, "Deutch", 83);
    germany.print_all();
    Country china ("China", 9.6, "Chinese" ,1398);
    china.print_all();
    Country japan ("Japan", 0.38 , "Japanese" , 126);
    japan.print_all();
    std::cout << "\n>Number of countries : " << Country::get_count() << std::endl;

    Continent europe("north");
    europe.set_name("Europe");
    europe.set_area(10.2);
    europe.add_countries(russia);
    europe.add_countries(germany);
    europe.print_all();
    Continent asia("Asia", 44.5, "north");
    asia.add_countries(china);
    asia.add_countries(japan); 
    asia.print_all();
    Continent arctic("Arctic", 5.5, "north");
    arctic.print_all();
    std::cout << "\n\n>Number of continents : " << Continent::get_count() << std::endl;

//2. River and Sea classes
   std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Rivers and Seas\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    River ob;
    ob.set_length(3700);
    ob.set_name("Ob");
    ob.print_all();
    River amazon;
    amazon.set_length(6400);
    amazon.set_name("Amazon");
    amazon.print_all();
    River dnieper ("Dnieper", 2201);
    dnieper.print_all();
    std::cout << "\n\n>Number of rivers : " << River::get_count() << std::endl;

    Sea kara(arctic);
    kara.set_area(0.9);
    kara.set_name("Kara Sea");
    kara.add_flowrivers(ob);
    kara.print_all();
    Sea black ("Black Sea", 0.4, europe);
    black.add_flowrivers(dnieper);
    black.print_all();
    std::cout << "\n\n>Number of seas : " << Sea::get_count() << std::endl;

//3. Stars and Galaxies classes
   std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Stars and Galaxies\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   \n";
    Star sun;
    sun.set_distance(29);
    sun.set_name("Sun");
    sun.set_type("Yellow dwarf");
    sun.print_all();
    Star proxima ("Proxima Centauri", "Red dwarf", 27);
    proxima.print_all();
    Star antares ("Antares", "Red supergiant", 28.5);
    antares.print_all();
    std::cout << "\n>Number of stars : " << Star::get_count() << std::endl;

    Galaxy milkyway ("barred spiral galaxy");
    milkyway.set_name("Milky way");
    milkyway.set_number_of_stars(250);
    milkyway.add_stars(sun);
    milkyway.add_stars(proxima);
    milkyway.add_stars(antares);
    milkyway.print_all();
    std::cout << "\n\n>Number of galaxies : " << Galaxy::get_count() << std::endl;

    std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\The End\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    
    return 0; 
}