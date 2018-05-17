
/** ****************************************************************************
 * 
 * 
 *                                 IO MODULE
 * 
 * 
 *  ****************************************************************************
 *  
 *  Author: Jose Fernando Lopez Fernandez
 *  
 *  Date:   17-May-2018
 *  
 *  ***************************************************************************/

#ifndef AUTOMATED_TESTING_IO_H_
#define AUTOMATED_TESTING_IO_H_

#ifndef CPP_STDLIB_IOSTREAM_INCLUDED
#define CPP_STDLIB_IOSTREAM_INCLUDED
#include <iostream>
#endif // CPP_STDLIB_IOSTREAM_INCLUDED

template <typename CharT, typename Traits = std::char_traits<CharT>>
std::basic_ostream<CharT, Traits>&
NL (std::basic_ostream<CharT, Traits>& outputStream)
{
    return outputStream << outputStream.widen('\n');
}

#endif // AUTOMATED_TESTING_IO_H_
