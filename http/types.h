#ifndef AMUR_HTTP_TYPES_H
#define AMUR_HTTP_TYPES_H

typedef enum AMUR_HTTP_METHODS {
    AMUR_GET,
    AMUR_HEAD,
    AMUR_POST,
    AMUR_PUT,
    AMUR_DELETE,
    AMUR_CONNECT,
    AMUR_OPTIONS,
    AMUR_TRACE,
    AMUR_PATCH,

    AMUR_METHOD_ERROR
} AMUR_HTTP_METHODS;
static const char* AMUR_HTTP_METHODS_STR[] = {"GET", "HEAD", "POST", "PUT", "DELETE",
                                              "CONNECT", "OPTIONS", "TRACE", "PATH"};

typedef enum AMUR_HTTP_CODES {
    AMUR_CODE_100,
    AMUR_CODE_101,
    AMUR_CODE_102,
    AMUR_CODE_103,

    AMUR_CODE_200,
    AMUR_CODE_201,
    AMUR_CODE_202,
    AMUR_CODE_203,
    AMUR_CODE_204,
    AMUR_CODE_205,
    AMUR_CODE_206,
    AMUR_CODE_207,
    AMUR_CODE_208,

    AMUR_CODE_300,
    AMUR_CODE_301,
    AMUR_CODE_302,
    AMUR_CODE_303,
    AMUR_CODE_304,
    AMUR_CODE_305,
    AMUR_CODE_306,
    AMUR_CODE_307,
    AMUR_CODE_308,

    AMUR_CODE_400,
    AMUR_CODE_401,
    AMUR_CODE_402,
    AMUR_CODE_403,
    AMUR_CODE_404,
    AMUR_CODE_405,
    AMUR_CODE_406,
    AMUR_CODE_407,
    AMUR_CODE_408,
    AMUR_CODE_409,
    AMUR_CODE_410,
    AMUR_CODE_411,
    AMUR_CODE_412,
    AMUR_CODE_413,
    AMUR_CODE_414,
    AMUR_CODE_415,
    AMUR_CODE_416,
    AMUR_CODE_417,
    AMUR_CODE_418,
    AMUR_CODE_419,
    AMUR_CODE_421,
    AMUR_CODE_422,
    AMUR_CODE_423,
    AMUR_CODE_424,
    AMUR_CODE_425,
    AMUR_CODE_426,
    AMUR_CODE_428,
    AMUR_CODE_429,
    AMUR_CODE_431,
    AMUR_CODE_449,
    AMUR_CODE_455,
    AMUR_CODE_499,

    AMUR_CODE_500,
    AMUR_CODE_501,
    AMUR_CODE_502,
    AMUR_CODE_503,
    AMUR_CODE_504,
    AMUR_CODE_505,
    AMUR_CODE_506,
    AMUR_CODE_507,
    AMUR_CODE_508,
    AMUR_CODE_509,
    AMUR_CODE_510,
    AMUR_CODE_511,
    AMUR_CODE_520,
    AMUR_CODE_521,
    AMUR_CODE_522,
    AMUR_CODE_523,
    AMUR_CODE_524,
    AMUR_CODE_525,
    AMUR_CODE_526,

    AMUR_CODE_ERROR
} AMUR_HTTP_CODES;
static const char *AMUR_HTTP_CODES_STR[] = {"100","101","102","103","200","201","202","203",
                                            "204","205","206","207","208","300","301","302",
                                            "303","304","305","306","307","308","400","401",
                                            "402","403","404","405","406","407","408","409",
                                            "410","411","412","413","414","415","416","417",
                                            "418","419","421","422","423","424","425","426",
                                            "428","429","431","449","455","499","500","501",
                                            "502","503","504","505","506","507","508","509",
                                            "510","511","520","521","522","523","524","525","526"};

typedef enum AMUR_HTTP_VERSIONS {
    AMUR_HTTP_0_9,
    AMUR_HTTP_1_0,
    AMUR_HTTP_1_1,
    AMUR_HTTP_2,

    AMUR_HTTP_VERSION_ERROR
} AMUR_HTTP_VERSIONS;
static const char* AMUR_HTTP_VERSIONS_STR[] = {"HTTP/0.9", "HTTP/1.0", "HTTP/1.1", "HTTP/2"};

#endif //AMUR_HTTP_TYPES_H
