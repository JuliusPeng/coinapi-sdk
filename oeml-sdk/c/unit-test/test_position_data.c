#ifndef position_data_TEST
#define position_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define position_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/position_data.h"
position_data_t* instantiate_position_data(int include_optional);



position_data_t* instantiate_position_data(int include_optional) {
  position_data_t* position_data = NULL;
  if (include_optional) {
    position_data = position_data_create(
      "XBTUSD",
      "BITMEX_PERP_BTC_USD",
      0.00134444,
      7,
      oeml___rest_api_position_data__"BUY",
      0.0,
      0.0,
      true,
      0.072323,
      Other position related information provided by the exchange.
    );
  } else {
    position_data = position_data_create(
      "XBTUSD",
      "BITMEX_PERP_BTC_USD",
      0.00134444,
      7,
      oeml___rest_api_position_data__"BUY",
      0.0,
      0.0,
      true,
      0.072323,
      Other position related information provided by the exchange.
    );
  }

  return position_data;
}


#ifdef position_data_MAIN

void test_position_data(int include_optional) {
    position_data_t* position_data_1 = instantiate_position_data(include_optional);

	cJSON* jsonposition_data_1 = position_data_convertToJSON(position_data_1);
	printf("position_data :\n%s\n", cJSON_Print(jsonposition_data_1));
	position_data_t* position_data_2 = position_data_parseFromJSON(jsonposition_data_1);
	cJSON* jsonposition_data_2 = position_data_convertToJSON(position_data_2);
	printf("repeating position_data:\n%s\n", cJSON_Print(jsonposition_data_2));
}

int main() {
  test_position_data(1);
  test_position_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // position_data_MAIN
#endif // position_data_TEST
