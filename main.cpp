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
{  std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Countries and Continents\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
Country russia;
russia.set_name("Russia");
russia.set_area(17.1);                                       
russia.set_state_lang("Russian");
russia.set_popul(144.4);
russia.print_all();
Country germany ("Germany", 0.36, "Deutch", 83);
germany.print_all();
Country china ("China", 9.6, "Chinese" ,1398);
china.print_all();
Country japan ("Japan", 0.38 , "Japanese" , 126);
japan.print_all();
std::cout << "\n>Number of countries : " << Country::get_count() << std::endl;

Continent europe("Europe", 10.2 , "north");
europe.add_countrs(russia);
europe.add_countrs(germany);
europe.print_all();
Continent asia ("Asia", 44.5, "north");
asia.add_countrs(china);
asia.add_countrs(japan); 
asia.print_all();
std::cout << "\n\n>Number of continents : " << Continent::get_count() << std::endl;
}
//2. River and Sea classes
{   std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Rivers and Seas\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    River ob ("Ob", 3700);
    ob.print_all();
    River amazon ("Amazon", 6400);
    amazon.print_all();
    River dnieper ("Dnieper", 2201);
    dnieper.print_all();
    std::cout << "\n\n>Number of rivers : " << River::get_count() << std::endl;
    Sea kara ("Kara Sea", 0.9, "Arctic");
    kara.add_flowrivers(ob);
    kara.print_all();
    Sea black ("Black Sea", 0.4, "Europe");
    black.add_flowrivers(dnieper);
    black.print_all();
    std::cout << "\n\n>Number of seas : " << Sea::get_count() << std::endl;
}
//3. Stars and Galaxies classes
{   std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Stars and Galaxies\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   \n";
    Star sun ("Sun", "Yellow dwarf", 29);
    sun.print_all();
    Star proxima ("Proxima Centauri", "Red dwarf", 27);
    proxima.print_all();
    Star antares ("Antares", "Red supergiant", 28.5);
    antares.print_all();
    std::cout << "\n>Number of stars : " << Star::get_count() << std::endl;
    Galaxy milkyway ("Milky way", 250 , "barred spiral galaxy");
    milkyway.add_stars(sun);
    milkyway.add_stars(proxima);
    milkyway.add_stars(antares);
    milkyway.print_all();
    std::cout << "\n\n>Number of galaxies : " << Galaxy::get_count() << std::endl;
}
std::cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\The End\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    return 0; 
}