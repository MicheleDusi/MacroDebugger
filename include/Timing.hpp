/**
 * Timing.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_TIMING_HPP_
#define INCLUDE_TIMING_HPP_

#include "Logging.hpp"

namespace macrodebug {

	/**
	 * Attiva o disattiva l'attesa di un input dell'utente nella macro function DEBUG_WAIT_USER_ENTER.
	 */
	#define WAIT_FOR_USER false

    /**
    * Macro function.
    * Attende l'inserimento di 1 carattere da tastiera.
    */
    #define DEBUG_WAIT_USER_ENTER()																\
    if (WAIT_FOR_USER) {																		\
        DEBUG_LOG( COLOR_RED( "Press ENTER..." ) );												\
        IF_DEBUG_ACTIVE(getchar();)																\
    }

}

#endif /* INCLUDE_TIMING_HPP_ */
