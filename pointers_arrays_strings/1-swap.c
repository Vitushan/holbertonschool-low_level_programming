#include <stdio.h>
/**
 *  void swap_int(int *a, int *b)
 *  @*a integer one
 *  @*b integer two
 *  temporaire is temp variable for reverse two int.
 *  reverse the result in variable or pointer.
 *  return: always  void.
 *  **/
void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}
