#ifndef MENUCART_H
#define MENUCART_H

#include "Menu.h"
#include <iostream>
#include <vector>

class MenuCart{
private:
    Menu menu;
    int quantity; 


public:
    MenuCart(Menu menu,int quantity);
    MenuCart(Menu menu);
    ~MenuCart();

    int getQuantity();
    Menu getMenu();

    void setQuantity(int amount_to_set);
    void addQuantity(int amount_to_add);

    


}; 


#endif