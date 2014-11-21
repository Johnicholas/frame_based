#include "mem.h"

#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

void* Mem_alloc(long nbytes, const char* file, int line) {
  void* ptr;

  assert(nbytes > 0);
  ptr = malloc(nbytes);
  assert(ptr);
  return ptr;
}

void* Mem_calloc(long count, long nbytes, const char* file, int line) {
  void* ptr;

  assert(count > 0);
  assert(nbytes > 0);
  ptr = calloc(count, nbytes);
  assert(ptr);
  return ptr;
}

void Mem_free(void* ptr, const char* file, int line) {
  if (ptr) {
    free(ptr);
  }
}

void* Mem_resize(void* ptr, long nbytes, const char* file, int line) {

  assert(ptr);
  assert(nbytes > 0);
  ptr = realloc(ptr, nbytes);
  assert(ptr);
  return ptr;
}
