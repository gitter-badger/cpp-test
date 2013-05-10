#ifndef _UTIL_H
#define _UTIL_H

#define _STR(s)  (#s)
#define STR(s) _STR(s)
#define _CONS(a, b)  a##b
#define CONS(a, b)  _CONS(a, b)

// define can use to alias anything, var or func
#define mock_STR STR

#endif

