// open source c library
// ==================================
//
// file_log.h
//
// Daniel Tanase
// 30/07/23

/*
 */

#ifndef FILE_LOG_H
#define FILE_LOG_H

#include <stdio.h>
#include <stdlib.h>

struct FileLog {
  // will write a message to a specified file
  void (*log_to_file)(const char* file_path, const char* log,
      const char* message, const char* file, const int line, const char* func);
};

// the constructor should be used to create a new instance
struct FileLog* new_file_log();

// the destructor should be used to destroy an existing instance
void destroy_file_log(struct FileLog* log);

#endif /* FILE_LOG_H */