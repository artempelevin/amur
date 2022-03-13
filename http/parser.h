#ifndef AMUR_HTTP_PARSER_H
#define AMUR_HTTP_PARSER_H

#include <stdbool.h>
#include "types.h"

typedef struct request_line {
    AMUR_HTTP_METHODS method;
    AMUR_HTTP_CODES code;
    AMUR_HTTP_VERSIONS version;
} request_line;


AMUR_HTTP_METHODS text_to_AMUR_HTTP_METHODS(char* text);

AMUR_HTTP_CODES text_to_AMUR_HTTP_CODES(char* text);

AMUR_HTTP_VERSIONS text_to_AMUR_HTTP_VERSIONS(char* text);

request_line parse_request_line(char *text);


#endif //AMUR_HTTP_PARSER_H
