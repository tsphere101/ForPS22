#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <vector>
#include <string>

class Menu{

private:
    int food_id;
    std::string name;
    double price;
    std::string description;
/** 
 * 
 * 
 * 
 * 
 */

public:
    Menu();
    Menu(int id,std::string name);
    Menu(int id,std::string name, double price);
    Menu(int id,std::string name, double price, std::string description);

    ~Menu();



    int getId();
    void showMenu();
    std::string getName();
    double getPrice();
    std::string getDescription();


};



#endif