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
     * This function represents the core of the debug library.
     * If the macro in the "Debug.hpp" is defined, this function will expand.
     * Otherwise, the preprocessor will remove all its content from the preprocessed source file.
     */
    #ifdef DEBUG_MODE
        #define IF_DEBUG_ACTIVE( ... ) __VA_ARGS__ 		// EXPAND
    #else
        #define IF_DEBUG_ACTIVE( ... ) 					// DO NOT EXPAND
    #endif


    // Utilities

    #define EVAL( x )                   x

    /**
     * Concatenate two parameters.
     * Example: CONCAT( 123 , abc ) is expanded to 123abc
     */
    #define _CONCAT( x, y )				x ## y
    #define CONCAT( x, y )				_CONCAT( x, y )

    #define _CONCAT_3( x, y, z )        x ## y ## z
    #define CONCAT_3( x, y, z )			_CONCAT_3( x, y, z )

    /**
     * Stringify one parameter.
     * Example: STRINGIFY( 123 ) is expanded to "123"
     */
    #define _STRINGIFY( x ) 			#x
    #define STRINGIFY( x )				_STRINGIFY( x )

    /**
     * Generate unique IDs for C++ code variables.
     * All the IDs will start with the same prefix.
     */
    #define ID_PREFIX 					debug_var_
    #define UNIQUE_ID					CONCAT( ID_PREFIX, __LINE__ )

}

#endif /* INCLUDE_BASIC_HPP_ */
