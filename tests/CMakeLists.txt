project(amur_tests)


add_executable(amur_tests test_http_parser.c
        ../http/types.h
        ../http/parser.h
        ../http/parser.c)