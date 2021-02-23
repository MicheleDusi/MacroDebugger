/**
 * Phasing.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 *
 * Semplice libreria che fornisce una comoda implementazione
 * delle più comuni funzioni di debug sotto forma di MACRO.
 *
 * Per attivare la modalità di debug -> agire sulla macro
 * DEBUG_MODE facendo in modo che sia definita (si veda sotto).
 * Per disattivare la modalità di debug -> agire sulla macro
 * DEBUG_MODE commentando la riga della sua definizione.
 */

#ifndef INCLUDE_DEBUG_HPP_
#define INCLUDE_DEBUG_HPP_

namespace macrodebug {

	/**
	 * Attiva o disattiva la modalità di DEBUG, a seconda che sia
	 * rispettivamente decommentato o commentato.
	 */
	#define DEBUG_MODE

}

#include "Basic.hpp"
#include "Text.hpp"
#include "Color.hpp"
#include "Logging.hpp"
#include "Phasing.hpp"
#include "Testing.hpp"
#include "Timing.hpp"

#endif /* INCLUDE_DEBUG_HPP_ */
