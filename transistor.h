# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct transistor
{
  bool collector;
  bool base;
  bool emitter;
} transistor;

//create a new transistor with all leads off
transistor *new_transistor();

//apply current to transistor lead
bool feed_lead(transistor *, bool);

//remove current from transistor lead
bool starve_lead(transistor *, bool);

//print out transistor values
void print_transistor(transistor *);
