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

    if(distance <=10)
    {
      int time_delay = (distance/109.23)*1000;  
  digitalWrite(L, HIGH);
  digitalWrite(R, HIGH);
  digitalWrite(standby, HIGH);
  analogWrite(speedL,255);
  analogWrite(speedR,249);
  delay(time_delay);
    }
    else if(distance >10 && distance < 40)
    {
int time_delay = (distance/120)*1000;  
  digitalWrite(L, HIGH);
  digitalWrite(R, HIGH);
  digitalWrite(standby, HIGH);
  analogWrite(speedL,255);
  analogWrite(speedR,249);
  delay(time_delay);
    }
    else if(distance >= 40)
    {
    int time_delay = (distance/113)*1000; 
      digitalWrite(L, HIGH);
  digitalWrite(R, HIGH);
  digitalWrite(standby, HIGH);
  analogWrite(speedL,255);
  analogWrite(speedR,249);
  delay(time_delay);
    }

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

  Forward(20);
  Stop(10000);

  Forward(25);
  Stop(10000);

   Forward(30);
  Stop(10000);

 Forward (35);
  Stop(10000);

   Forward (40);
  Stop(10000);

   Forward (50);
  Stop(10000);

   Forward (60);
  Stop(10000);

 
  while (1) { 
    digitalWrite(standby, LOW);
  }

  // maddie testing
  
  // mario test

}