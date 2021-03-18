#include "Cart.h"

Cart::Cart()
{
}

Cart::~Cart()
{
}

void Cart::addMenu(Menu menu)
{
    this->menuList.push_back(*new MenuCart(menu));
}

void Cart::addAmount(Menu menu, int amount_to_add)
{

    for (int i = 0; i < this->menuList.size(); i++)
    {
        if (this->menuList[i].getMenu().getId() == menu.getId())
            this->menuList[i].addQuantity(amount_to_add);
    }
}

double Cart::getCartPrice()
{
    if (this->getCartMenuList().size() == 0)
        return 0;

    double total = 0;

    for (int i = 0; i < this->getCartMenuList().size(); i++)
    {
        total += this->getCartMenuList()[i].getMenu().getPrice();
    }
    return total;
}

double Cart::getCartItemAmount()
{
    if (this->getCartMenuList().size() == 0)
        return 0;

    int amount = 0;
    for (int i = 0; i < this->getCartMenuList().size(); i++)
    {
        amount += this->getCartMenuList()[i].getQuantity();
    }
}

std::vector<MenuCart> Cart::getCartMenuList()
{
    return this->menuList;
}