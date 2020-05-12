#ifndef CHUNK_H_INCLUDED
#define CHUNK_H_INCLUDED

#include "common.h"
#include "memory.h"
#include "value.h"

typedef enum
{
    OP_CONSTANT,
    OP_RETURN
} OpCode;

typedef struct
{
    int count;
    int capacity;
    uint8_t* code;
    ValueArray constants;
    int* lines;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);
void freeChunk(Chunk* chunk);

#endif // CHUNK_H_INCLUDED
