#include "../include/processing.h"

void write_log(const char *filepath, const char *message, const log_type_t level)
{
    FILE *file = fopen(filepath, "a");

    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    switch(level) {
        case SUCCESS: {
            fprintf(file, "[SUCCESS] 🟢 %s\n", message);
        } break;
        case WARNING: {
            fprintf(file, "[WARNING] 🟡 %s\n", message);
        } break;
        case ERROR: {
            fprintf(file, "[ERROR] 🔴 %s\n", message);
        } break;
        case FATAL: {
            fprintf(file, "[FATAL] 🔴 %s\n", message);
        } break;
        case FAILED: {
            fprintf(file, "[FAILED] 🔴 %s\n", message);
        } break;
        default: {
            fprintf(file, "Incorrect [LogType] (%d)\n", level);
        } break;
    }

    fclose(file);
}
