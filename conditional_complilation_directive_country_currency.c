/* Conditional Compilation Directives */

/* Program uses the vlaue of ACTIVE_COUNTRY to define currency sign */
#include <stdio.h>

#define INDIA 0
#define US 1
#define FRANCE 2

#define ACTIVE_COUNTRY INDIA

#if ACTIVE_COUNTRY == INDIA
char currency[]= "Indian Rupee";

#elif ACTIVE_CONUTRY == US
char currency[]= "Dollar";

#elif ACTIVE_COUNTRY == FRANCE
char currency[]= "Franc";

#else
char currency[]= "Invalid Currency";

#endif