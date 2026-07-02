#ifndef CONFIG_H
#define CONFIG_H

// ==========================================
//              WiFi Settings
// ==========================================
const char* WIFI_SSID     = "YOUR_WIFI_SSID";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";

// ==========================================
//            Hardware Settings
// ==========================================
// IR Transmitter
#define IR_SEND_PIN       15  // GP15

// IR Receiver
#define IR_RECEIVE_PIN    3   // GP3

// Light Sensors (Photoresistors)
#define LIGHT_SENSOR_PIN_L  28  // GP28 (ADC2)
#define LIGHT_SENSOR_PIN_R  27  // GP27 (ADC1)
#define LIGHT_ON_THRESHOLD  350 // ADC threshold for normal light detection (0-1023)
#define LIGHT_NIGHT_THRESHOLD 100 // ADC threshold for night light detection (0-1023)

// Fujitsu ID (Custom Code): 0=A, 1=B, 2=C, 3=D
// If AC doesn't respond, change this value (0-3) and re-flash.
#define FUJITSU_CUSTOM_CODE 0

// ==========================================
//             Web Server Settings
// ==========================================
#define WEB_PORT          80

#endif
