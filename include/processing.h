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

/*
    @brief: write log with any message to file

    @param: filepath - path to file
    @param: message - message to write in log file
    @param: level - level of awareness

    @return: write in file in exact format
*/
void write_log(const char *filepath, const char *message, const log_type_t level);

#endif // PROCESSING_H
