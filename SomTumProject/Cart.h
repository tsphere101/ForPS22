#ifndef CART_H
#define CART_H

#include <iostream>
#include <vector>
#include "Menu.h"
#include "MenuCart.h"

class Cart
{

private:
    std::vector<MenuCart> menuList;

public:
    Cart();
    ~Cart();

    void addMenu(Menu menu);
    void addAmount(Menu menu, int amount_to_add);

    double getCartPrice();
    double getCartItemAmount();

    std::vector<MenuCart> getCartMenuList();
};

#endif