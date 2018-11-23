#ifndef AND_H
#define AND_H

#include "..\CombinationalLogic.h"

class AND : public CombinationalLogic
{
private:

public:
	virtual void instantiate(unsigned int x, unsigned int y);
	virtual void update_output(void);
};

#endif
