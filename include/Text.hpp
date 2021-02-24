/**
 * Text.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_TEXT_HPP_
#define INCLUDE_TEXT_HPP_

#include "Basic.hpp"
#include "Color.hpp"

namespace macrodebug {

    /** Tag structure */
    #define TAG_BRACKETS(label) 		"[" label "]"
    #define STRUCTURE_TAG(label)        TAG_BRACKETS( TEXT_BOLD(label) )
    #define _COLOR_TAG(label, color)    STRUCTURE_TAG( CONCAT(COLOR_, color) ( label ))
    #define COLOR_TAG(name)             _COLOR_TAG( #name, _##name##_COLOR )

    /** Associated colors for tags **/
    #define _DEBUG_COLOR                SKY
    #define _SUCCESS_COLOR              GREEN
    #define _FAIL_COLOR                 ORANGE
    #define _ERROR_COLOR                RED
    #define _WARNING_COLOR              BANANA
    #define _INFO_COLOR                 PURPLE

    /** Main tags for log messages */
    #define DEBUG_TAG 					COLOR_TAG( DEBUG )
    #define SUCCESS_TAG 				COLOR_TAG( SUCCESS )
    #define FAIL_TAG					COLOR_TAG( FAIL )
    #define ERROR_TAG					COLOR_TAG( ERROR )
    #define WARNING_TAG                 COLOR_TAG( WARNING )
    #define INFO_TAG                    COLOR_TAG( INFO )

}

#endif /* INCLUDE_TEXT_HPP_ */
