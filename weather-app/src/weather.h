#ifndef WEATHER_H
#define WEATHER_H

typedef struct {
    char city[50];
    float temperature;
    char condition[50];
} Weather;

int load_weather_data(const char *filename, Weather *data, int max_entries);
void display_weather(const Weather *data, int count);

#endif


