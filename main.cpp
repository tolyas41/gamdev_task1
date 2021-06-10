#include <iostream>
#include <string>
#include <vector>
#include "Country.h"

using namespace std;
                                          //-------Continent class

class Continent {
    string name;
    float area;
    const string hemi;
    vector <Country> countrs;
    static int count;                    //static counter
public:
//constructors and destructor
Continent (string n, float a, string h) : name{n}, area{a}, hemi{h} {count++;} 
Continent () : Continent {"none", 0, "unknown"} {}
~Continent () { //    cout << "destruction! .. of " << name << endl; 
    count--;}                
//methods
void add_countrs (const Country &c) {
    countrs.push_back(c);
}
void get_all () {
    cout << "\n\n           --" << name <<"--\nArea (mill of kms) : " << area << "\nHemosphere : " << hemi <<  endl;
    cout << "Countries of " << name << " : ";
    for (auto &cn : countrs)
        cn.get_name();
}
static int get_count () {return count;}

};
int Continent::count = 0;                     
                                         //-------River class
class River {
    string name;
    float len;
    static int count;
public:
//constructors and destructor
River (string n, float le) : name{n}, len{le} {count++;} 
River () : River {"none", 0} {}
~River () { //    cout << "destruction! .. of " << name << endl; 
    count--;}
//methods
void get_name () {cout << name << ", ";}
void get_all () {
    cout << "\n           --" << name <<"--\nLength : " << len <<  endl;
}
static int get_count () {return count;}
};
int River::count = 0;
                                       //---------Sea class
class Sea {
    string name;
    float area;
    const string cont;
    vector <River> flowrivers;
    static int count;
public:
//constructors and destructor
Sea (string n, float a, string c) : name{n}, area{a}, cont{c} {count++;} 
Sea () : Sea {"none", 0, "unknown"} {}
~Sea () { //    cout << "destruction! .. of " << name << endl; 
    count--;}    
//methods
void add_flowrivers (const River &r) {
    flowrivers.push_back(r);
}
void get_all () {
    cout << "\n\n           --" << name <<"--\nArea (mill of kms) : " << area << "\nContinent : " << cont <<  endl;
    cout << "Flowing rivers to " << name << " : ";
    for (auto &fr : flowrivers)
        fr.get_name();
}
static int get_count () {return count;}
};
int Sea::count = 0;
                                      //---------Star class
class Star {
    string name;
    string type;
    float dist;
    static int count;
public:
//constructors and destructor
Star (string n, string t, float d) : name{n}, type {t}, dist{d} {count++;} 
Star () : Star {"none", "unknown", 0} {}
~Star () { //    cout << "destruction! .. of " << name << endl; 
    count--;}
//methods
void get_name () {cout << name << ", ";}
void get_all () {
    cout << "\n           --" << name <<"--\nType : " << type << "\nDistance to the center of the galaxy : " << dist << " thousands of light-years" <<  endl;
}
static int get_count () {return count;}
};
int Star::count = 0;
                                      //---------Galaxy class
class Galaxy {
    string name;
    float stnum;
    const string type;
    vector <Star> strs;
    static int count;
public:
//constructors and destructor
Galaxy (string n, float sn, string t) : name{n}, stnum{sn}, type{t} {count++;} 
Galaxy () : Galaxy {"none", 0, "unknown"} {}
~Galaxy () { //    cout << "destruction! .. of " << name << endl; 
    count--;}    
//methods
void add_strs (const Star &r) 
{
    strs.push_back(r);
}
void get_all () 
{
    cout << "\n\n           --" << name <<"--\n~Number of stars : " << stnum << "\nGalaxy type : " << type <<  endl;
    cout << "Stars " << " : ";
    for (auto &st : strs)
        st.get_name();
}
static int get_count () {return count;}
};
int Galaxy::count = 0;

int main() {
    
//1. Country and Continent classes
{   cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Countries and Continents\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
Country rus;
rus.set_name("Russia");
rus.set_area(17.1);                                       
rus.set_state_lang("Russian");
rus.set_popul(144.4);
rus.get_all_country();
Country ger ("Germany", 0.36, "Deutch", 83);
ger.get_all_country();
Country chi ("China", 9.6, "Chinese" ,1398);
chi.get_all_country();
Country jap ("Japan", 0.38 , "Japanese" , 126);
jap.get_all_country();
cout << "\n>Number of countries : " << Country::get_count() << endl;
Continent eu("Europe", 10.2 , "north");
eu.add_countrs(rus);
eu.add_countrs(ger);
eu.get_all();
Continent as ("Asia", 44.5, "north");
as.add_countrs(chi);
as.add_countrs(jap); 
as.get_all();
cout << "\n\n>Number of continents : " << Continent::get_count() << endl;
}
//2. River and Sea classes
{   cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Rivers and Seas\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    River ob ("Ob", 3700);
    ob.get_all();
    River am ("Amazon", 6400);
    am.get_all();
    River dn ("Dnieper", 2201);
    dn.get_all();
    cout << "\n\n>Number of rivers : " << River::get_count() << endl;
    Sea kar ("Kara Sea", 0.9, "Arctic");
    kar.add_flowrivers(ob);
    kar.get_all();
    Sea black ("Black Sea", 0.4, "Europe");
    black.add_flowrivers(dn);
    black.get_all();
    cout << "\n\n>Number of seas : " << Sea::get_count() << endl;
}
//3. Stars and Galaxies classes
{   cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Stars and Galaxies\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   \n";
    Star sun ("Sun", "Yellow dwarf", 29);
    sun.get_all();
    Star prce ("Proxima Centauri", "Red dwarf", 27);
    prce.get_all();
    Star ant ("Antares", "Red supergiant", 28.5);
    ant.get_all();
    Star gg ("Gear", "Hoou", 23);
    gg.get_all();
    cout << "\n>Number of stars : " << Star::get_count() << endl;
    Galaxy mw ("Milky way", 250 , "barred spiral galaxy");
    mw.add_strs(sun);
    mw.add_strs(prce);
    mw.add_strs(ant);
    mw.get_all();
    cout << "\n\n>Number of galaxies : " << Galaxy::get_count() << endl;
}
cout << "\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\The End\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  \n";
    return 0; 
}