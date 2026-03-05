#define L 8
#define R 7
#define speedL 6
#define speedR 5
#define standby 3

void setup() {
 pinMode(5, OUTPUT);  //speed A
 pinMode(6, OUTPUT);  //speed B
 pinMode(7, OUTPUT);  //hannel A
 pinMode(8, OUTPUT);  //hannel B
 pinMode(3, OUTPUT);
}

void Left(int time_delay)
  {
    digitalWrite(L, LOW);
    digitalWrite(R, HIGH);
    analogWrite(speedL, 75);
    analogWrite(speedR, 75);
    delay(time_delay);

  }

  void Right(int time_delay)
  {
    digitalWrite(L, HIGH);
    digitalWrite(R, LOW);
    analogWrite(speedL, 75);
    analogWrite(speedR, 75);
    delay(time_delay);
  }

  void Forward (float distance) 
  {

int time_delay = distance/.0962;  //its going too far, we need to lower
  digitalWrite(L, HIGH);
  digitalWrite(R, HIGH);
  digitalWrite(standby, HIGH);
  analogWrite(speedL,255);
  analogWrite(speedR,249);
  delay(time_delay);
  }

  void Backward (int time_delay) 
  {
  digitalWrite(L, LOW);
  digitalWrite(R, LOW);
  digitalWrite(standby, HIGH);
  analogWrite(speedL,255);
  analogWrite(speedR,255);
  delay(time_delay);
  }

void Stop (int time_delay) {
  digitalWrite(standby, LOW);
  delay(time_delay); }

void loop() {

  delay(1000);

  Forward (5);
  Stop(10000);

  Forward (10);
  Stop(10000);

  Forward (15);
  Stop(10000);

  Forward (20);
  Stop(10000);



 
  while (1) { 
    digitalWrite(standby, LOW);
  }

  // maddie testing
  //test2

}