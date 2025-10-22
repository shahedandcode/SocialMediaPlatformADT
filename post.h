#ifndef POST_H
#define POST_H

#include "comment.h"

typedef struct POST {
  char* username;
  char* caption;
  Comment** comments;
  int numComm;
  int capacityComm;
} POST;

POST* create_post(const char* username, const char* caption);
void free_post(POST* post);
#endif
