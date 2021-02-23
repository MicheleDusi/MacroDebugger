/**
 * Basic.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_BASIC_HPP_
#define INCLUDE_BASIC_HPP_

namespace macrodebug {

    /**
     * Macro function.
     * Si espande solamente se è attiva la modalità DEBUG.
     * Può essere usato per espandere qualunque cosa, non solo statements; è compito del programmatore
     * verificare che un'eventuale espansione vuota non generi problemi.
     */
    #ifdef DEBUG_MODE
        #define IF_DEBUG_ACTIVE( ... ) __VA_ARGS__ 		// EXPAND
    #else
        #define IF_DEBUG_ACTIVE( ... ) 					// DO NOT EXPAND
    #endif

}

#endif /* INCLUDE_BASIC_HPP_ */
