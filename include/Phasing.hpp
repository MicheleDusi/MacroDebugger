/**
 * Phasing.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_PHASING_HPP_
#define INCLUDE_PHASING_HPP_

#include <string>

#include "Logging.hpp"

namespace macrodebug {

	/**
	 * Macro function.
	 * Permette di marcare una fase esplicitandone l'inizio e la fine con due messaggi di log.
	 * Se l'intera fase viene completata, entrambi i messaggi segnalano un successo.
	 *
	 * Esempio di utilizzo:
	 *
	 *		DEBUG_MARK_PHASE( nome_della_fase_da_marcare , con , eventuali , parametri ) {
	 *			...
	 * 			statements
	 *			...
	 *		}
	 *
	 * Nota: per il buon funzionamento di questa macro, è auspicabile l'utilizzo di parentesi
	 * graffe per racchiudere tutti gli statements della fase da marcare.
	 * E' possibile non utilizzare le graffe, ma in tal caso la macro marcherà unicamente
	 * lo statement successivo, segnalandone l'inizio e la fine come previsto.
	 *
	 * Nota: è possibile utilizzare più volte questa macro, eventualmente indentando i blocchi
	 * uno dentro l'altro (in questo caso, solo con le parentesi graffe).
	 *
	 * Nota: alcune chiamate a questa macro SULLA STESSA RIGA del file sorgente potrebbero
	 * non funzionare, poiché la macro function utilizza "__LINE__" e necessita che questo
	 * valore sia diverso ad ogni chiamata.
	 */
	#define DEBUG_MARK_PHASE( phase_name, ... )														\
		IF_DEBUG_ACTIVE(																			\
			_DEBUG_MARK_PHASE( UNIQUE_ID, phase_name __VA_OPT__(,) __VA_ARGS__ )					\
		)

	#define _DEBUG_MARK_PHASE( counter_id, phase_name, ... )										\
		int counter_id = 0;																			\
		for ( 																						\
				DEBUG_ENTERING_PHASE( phase_name __VA_OPT__(,) __VA_ARGS__ );						\
				counter_id < 1; 																	\
				DEBUG_EXITING_PHASE( phase_name __VA_OPT__(,) __VA_ARGS__ ), counter_id++			\
			)
		/* Commento:
		 * L'idea è utilizzare il costrutto "for" per eseguire un pezzo di codice PRIMA
		 * degli statements, e un pezzo di codice DOPO l'esecuzione degli statements.
		 * Il ciclo deve risultare "trasparente" all'esterno, quindi viene utilizzata una
		 * variabile generata casualmente per eseguire una ed una sola iterazione.
		 */

	#define DEBUG_ENTERING_PHASE( phase_name, ... )													\
		DEBUG_LOG_SUCCESS( "Entering phase [%s] \"" COLOR_MAGENTA( phase_name ) "\"", debugAcquireTicket().c_str() __VA_OPT__(,) __VA_ARGS__ )

	#define DEBUG_EXITING_PHASE( phase_name, ... )													\
		DEBUG_LOG_SUCCESS( "Exiting phase  [%s] \"" COLOR_MAGENTA( phase_name ) "\"", debugReleaseTicket().c_str() __VA_OPT__(,) __VA_ARGS__ )


    // Firme di funzioni

    std::string debugAcquireTicket();
    std::string debugReleaseTicket();

}

#endif /* INCLUDE_PHASING_HPP_ */
