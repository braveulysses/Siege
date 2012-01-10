#ifndef ARRAY_H
#define ARRAY_H

/**
 * ARRAY object
 */
typedef struct ARRAY_T *ARRAY;
extern  size_t ARRAYSIZE;

ARRAY  new_array();
ARRAY  array_destroy(ARRAY this);
void   array_push(ARRAY this, void *thing);
void   array_npush(ARRAY this, void *thing, size_t len);
void * array_get(ARRAY this, int index);
void * array_next(ARRAY this);
void * array_prev(ARRAY this);
size_t array_length(ARRAY this);

#endif/*ARRAY_H*/

