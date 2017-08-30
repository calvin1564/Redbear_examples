
/*
 * This is a simple blink example which turns off and on the onboard led 
 * connected to digital Pin 7 (D7) on the Redbear. 
 * 
 */

//SYSTEM_THREAD(ENABLED);
//BLE_SETUP(DISABLED);
//SYSTEM_MODE(MANUAL);

int led1 = D7;



void setup() {
  // Setup runs once. 
  pinMode(led1, OUTPUT);
}

void loop() {
  // Loop code runs repeatedly.
  
  digitalWrite(led1, HIGH);

  delay(1000);

  digitalWrite(led1, LOW);

  delay(1000);
  
}
