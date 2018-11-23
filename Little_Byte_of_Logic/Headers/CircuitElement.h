#ifndef CIRCUIT_ELEMENT_H
#define CIRCUIT_ELEMENT_H

#include "Wire.h"

class CircuitElement 
{
	// this is an abstract class with traits that all circuit elements share
protected:
	double propogation_delay;
	unsigned int x_coord;
	unsigned int y_coord;
	bool selected;
public:
	void set_propogation_delay(double delay);
	int  get_propogation_delay(void);
	void set_coord(unsigned int x, unsigned int y);
	int  get_x_coord(void);
	int  get_y_coord(void);
	void set_selected(bool select);
	bool is_selected(void);

	virtual void instantiate(unsigned int x, unsigned int y);
	virtual void update_output(void);
};

#endif
