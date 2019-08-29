#ifndef BLINKER_MQTT_H
#define BLINKER_MQTT_H

#include "BlinkerDebug.h"

void weather_data(blinker_callback_with_json_arg_t func);

void aqi_data(blinker_callback_with_json_arg_t func);

void wifi_init_sta(const char * _key, const char * _ssid, const char * _pswd, blinker_callback_with_string_arg_t _func);

void wifi_init_smart(const char * _key);

void device_register(void);

void blinker_mqtt_init(void);

// void initialise_wifi();

char * mqtt_device_name(void);

char * mqtt_auth_key(void);

void ali_type(const char *type, blinker_callback_with_string_arg_t func);

void duer_type(const char *type, blinker_callback_with_string_arg_t func);

void mi_type(const char *type, blinker_callback_with_string_arg_t func);

int available(void);

char *last_read(void);

void flush(void);

void blinker_https_get(const char * _host, const char * _url);

void blinker_https_post(const char * _host, const char * _url, const char * _msg);

void blinker_server(uint8_t type);

int8_t blinker_mqtt_print(char *_data, uint8_t need_check);

int8_t blinker_aligenie_mqtt_print(char *data);

int8_t blinker_dueros_mqtt_print(char *data);

int8_t blinker_miot_mqtt_print(char *data);

#endif
