/**
 * Testing.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_TESTING_HPP_
#define INCLUDE_TESTING_HPP_

#include "Logging.hpp"

namespace macrodebug {

	/**
	 * Macro function.
	 * Si aspetta in ingresso l'ID di una variabile. Verifica che la variabile sia NULL,
	 * e stampa un messaggio coerente con quanto atteso.
	 */
	#define DEBUG_ASSERT_NULL( variable_id ) 														\
		if (variable_id == NULL) {																	\
			DEBUG_LOG_SUCCESS( "Variable \"%s\" == NULL, expected NULL", #variable_id );			\
		} else {																					\
			DEBUG_LOG_FAIL( "Variable \"%s\" == NOT NULL, expected NULL", #variable_id );			\
		}

	/**
	 * Macro function.
	 * Si aspetta in ingresso l'ID di una variabile. Verifica che la variabile sia NON NULL,
	 * e stampa un messaggio coerente con quanto atteso.
	 */
	#define DEBUG_ASSERT_NOT_NULL( variable_id )													\
		if (variable_id != NULL) {																	\
			DEBUG_LOG_SUCCESS( "Variable \"%s\" == NOT NULL, expected NOT NULL", #variable_id );	\
		} else {																					\
			DEBUG_LOG_FAIL( "Variable \"%s\" == NULL, expected NOT NULL", #variable_id );			\
		}

	/**
	 * Macro function.
	 * Si aspetta in ingresso una condizione. Verifica che tale condizione sia TRUE,
	 * e stampa un messaggio coerente con quanto atteso.
	 */
	#define DEBUG_ASSERT_TRUE( condition ) 															\
		if (condition) {																			\
			DEBUG_LOG_SUCCESS( "Condition (%s) == TRUE, expected TRUE", #condition );				\
		} else {																					\
			DEBUG_LOG_FAIL( "Condition (%s) == FALSE, expected TRUE", #condition );					\
		}

	/**
	 * Macro function.
	 * Si aspetta in ingresso una condizione. Verifica che tale condizione sia TRUE,
	 * e stampa un messaggio coerente con quanto atteso.
	 */
	#define DEBUG_ASSERT_FALSE( condition )															\
		if (!(condition)) {																			\
			DEBUG_LOG_SUCCESS( "Condition (%s) == FALSE, expected FALSE", #condition );				\
		} else {																					\
			DEBUG_LOG_FAIL( "Condition (%s) == TRUE, expected FALSE", #condition );					\
		}

}

#endif /* INCLUDE_TESTING_HPP_ */
