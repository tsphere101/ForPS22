#include "Menu.h"

Menu::Menu()
{
    this->name = "NONE";
    this->price = -1;
    this->description = "NONE";
}

Menu::Menu(int id,std::string name)
{
    this->food_id = id;
    this->name = name;
}

Menu::Menu(int id,std::string name, double price)
{
    this->food_id = id;
    this->name = name;
    this->price = price;
}

Menu::Menu(int id,std::string name, double price, std::string description)
{
    this->food_id = id;
    this->name = name;
    this->price = price;
    this->description = description;
}

Menu::~Menu()
{
}

int Menu::getId()
{
    return this->food_id;
}

void Menu::showMenu()
{
    std::cout << "FoodName : " << this->getName() << std::endl
              << "Price : " << this->getPrice() << std::endl
              << "Description : " << this->getDescription() << std::endl;
}

std::string Menu::getName()
{
    return this->name;
}

double Menu::getPrice()
{
    return this->price;
}

std::string Menu::getDescription()
{
    return this->description;
}