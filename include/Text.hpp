/**
 * Text.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_TEXT_HPP_
#define INCLUDE_TEXT_HPP_

#include "Color.hpp"

namespace macrodebug {

    // Utilità

    /** Concatenazione dei valori di due o più parametri x, y, z */
    #define _CONCAT( x, y )				x ## y
    #define CONCAT( x, y )				_CONCAT( x, y )

    /** "Stringhificazione" del valore di un parametro x */
    #define _STRINGIFY( x ) 			#x
    #define STRINGIFY( x )				_STRINGIFY( x )

    /** Prefisso per la generazione di ID unici */
    #define ID_PREFIX 					debug_var_

    /** Macro per la generazione di ID unici.*/
    #define UNIQUE_ID					CONCAT( ID_PREFIX, __LINE__ )

    /** Aggiunge delle parentesi per identificare un tag nei messaggi di log */
    #define TAG_BRACKETS( text ) 		"[" text "]"



    /** Tag facilmente identificabili per i messaggi di log */
    #define DEBUG_TAG 					TAG_BRACKETS( COLOR_CYAN  ( "DEBUG"   ) )
    #define SUCCESS_TAG 				TAG_BRACKETS( COLOR_GREEN ( "SUCCESS" ) )
    #define FAIL_TAG					TAG_BRACKETS( COLOR_YELLOW( "FAIL"    ) )
    #define ERROR_TAG					TAG_BRACKETS( COLOR_RED   ( "ERROR"   ) )

}

#endif /* INCLUDE_TEXT_HPP_ */
