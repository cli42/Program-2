 #include "Widget.h"
#include <iostream>

using namespace std;

widget::widget(double num)
{
	cost = num;
}

widget::~widget()
{
	cost = 0;
}

widget::getCost()
{
	return cost;
}
