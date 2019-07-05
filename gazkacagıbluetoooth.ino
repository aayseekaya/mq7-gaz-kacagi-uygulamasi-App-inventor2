const int AOUTpin=0;
const int DOUTpin=8;
const int ledPin=13;

int limit; int value;

void setup() { 
  Serial.begin(9600);

  pinMode(DOUTpin, INPUT);
 
  pinMode(ledPin, OUTPUT);
 
  }


void loop() {
  value= analogRead(AOUTpin);
 
 limit= digitalRead(DOUTpin);

  Serial.print("CO value: "); 
  Serial.println(value);

  Serial.print("Limit: ");
  Serial.print(limit);
  
  delay(100); 
  if (limit == HIGH)
  { 
    Serial.println("Bad");
    } 
    else{ 
      Serial.println("OK");
      } 
}
