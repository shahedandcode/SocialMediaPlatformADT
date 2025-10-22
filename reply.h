#ifndef REPLY_H
#define REPLY_H

typedef struct Reply{
  char* username;
  char* content;
} Reply ;

Reply* create_reply(const char* username, const char* content);
void free_reply(Reply* reply);
#endif
