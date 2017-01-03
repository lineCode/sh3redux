/*++

Copyright (c) 2016  Palm Studios

Module Name:
        sh3log.hpp

Abstract:
        Defines logging functions.

Author:
        Alexander Hirsch

Environment:

Notes:

Revision History:

--*/
#ifndef SH3_LOG_HPP_INCLUDED
#define SH3_LOG_HPP_INCLUDED

// windows.h may define this
#ifdef ERROR
#undef ERROR
#endif

enum class LogLevel
{
    INFO,
    WARN,
    ERROR,
    FATAL,
    NONE,
};

[[gnu::format(printf, 2, 3)]] void Log(LogLevel logType, const char* str, ...);

/*++

Routine Description:
        Kill the process due to a fatal error being encountered
        and inform the user of the problem (as well as writing to
        the error log, log.txt)

Arguments:
        str - String to display to the user

Return Type:
        None

--*/
[[noreturn]] [[gnu::format(printf, 1, 2)]] void die(const char* str, ...);

#endif // SH3_LOG_HPP_INCLUDED