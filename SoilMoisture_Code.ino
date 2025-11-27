
int soil_pin = 1;     
 
void setup() { 
  pinMode(soil_pin, INPUT); 
  Serial.begin(9600); 
}
void loop() { 
  int moisture_value = analogRead(soil_pin); 
 
  Serial.print("Soil Moisture value : "); 
  Serial.println(moisture_value); 
  // Checks if it has reached the threshold value 
  
  delay(1000); 
}
