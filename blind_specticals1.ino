#define trigPin1 A0 
#define echoPin1 A1
#define trigPin2 2 
#define echoPin2 3
#define buzzer 13 


void setup() {
  Serial.begin (9600); 
  pinMode(trigPin1, OUTPUT); 
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT); 
  pinMode(echoPin2, INPUT); 
  pinMode(buzzer, OUTPUT);
}


void loop() { 
  long duration, distance;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration = pulseIn(echoPin1, HIGH);
  distance = (duration/2) / 29.1;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration = pulseIn(echoPin2, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);
    Serial.println(" cm");
  
  
if (distance > 30 and distance < 62) { 
    tone(buzzer,100,50);  
     }
    if (distance > 0 and distance < 31) { 
    tone(buzzer,100,50);
  }
   
  else {
    }
  delay (500);
  
}
