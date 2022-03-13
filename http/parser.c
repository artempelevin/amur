#include <string.h>

#include "types.h"
#include "parser.h"

AMUR_HTTP_METHODS text_to_AMUR_HTTP_METHODS(char* text) {
    for (int i = 0; i < 9; i++) {
        if (strcmp(text, AMUR_HTTP_METHODS_STR[i]) == 0)
            return (AMUR_HTTP_METHODS) i;
    }
    return AMUR_METHOD_ERROR;
}


AMUR_HTTP_CODES text_to_AMUR_HTTP_CODES(char* text) {
    for (int i = 0; i < 73; i++) {
        if (strcmp(text, AMUR_HTTP_CODES_STR[i]) == 0)
            return (AMUR_HTTP_CODES) i;
    }
    return AMUR_CODE_ERROR;
}


AMUR_HTTP_VERSIONS text_to_AMUR_HTTP_VERSIONS(char* text) {
    for (int i = 0; i < 4; i++) {
        if (strcmp(text, AMUR_HTTP_VERSIONS_STR[i]) == 0)
            return (AMUR_HTTP_VERSIONS) i;
    }
    return AMUR_HTTP_VERSION_ERROR;
}

request_line parse_request_line(char *text) {
    request_line request_line = {AMUR_METHOD_ERROR, AMUR_CODE_ERROR, AMUR_HTTP_VERSION_ERROR};

    char *first_line = strtok(text, "\n");

    char *method_name = strtok(first_line, " ");
    request_line.method = text_to_AMUR_HTTP_METHODS(method_name);
    if (request_line.method == AMUR_METHOD_ERROR) {
        return request_line;
    }

    char *code = strtok(NULL, " ");
    request_line.code = text_to_AMUR_HTTP_CODES(code);
    if (request_line.code == AMUR_CODE_ERROR) {
        return request_line;
    }

    char *version = strtok(NULL, " ");
    request_line.version = text_to_AMUR_HTTP_VERSIONS(version);
    if (request_line.version == AMUR_HTTP_VERSION_ERROR) {
        return request_line;
    }

    return request_line;
}