#include "..\Headers\CircuitElement.h"

void CircuitElement::set_propogation_delay(double delay)
{
	propogation_delay = delay;
}

int CircuitElement::get_propogation_delay(void)
{
	return propogation_delay;
}

void CircuitElement::set_coord(unsigned int x, unsigned int y)
{
	x_coord = x;
	y_coord = y;
}

int CircuitElement::get_x_coord(void)
{
	return x_coord;
}

int CircuitElement::get_y_coord(void)
{
	return y_coord;
}

void CircuitElement::set_selected(bool select)
{
	selected = select;
}

bool CircuitElement::is_selected(void)
{
	return selected;
}
