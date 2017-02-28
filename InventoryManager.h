#if !defined INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include <iostream>
#include "widget.h"
#include "StackDeque.h"
#include "QueueDeque.h"

class InventoryManager
{
	private:
		int userChoice;
		double total_profit;
		
		StackDeque<widget>* sd;
		QueueDeque<widget>* qd;
		
	public:
		InventoryManager(int inventory_choice); //LIFO or FIFO
		~InventoryManager();
		void buyWidgets(double cost, int num_to_buy);
		double getTotalProfit();
		double sellWidgets(double price, int num_to_sell);
};

#endif