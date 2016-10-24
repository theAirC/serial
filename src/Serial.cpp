// Include of all source files, emulating linking.
// To be used as a unity build.

// Includes are filtered based on target OS to reduce file io when compiling.

#include "serial.cc"

#if defined(__linux__)
    #include "impl/list_ports/list_ports_linux.cc"
    #include "impl/unix.cc"
#elif defined(__APPLE__)
    #include "impl/list_ports/list_ports_osx.cc"
    #include "impl/unix.cc"
#elif defined(_WIN32)
    #include "impl/list_ports/list_ports_win.cc"
    #include "impl/win.cc"
#else
    #error Serial| Unsupported platform
#endif
