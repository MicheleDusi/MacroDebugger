/**
 * Color.hpp
 *
 * Project:         MacroDebugger
 * Created by:      Michele Dusi
 *
 */

#ifndef INCLUDE_COLOR_HPP_
#define INCLUDE_COLOR_HPP_

#include "Basic.hpp"

namespace macrodebug {

    /**
     * Common colors definitions.
     *
     * Note: ANSI ESCAPE support is required.
     */

    #define _ANSI_CODE_RESET            "\033[0m"
    #define _ANSI_CODE_BOLD             "\033[1m"
    #define _ANSI_CODE_BLINK            "\033[6m"

    #define _ANSI_CODE_FG_BLACK         "\033[30m"
    #define _ANSI_CODE_FG_RED           "\033[31m"
    #define _ANSI_CODE_FG_GREEN         "\033[32m"
    #define _ANSI_CODE_FG_YELLOW        "\033[33m"
    #define _ANSI_CODE_FG_BLUE          "\033[34m"
    #define _ANSI_CODE_FG_MAGENTA       "\033[35m"
    #define _ANSI_CODE_FG_CYAN          "\033[36m"
    #define _ANSI_CODE_FG_WHITE         "\033[37m"
    #define _ANSI_CODE_FG_RGB(r, g, b)  "\033[38;2;" #r ";" #g ";" #b "m"
    #define _ANSI_CODE_FG_8BIT(code)    "\033[38;5;" #code "m"

    #define _ANSI_CODE_BG_BLACK         "\033[40m"
    #define _ANSI_CODE_BG_RED           "\033[41m"
    #define _ANSI_CODE_BG_GREEN         "\033[42m"
    #define _ANSI_CODE_BG_YELLOW        "\033[43m"
    #define _ANSI_CODE_BG_BLUE          "\033[44m"
    #define _ANSI_CODE_BG_MAGENTA       "\033[45m"
    #define _ANSI_CODE_BG_CYAN          "\033[46m"
    #define _ANSI_CODE_BG_WHITE         "\033[47m"
    #define _ANSI_CODE_BG_RGB(r, g, b)  "\033[48;2;" #r ";" #g ";" #b "m"
    #define _ANSI_CODE_BG_8BIT(code)    "\033[48;5;" #code "m"

    #define _ANSI_STYLE(style)          _ANSI_CODE_##style
    #define _ANSI_FG_COLOR(color)       _ANSI_STYLE(FG_##color)
    #define _ANSI_BG_COLOR(color)       _ANSI_STYLE(BG_##color)

    #define STYLE_TEXT(style, text)           _ANSI_STYLE(style) text _ANSI_CODE_RESET
    #define COLOR_TEXT(color, text)           _ANSI_FG_COLOR(color) text _ANSI_CODE_RESET
    #define COLOR_BACKGROUND(color, text)     _ANSI_BG_COLOR(color) text _ANSI_CODE_RESET

    #define TEXT_BOLD(text)             STYLE_TEXT(BOLD, text)
    #define TEXT_BLINK(text)            STYLE_TEXT(BLINK, text)

    #define COLOR_RED(text) 			COLOR_TEXT(RED, text)
    #define COLOR_GREEN(text) 		    COLOR_TEXT(GREEN, text)
    #define COLOR_YELLOW(text) 		    COLOR_TEXT(YELLOW, text)
    #define COLOR_BLUE(text) 			COLOR_TEXT(BLUE, text)
    #define COLOR_MAGENTA(text) 		COLOR_TEXT(MAGENTA, text)
    #define COLOR_CYAN(text) 			COLOR_TEXT(CYAN, text)

    #define COLOR_RGB(r, g, b, text)    COLOR_TEXT(RGB(r, g, b), text)
    #define COLOR_8BIT(code, text)      COLOR_TEXT(8BIT(code), text)

    #define COLOR_SKY(text) 		    COLOR_8BIT(39, text)
    #define COLOR_PURPLE(text) 		    COLOR_8BIT(55, text)
    #define COLOR_LIME(text) 			COLOR_8BIT(190, text)
    #define COLOR_ORANGE(text) 			COLOR_8BIT(202, text)
    #define COLOR_PINK(text) 			COLOR_8BIT(204, text)
    #define COLOR_BANANA(text) 			COLOR_8BIT(220, text)

}

#endif /* INCLUDE_COLOR_HPP_ */
