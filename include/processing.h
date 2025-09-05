#ifndef PROCESSING_H
#define PROCESSING_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum log_type {
    Success = 0,
    Warning,
    Error,
    Fatal,
    Failed,
} log_type_t;

#endif // PROCESSING_H
