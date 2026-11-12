#include <stdio.h>

#define BEGIN {
#define END }
#define PROCEDURE int
#define IS
#define ENTRY_POINT main
#define NOARG void
#define INTEGER int
#define EQUALS =
#define PRINT(...) printf(__VA_ARGS__)
#define ENDL ;
#define RET return
#define ZERO 0

PROCEDURE ENTRY_POINT(NOARG) IS
BEGIN
	INTEGER a EQUALS 5 ENDL
	PRINT("Hello, %i!\n", a) ENDL
	RET ZERO ENDL
END
