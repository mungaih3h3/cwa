#ifndef COMPILER_H_INCLUDED
#define COMPILER_H_INCLUDED

#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif // COMPILER_H_INCLUDED
