#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WEBSITE_DEV https://gitpod.io/#https://github.com/AndreHeber/fastdev 

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
   //define something for Windows (32-bit and 64-bit, this part is common)
   #define START_BROWSER "explorer WEBSITE_DEV"
   #ifdef _WIN64
      //define something for Windows (64-bit only)
   #else
      //define something for Windows (32-bit only)
   #endif
#elif __APPLE__
    #include <TargetConditionals.h>
    #if TARGET_IPHONE_SIMULATOR
         // iOS Simulator
    #elif TARGET_OS_IPHONE
        // iOS device
    #elif TARGET_OS_MAC
        // Other kinds of Mac OS
		#define START_BROWSER "open WEBSITE_DEV"
    #else
    #   error "Unknown Apple platform"
    #endif
#elif __linux__
    // linux
	#define START_BROWSER "open WEBSITE_DEV"
#elif __unix__ // all unices not caught above
    // Unix
	#define START_BROWSER "open WEBSITE_DEV"
#elif defined(_POSIX_VERSION)
    // POSIX
	#define START_BROWSER "open WEBSITE_DEV"
#else
#   error "Unknown compiler"
#endif

int main ( int argc, char ** argv ) {
    if ( argc != 2 ) {
        printf ( "# %s develop\n", argv [ 0 ] );
        exit ( 0 );
    }

    if ( strcmp ( argv [ 1 ] , "develop" ) == 0 )
        system ( START_BROWSER );

  return 0;
}
