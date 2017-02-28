#include "InventoryManager.h"

InventoryManager::InventoryManager(int choice)
{
	userChoice = choice;
	total_profit = 0;
	
	if(userChoice == 1)
		sd = new StackDeque<widget>();
	else
		qd = new QueueDeque<widget>();	
}

InventoryManager::~InventoryManager()
{
	if(userChoice == 1)
		delete sd;
	else
		delete qd;
}

void InventoryManager::buyWidgets(double cost, int num_to_buy)
{
	for(int i = 0; i < num_to_buy; i++)
	{
		widget* wd = new widget(cost);
		
		if(userChoice == 1)
			sd->push(wd);
		else
			qd->enqueue(wd);
	}
}

double InventoryManager::getTotalProfit()
{
	return total_profit;
}

double InventoryManager::sellWidgets(double price, int num_to_sell)
{
	int inventory_size;
	double profit = 0;
	widget* wd;
	
	if(userChoice == 1)
		inventory_size = sd->size();
	else
		inventory_size = qd->size();
	
	if(inventory_size < num_to_sell)
		num_to_sell = inventory_size;
	
	for(int i = 0; i < num_to_sell; i++)
	{
		if(userChoice == 1)
			wd = sd->pop();
		else
			wd = qd->dequeue();
		
		profit = profit + (price - wd->getCost());
	}
	
	total_profit = total_profit + profit;
	
	return total_profit;
}
