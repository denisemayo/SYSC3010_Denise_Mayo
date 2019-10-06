
#define var_resistor A0

int var_resistor_value;

// the setup function runs once when you press reset or power the board
void setup() {
  // set 
  pinMode(LED_BUILTIN, OUTPUT); 
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
   
  var_resistor_value = analogRead(var_resistor);
  Serial.println(var_resistor_value);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(var_resistor_value);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(var_resistor_value);                       // wait for a second
}
