#include <assert.h>

#include "../http/parser.h"


int main() {
    assert(text_to_AMUR_HTTP_METHODS("GET") == AMUR_GET);
    assert(text_to_AMUR_HTTP_METHODS("HEAD") == AMUR_HEAD);
    assert(text_to_AMUR_HTTP_METHODS("POST") == AMUR_POST);
    assert(text_to_AMUR_HTTP_METHODS("PUT") == AMUR_PUT);
    assert(text_to_AMUR_HTTP_METHODS("DELETE") == AMUR_DELETE);
    assert(text_to_AMUR_HTTP_METHODS("CONNECT") == AMUR_CONNECT);
    assert(text_to_AMUR_HTTP_METHODS("OPTIONS") == AMUR_OPTIONS);
    assert(text_to_AMUR_HTTP_METHODS("TRACE") == AMUR_TRACE);
    assert(text_to_AMUR_HTTP_METHODS("PATH") == AMUR_PATCH);
    assert(text_to_AMUR_HTTP_METHODS("LOL") == AMUR_METHOD_ERROR);

    assert(text_to_AMUR_HTTP_CODES("100") == AMUR_CODE_100);
    assert(text_to_AMUR_HTTP_CODES("101") == AMUR_CODE_101);
    assert(text_to_AMUR_HTTP_CODES("102") == AMUR_CODE_102);
    assert(text_to_AMUR_HTTP_CODES("103") == AMUR_CODE_103);
    assert(text_to_AMUR_HTTP_CODES("200") == AMUR_CODE_200);
    assert(text_to_AMUR_HTTP_CODES("201") == AMUR_CODE_201);
    assert(text_to_AMUR_HTTP_CODES("202") == AMUR_CODE_202);
    assert(text_to_AMUR_HTTP_CODES("203") == AMUR_CODE_203);
    assert(text_to_AMUR_HTTP_CODES("204") == AMUR_CODE_204);
    assert(text_to_AMUR_HTTP_CODES("205") == AMUR_CODE_205);
    assert(text_to_AMUR_HTTP_CODES("206") == AMUR_CODE_206);
    assert(text_to_AMUR_HTTP_CODES("207") == AMUR_CODE_207);
    assert(text_to_AMUR_HTTP_CODES("208") == AMUR_CODE_208);
    assert(text_to_AMUR_HTTP_CODES("300") == AMUR_CODE_300);
    assert(text_to_AMUR_HTTP_CODES("301") == AMUR_CODE_301);
    assert(text_to_AMUR_HTTP_CODES("302") == AMUR_CODE_302);
    assert(text_to_AMUR_HTTP_CODES("303") == AMUR_CODE_303);
    assert(text_to_AMUR_HTTP_CODES("304") == AMUR_CODE_304);
    assert(text_to_AMUR_HTTP_CODES("305") == AMUR_CODE_305);
    assert(text_to_AMUR_HTTP_CODES("306") == AMUR_CODE_306);
    assert(text_to_AMUR_HTTP_CODES("307") == AMUR_CODE_307);
    assert(text_to_AMUR_HTTP_CODES("308") == AMUR_CODE_308);
    assert(text_to_AMUR_HTTP_CODES("400") == AMUR_CODE_400);
    assert(text_to_AMUR_HTTP_CODES("401") == AMUR_CODE_401);
    assert(text_to_AMUR_HTTP_CODES("402") == AMUR_CODE_402);
    assert(text_to_AMUR_HTTP_CODES("403") == AMUR_CODE_403);
    assert(text_to_AMUR_HTTP_CODES("404") == AMUR_CODE_404);
    assert(text_to_AMUR_HTTP_CODES("405") == AMUR_CODE_405);
    assert(text_to_AMUR_HTTP_CODES("406") == AMUR_CODE_406);
    assert(text_to_AMUR_HTTP_CODES("407") == AMUR_CODE_407);
    assert(text_to_AMUR_HTTP_CODES("408") == AMUR_CODE_408);
    assert(text_to_AMUR_HTTP_CODES("409") == AMUR_CODE_409);
    assert(text_to_AMUR_HTTP_CODES("410") == AMUR_CODE_410);
    assert(text_to_AMUR_HTTP_CODES("411") == AMUR_CODE_411);
    assert(text_to_AMUR_HTTP_CODES("412") == AMUR_CODE_412);
    assert(text_to_AMUR_HTTP_CODES("413") == AMUR_CODE_413);
    assert(text_to_AMUR_HTTP_CODES("414") == AMUR_CODE_414);
    assert(text_to_AMUR_HTTP_CODES("415") == AMUR_CODE_415);
    assert(text_to_AMUR_HTTP_CODES("416") == AMUR_CODE_416);
    assert(text_to_AMUR_HTTP_CODES("417") == AMUR_CODE_417);
    assert(text_to_AMUR_HTTP_CODES("418") == AMUR_CODE_418);
    assert(text_to_AMUR_HTTP_CODES("419") == AMUR_CODE_419);
    assert(text_to_AMUR_HTTP_CODES("421") == AMUR_CODE_421);
    assert(text_to_AMUR_HTTP_CODES("422") == AMUR_CODE_422);
    assert(text_to_AMUR_HTTP_CODES("423") == AMUR_CODE_423);
    assert(text_to_AMUR_HTTP_CODES("424") == AMUR_CODE_424);
    assert(text_to_AMUR_HTTP_CODES("425") == AMUR_CODE_425);
    assert(text_to_AMUR_HTTP_CODES("426") == AMUR_CODE_426);
    assert(text_to_AMUR_HTTP_CODES("428") == AMUR_CODE_428);
    assert(text_to_AMUR_HTTP_CODES("429") == AMUR_CODE_429);
    assert(text_to_AMUR_HTTP_CODES("431") == AMUR_CODE_431);
    assert(text_to_AMUR_HTTP_CODES("449") == AMUR_CODE_449);
    assert(text_to_AMUR_HTTP_CODES("455") == AMUR_CODE_455);
    assert(text_to_AMUR_HTTP_CODES("499") == AMUR_CODE_499);
    assert(text_to_AMUR_HTTP_CODES("500") == AMUR_CODE_500);
    assert(text_to_AMUR_HTTP_CODES("501") == AMUR_CODE_501);
    assert(text_to_AMUR_HTTP_CODES("502") == AMUR_CODE_502);
    assert(text_to_AMUR_HTTP_CODES("503") == AMUR_CODE_503);
    assert(text_to_AMUR_HTTP_CODES("504") == AMUR_CODE_504);
    assert(text_to_AMUR_HTTP_CODES("505") == AMUR_CODE_505);
    assert(text_to_AMUR_HTTP_CODES("506") == AMUR_CODE_506);
    assert(text_to_AMUR_HTTP_CODES("507") == AMUR_CODE_507);
    assert(text_to_AMUR_HTTP_CODES("508") == AMUR_CODE_508);
    assert(text_to_AMUR_HTTP_CODES("509") == AMUR_CODE_509);
    assert(text_to_AMUR_HTTP_CODES("510") == AMUR_CODE_510);
    assert(text_to_AMUR_HTTP_CODES("511") == AMUR_CODE_511);
    assert(text_to_AMUR_HTTP_CODES("520") == AMUR_CODE_520);
    assert(text_to_AMUR_HTTP_CODES("521") == AMUR_CODE_521);
    assert(text_to_AMUR_HTTP_CODES("522") == AMUR_CODE_522);
    assert(text_to_AMUR_HTTP_CODES("523") == AMUR_CODE_523);
    assert(text_to_AMUR_HTTP_CODES("524") == AMUR_CODE_524);
    assert(text_to_AMUR_HTTP_CODES("525") == AMUR_CODE_525);
    assert(text_to_AMUR_HTTP_CODES("526") == AMUR_CODE_526);
    assert(text_to_AMUR_HTTP_CODES("600") == AMUR_CODE_ERROR);

    assert(text_to_AMUR_HTTP_VERSIONS("HTTP/0.9") == AMUR_GET);
    assert(text_to_AMUR_HTTP_VERSIONS("HTTP/1.0") == AMUR_HEAD);
    assert(text_to_AMUR_HTTP_VERSIONS("HTTP/1.1") == AMUR_POST);
    assert(text_to_AMUR_HTTP_VERSIONS("HTTP/2") == AMUR_PUT);
    assert(text_to_AMUR_HTTP_VERSIONS("HTTP/321") == AMUR_HTTP_VERSION_ERROR);

    char request1[] = "GET 100 HTTP/1.1\n";
    request_line request_line1 = parse_request_line(request1);
    assert(request_line1.method == AMUR_GET);
    assert(request_line1.code == AMUR_CODE_100);
    assert(request_line1.version == AMUR_HTTP_1_1);

    char request2[] = "GETS 100 HTTP/1.1\n";
    request_line request_line2 = parse_request_line(request2);
    assert(request_line2.method == AMUR_METHOD_ERROR);

    char request3[] = "GET 600 HTTP/1.1\n";
    request_line request_line3 = parse_request_line(request3);
    assert(request_line3.code == AMUR_CODE_ERROR);

    char request4[] = "GET 100 HTTP/3\n";
    request_line request_line4 = parse_request_line(request4);
    assert(request_line4.version == AMUR_HTTP_VERSION_ERROR);

    char request5[] = "test_text";
    request_line request_line5 = parse_request_line(request5);
    assert(request_line5.method == AMUR_METHOD_ERROR);

    return 0;
}

