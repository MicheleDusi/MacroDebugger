/**
 * Logging.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_LOGGING_HPP_
#define INCLUDE_LOGGING_HPP_

#include "Basic.hpp"
#include "Text.hpp"

namespace macrodebug {

    /**
     * Macro function.
     * Stampa un messaggio di log, elencando il nome del file e il numero di riga.
     * E' anche possibile passare argomenti in numero variabile da visualizzare, aggiustando
     * opportunamente il formato del messaggio come in C.
     *
     * Note:
     * __FILE__ si espande con il nome del file.
     * __LINE__ si espande con il numero di linea (unsigned int).
     * __VA_ARGS__ si espande alla lista di parametri variadic, se presenti.
     * __VA_OPT__(x) è una macro function che si espande all'argomento x solo se __VA_ARGS__ ha almeno un argomento.
     *
     */
    #define DEBUG_LOG( message, ...) 																				\
        IF_DEBUG_ACTIVE(																							\
            printf( DEBUG_TAG " %s(%u) : " message "\n", __FILE__, __LINE__ __VA_OPT__(,) __VA_ARGS__ )				\
        )

    /**
     * Macro function.
     * Stampa un messaggio di log con un tag iniziale che indica il successo di un'operazione.
     * Il log è accompagnato dal nome del file e dal numero di riga.
     * Per ulteriori informazioni, vedere la definizione di "DEBUG_LOG".
     *
     */
    #define DEBUG_LOG_SUCCESS( message, ...) 														\
        DEBUG_LOG( SUCCESS_TAG " " message __VA_OPT__(,) __VA_ARGS__ )

    /**
     * Macro function.
     * Stampa un messaggio di log con un tag iniziale che indica il fallimento di un'operazione.
     * Il log è accompagnato dal nome del file e dal numero di riga.
     * Per ulteriori informazioni, vedere la definizione di "DEBUG_LOG".
     *
     */
    #define DEBUG_LOG_FAIL( message, ...) 															\
        DEBUG_LOG( FAIL_TAG " " message __VA_OPT__(,) __VA_ARGS__ )

    /**
     * Macro function.
     * Stampa un messaggio di log con un tag iniziale che indica un errore interno al processo
     * di compilazione.
     * Il log è accompagnato dal nome del file e dal numero di riga.
     * Per ulteriori informazioni, vedere la definizione di "DEBUG_LOG".
     *
     */
    #define DEBUG_LOG_ERROR( message, ...) 															\
        DEBUG_LOG( ERROR_TAG " " message __VA_OPT__(,) __VA_ARGS__ )

}

#endif /* INCLUDE_LOGGING_HPP_ */
