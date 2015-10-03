#include "Marlin.h"

#ifdef USE_WATCHDOG
#include <avr/wdt.h>

#include "watchdog.h"

//===========================================================================
//=============================private variables  ============================
//===========================================================================

//===========================================================================
//=============================functinos         ============================
//===========================================================================


/// intialise watch dog with a 4 sec interrupt time
void watchdog_init()
{
    wdt_enable(WDTO_4S);
}

/// reset watchdog. MUST be called every 1s after init or avr will reset.
void watchdog_reset() 
{
    wdt_reset();
}

//===========================================================================
//=============================ISR               ============================
//===========================================================================

#endif//USE_WATCHDOG
