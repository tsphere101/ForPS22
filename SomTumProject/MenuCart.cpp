#include "MenuCart.h"

MenuCart::MenuCart(Menu menu, int quantity)
{
    this->menu = menu;
    this->quantity = quantity;
}

MenuCart::MenuCart(Menu menu)
{
    this->menu = menu;
    this->quantity = 1;
}

MenuCart::~MenuCart() {}

int MenuCart::getQuantity()
{
    return this->quantity;
}

Menu MenuCart::getMenu()
{
    return this->menu;
}

void MenuCart::setQuantity(int amount_to_set)
{
    this->quantity = amount_to_set;
}

void MenuCart::addQuantity(int amount_to_add)
{
    this->quantity += amount_to_add;
}