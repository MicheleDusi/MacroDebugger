/**
 * Debug.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_DEBUG_HPP_
#define INCLUDE_DEBUG_HPP_

namespace macrodebug {

	/**
	 * Main "switch" for the debugging library functions.
	 * If the macro "DEBUG_MODE" is defined, the macro functions will be active.
	 * Otherwise, the functions won't work (and won't be expanded in any case: the preprocessor will simply erase them!)
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
