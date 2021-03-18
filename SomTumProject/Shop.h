#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <string>
#include <vector>
#include "Menu.h"
#include "Cart.h"

/* Contains basics funtion for shop implementations */

class Shop
{
private:
    std::string shopName;
    std::vector<Menu> somtumList;
    std::vector<Menu> beverageList;
    std::vector<Menu> dessertList;

    std::vector<Cart> cartList;

public:
    Shop();
    ~Shop();



    std::string getShopName();
    std::vector<Menu> getSomtumList();
    std::vector<Menu> getBeverageList();
    std::vector<Menu> getDessertList();



    void showMenu();
    void showSomtumList();
    void showbeverageList();
    void showDessertList();
    void welcome();

    void chooseMenu();
    void MenuAndOrdering();
    void MenuAndOrdering_SomtumMenu();
    void MenuAndOrdering_BeverageMenu();
    void MenuAndOrdering_DessertMenu();
    void MenuAndOrdering_CartAndCheckout();
    

};

#endif