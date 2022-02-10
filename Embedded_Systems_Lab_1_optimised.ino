// Initializing Pins & Variables 
int b1 = 22;
int b2 = 23;
int sigA = 15;

int a;
int p1 = a;
int p2 = a + 50;
int p3 = a + 100;
int p4 = a + 150;

int sigB = 50;
int b = 1300;
int c = 8;
int d = 2500;
int Mode = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(sigA, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // IF loop to check if button one or button two has been pressed
  if(b1 == HIGH && b2 == LOW){
    for(int a = 100; a == 450; a + 50){
      digitalWrite(sigA, HIGH);
      delayMicroseconds(sigB);
      delayMicroseconds(a);
      digitalWrite(sigA, LOW);
      delayMicroseconds(b);
      }
      delayMicroseconds(d);
    }
  // ELSE IF loop to check if button two is pressed to initiate mode 2  
  else if(b2 == HIGH && b1 == LOW){
    for(int a = 450; a == 100; a - 50){
      digitalWrite(sigA, HIGH);
      delayMicroseconds(sigB);
      delayMicroseconds(a);
      digitalWrite(sigA, LOW);
      delayMicroseconds(b);
      }
      delayMicroseconds(d);
    }
}
