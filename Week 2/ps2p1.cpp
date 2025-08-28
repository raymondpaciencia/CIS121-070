#include <iostream>


int main()
{
	double quantity, price, total;
	std::cout << "Enter the quantity of the item: ";
	std::cin >> quantity;
	std::cout << "Enter the price of the item: ";
	std::cin >> price;
	total = quantity * price;
	std::cout << "The total cost is: " << total << std::endl;
}
