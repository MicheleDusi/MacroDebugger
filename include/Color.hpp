/**
 * Color.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_COLOR_HPP_
#define INCLUDE_COLOR_HPP_

namespace macrodebug {

    /** Common colors definitions */
    /** ANSI ESCAPE support is required **/
    
    #define COLOR_RED( text ) 			"\033[1;31m" text "\033[0m"
    #define COLOR_GREEN( text ) 		"\033[1;32m" text "\033[0m"
    #define COLOR_YELLOW( text ) 		"\033[1;33m" text "\033[0m"
    #define COLOR_BLUE( text ) 			"\033[1;34m" text "\033[0m"
    #define COLOR_MAGENTA( text ) 		"\033[1;35m" text "\033[0m"
    #define COLOR_CYAN( text ) 			"\033[1;36m" text "\033[0m"

    #define COLOR_PURPLE( text ) 		"\033[1;38;5;89m" text "\033[0m"
    #define COLOR_PINK( text ) 			"\033[1;38;5;204m" text "\033[0m"

}

#endif /* INCLUDE_COLOR_HPP_ */
