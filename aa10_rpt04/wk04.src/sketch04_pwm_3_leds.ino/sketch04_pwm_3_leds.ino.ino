// pwm_3_leds.ino  





// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {





 Serial.print("AA00,LED_R: ");
 Serial.print(pwm1);
 Serial.print(" LED_G: ");
 Serial.print(pwm2);
 Serial.print(" LED_B: ");
 Serial.println(pwm3);
 delay(10);
   
}

void pwmLed(int led, int pwmValue) {
  analogWrite(led,pwmValue);
  delay(10);
}
