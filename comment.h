#ifndef COMMENT_H
#define COMMENT_H

#include "reply.h"

typedef struct Comment{
  char* username;
  char* content;
  Reply** replies;
  int numRep;
  int capacityRep;
} Comment;

Cpmment* create_comment (const char* username, const* content);
void free_comment (Comment* comment);
#endif
