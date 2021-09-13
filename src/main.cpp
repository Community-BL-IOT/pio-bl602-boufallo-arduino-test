#include <Arduino.h>

//LED pins for on-board RGB LED
//17 = R, 14 = G, B = 11
//schematics for "Pine 64" board: https://files.pine64.org/doc/Pinenut/Pine64%20BL602%20EVB%20Schematic%20ver%201.1.pdf 
#define LED_PIN 17

//if you're working with a DL-BL10 board (https://www.analoglamb.com/product/bl602-risc-v-wifi-bt-board-dt-bl10/)
//there is no on-board LED, connect one to GPIO17 ("D17").

void setup() { 
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200); 
}
void loop() {
    Serial.println("Hello from BL602!");
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
}