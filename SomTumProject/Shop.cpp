#include "Shop.h"

Shop::Shop()
{

    /*
        - Setup shop.

        - Add menu to list.

        - Say welcome .

        - Take order.

        - Checkout.

        - Farewell.
    */

    this->shopName = "Pisit S.Poomy Somtum";

    this->somtumList.push_back(*new Menu(1, "Tum Thai", 60, "Original-Styled Thai Spicy Papaya Salad."));
    this->somtumList.push_back(*new Menu(2, "Tum Thai Kai Kem", 75, "Thai Spicy Papaya Salad with Salted Egg."));

    this->beverageList.push_back(*new Menu(3, "Iced Thai Black Coffee", 30));
    this->beverageList.push_back(*new Menu(4, "Iced Black Tea", 30));

    this->dessertList.push_back(*new Menu(5, "Tub Tim Grob", 50, "Pink Water Chestnut Balls in Coconut Milk."));
    this->dessertList.push_back(*new Menu(6, "Lod Chong Bai Tei", 50, "Pandanus Rice Noodles with Coconut Milk."));

    chooseMenu();
}

Shop::~Shop()
{
}

std::string Shop::getShopName()
{
    return this->shopName;
}

std::vector<Menu> Shop::getSomtumList()
{
    return this->somtumList;
}

std::vector<Menu> Shop::getBeverageList()
{
    return this->beverageList;
}

std::vector<Menu> Shop::getDessertList()
{
    return this->dessertList;
}

void Shop::showMenu()
{

    std::cout << "=== MENU ===" << std::endl;

    std::cout << "Somtum Menu" << std::endl;
    this->showSomtumList();

    std::cout << "Beverage" << std::endl;
    this->showbeverageList();

    std::cout << "Dessert" << std::endl;
    this->showDessertList();
}

void Shop::showSomtumList()
{
    std::cout << "=================" << std::endl;
    std::cout << "== Somtum Menu ==" << std::endl;
    for (int i = 0; i < this->somtumList.size(); i++)
    {
        std::cout << this->somtumList[i].getId()<< ". " << this->somtumList[i].getPrice() << ".-"
                  << "\t" << this->somtumList[i].getName() << std::endl;
    }
}
void Shop::showbeverageList()
{
    for (int i = 0; i < this->beverageList.size(); i++)
    {
        std::cout << i + 1 << ". " << this->beverageList[i].getPrice() << ".-"
                  << "\t" << this->beverageList[i].getName() << std::endl;
    }
}

void Shop::showDessertList()
{
    for (int i = 0; i < this->dessertList.size(); i++)
    {
        std::cout << i + 1 << ". " << this->dessertList[i].getPrice() << ".-"
                  << "\t" << this->dessertList[i].getName() << std::endl;
    }
}

void Shop::welcome()
{
    std::cout << "Hello, what would you like to have?" << std::endl;
}

void Shop::chooseMenu()
{

    while (true)
    {
        std::cout << "\n\n\n";
        std::cout << "=== Main Menu ===" << std::endl;
        std::cout << "1. Menu & Ordering" << std::endl
                  << "2. Member & Account" << std::endl
                  << std::endl
                  << "0. Quit." << std::endl;

        double input;
        std::cin >> input;
        input = int(input);

        /* todo design menu and checkout system.*/

        if (input == 1) // Menu & Ordering
        {
            MenuAndOrdering();
        }

        else if (input == 2) // Member & Account
        {
        }

        else if (input == 0) // Quit
        {
            std::cout << "Exiting The Program...";
            return;
        }
    }
}

void Shop::MenuAndOrdering()
{
    std::cout << "\n\n";
    std::cout << "=================" << std::endl;
    std::cout << "0. Back" << std::endl;
    std::cout << "=== Food Menu ===" << std::endl
              << "1. Somtum Menu" << std::endl
              << "2. Beverage Menu" << std::endl
              << "3. Dessert Menu" << std::endl
              << "4. Your Cart & Checkout" << std::endl;

    double input;
    std::cin >> input;
    input = int(input);

    if (input == 1)
    {
        MenuAndOrdering_SomtumMenu();
    }
    else if (input == 2)
    {
        MenuAndOrdering_BeverageMenu();
    }

    else if (input == 3)
    {
        MenuAndOrdering_DessertMenu();
    }
    else if (input == 4)
    {
        MenuAndOrdering_CartAndCheckout();
    }
    else
    {
        return;
    }
}

void Shop::MenuAndOrdering_SomtumMenu()
{
    showSomtumList();
    double input_menu;

    std::cout << "Enter the number infront of the menu to order, enter 0 to go back." << std::endl;
    std::cin >> input_menu;
    input_menu = (int)input_menu;

    double input_amount = 0;
    std::cout << "Enter amount of serves : ";

    std::cin >> input_amount;
    input_amount = (int)input_amount;
    while(input_amount<0)
    {
        std::cout << "Amount cannot be less than 0" << std::endl;
    }

    this->cartList.push_back(*new Cart());


    for(int i =0 ; i < this->somtumList.size();i++)
    {
        if(this->somtumList[i].getId() == input_menu)
        {
            this->cartList[0].addMenu(this->somtumList[i]);
        }
    }




}

void Shop::MenuAndOrdering_BeverageMenu()
{
}

void Shop::MenuAndOrdering_DessertMenu()
{
}

void Shop::MenuAndOrdering_CartAndCheckout()
{
}