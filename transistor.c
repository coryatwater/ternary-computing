# include "transistor.h"

/**
 *create a pointer to a new transistor
 *@return transistor *new transistor with all leads off
 */
transistor *new_transistor()
{
  transistor *t = malloc(sizeof(transistor));
  t->collector = false;
  t->base = false;
  t->emitter = false;
  return t;
}

/**
 *switches on a transistor lead
 *@param transistor to switch on
 *@param bool lead to switch on in following format
 * 1-collector
 * 0-base
 *@return bool success
 */
bool feed_lead(transistor *t, bool lead)
{
  if(lead){ t->collector = true; }
  else{ t->base = true; }

  if (t->base && t->collector)
  {
    t->emitter = true;
  }
  return true;
}

/**
 *switches off a transistor lead
 *@param transistor to switch off
 *@param bool lead to switch off in following format
 * 1-collector
 * 0-base
 *@return bool success
 */
bool starve_lead(transistor *t, bool lead)
{
  if(lead){ t->collector = false; }
  else{ t->base = false; }

  if (!t->base || !t->collector)
  {
    t->emitter = false;
  }
  return true;
}
/**
 * Print out transistor's lead values
 * @param transistor to print out
 */
void print_transistor(transistor *t)
{
  printf("C: %d\nB: %d\nE: %d\n",
  t->collector, t->base, t->emitter);
}
