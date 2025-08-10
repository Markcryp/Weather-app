#include <stdio.h>
#include <string.h>
#include "weather.h"

int load_weather_data(const char *filename, Weather *data, int max_entries) {
    FILE *file = fopen(filename, "r");
    if (!file) return 0;

    int i = 0;
    while (i < max_entries && fscanf(file, "%49s %f %49s", data[i].city, &data[i].temperature, data[i].condition) == 3) {
        i++;
    }

    fclose(file);
    return i;
}

void display_weather(const Weather *data, int count) {
    printf("Weather Report:\n");
    for (int i = 0; i < count; i++) {
        printf("%s: %.1f°C, %s\n", data[i].city, data[i].temperature, data[i].condition);
    }
}
