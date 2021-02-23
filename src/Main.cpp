/**
 * Main.cpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 * Main testing file.
 */

#include "Debug.hpp"

using namespace macrodebug;

int main(int argc, char **argv) {

	DEBUG_MARK_PHASE( "Macro Debugger - Main" ) {

        DEBUG_LOG( "Hello world!" );

		// This should work...
        DEBUG_ASSERT_TRUE( 2 + 2 == 4 );
        DEBUG_ASSERT_FALSE( 2 + 2 == 5 );

        DEBUG_LOG_SUCCESS( "This is awesome!" );

		// ...This one shouldn't!
        DEBUG_ASSERT_TRUE( 2 + 3 == 4 );
        DEBUG_ASSERT_FALSE( 2 + 1 == 3 );

        DEBUG_LOG_FAIL( "Something bad just happened!" );

    }

	return 0;
}
