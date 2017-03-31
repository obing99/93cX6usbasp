/*
 * ctm328.h
 * 
 * hardware specific clocktimer-include for atmega328p
 * and other avr5 family members
 * 
 */
#ifndef __CTM328_H_08bc8b223b334fccb47fc2544daa8f80
#define __CTM328_H_08bc8b223b334fccb47fc2544daa8f80	1


#include <avr/io.h>

#	define HWCLOCK_LSBTIMER_USEIOACCESS	0
#	define HWCLOCK_MSBTIMER_USEIOACCESS	0

#	define HWCLOCK_LSBTIMER_VALUEREG_LOW	TCNT1L
#	define HWCLOCK_LSBTIMER_VALUEREG_HIGH	TCNT1H

#if 0
#	define CLOCKTIMER_PRESCALER_CODE	(_BV(CS11)|_BV(CS10))
#	define CLOCKTIMER_PRESCALER_VALUE	(64ULL)
#else
#	define CLOCKTIMER_PRESCALER_CODE	(_BV(CS12)|_BV(CS10))
#	define CLOCKTIMER_PRESCALER_VALUE	(1024ULL)
#endif

/* usually nothing more to do here - clocktimer.h should do the generic stuff */



#endif