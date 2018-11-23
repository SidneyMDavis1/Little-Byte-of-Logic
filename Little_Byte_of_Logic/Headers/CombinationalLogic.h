#ifndef COMBINATIONAL_LOGIC_H
#define COMBINATIONAL_LOGIC_H

#include "CircuitElement.h"

class CombinationalLogic : public CircuitElement 
{
	// More specific than CircuitElement, a class
	// to define member variables specific to CL
protected:
	unsigned int input_pins;
	unsigned int bit_width;
	

public:
	void set_input_pins(unsigned int number_pins);
	int  get_input_pins(void);
	void set_bit_width(unsigned int width);
	int  get_bit_width(void);
};

#endif
