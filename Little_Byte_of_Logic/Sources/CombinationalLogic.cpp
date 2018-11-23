#include "..\Headers\CombinationalLogic.h"

void CombinationalLogic::set_input_pins(unsigned int number_pins)
{
	input_pins = number_pins;
}

int CombinationalLogic::get_input_pins(void)
{
	return input_pins;
}

void CombinationalLogic::set_bit_width(unsigned int width)
{
	bit_width = width;
}

int CombinationalLogic::get_bit_width(void)
{
	return bit_width;
}
