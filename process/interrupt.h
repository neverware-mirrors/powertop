#ifndef _INCLUDE_GUARD_INTERRUPT_H
#define _INCLUDE_GUARD_INTERRUPT_H

#include <stdint.h>

#include "powerconsumer.h"

class interrupt : public power_consumer {
	uint64_t	running_since;
	char		desc[256];
public:
	char 		handler[32];
	int 		number;

	int		raw_count;

	interrupt(const char *_handler, int _number);

	virtual void start_interrupt(uint64_t time);
	virtual void end_interrupt(uint64_t time);

	virtual double Witts(void);
	virtual const char * description(void);


};


#endif