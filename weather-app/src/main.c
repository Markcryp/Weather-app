#include <stdio.h>
#include "weather.h"

#define MAX_ENTRIES 100

int main() {
    Weather data[MAX_ENTRIES];
    int count = load_weather_data("data/weather_data.txt", data, MAX_ENTRIES);

    if (count == 0) {
        printf("Failed to load weather data.\n");
        return 1;
    }

    display_weather(data, count);
    return 0;
}
