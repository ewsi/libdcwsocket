

#include "./dcwsocket.h"


#ifdef __linux__
  #include "./dcwsocket.c.linux"
#elif __APPLE__
  #include "./dcwsocket.c.osx"
#else
  #error Unknown Platform
#endif

