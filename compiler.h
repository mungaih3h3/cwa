#ifndef COMPILER_H_INCLUDED
#define COMPILER_H_INCLUDED

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif // COMPILER_H_INCLUDED
