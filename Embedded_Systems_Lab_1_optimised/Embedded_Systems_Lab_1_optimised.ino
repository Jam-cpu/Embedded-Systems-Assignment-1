// Initializing Pins & Variables 
int b1 = 22;            // define button one input pin
int b2 = 23;            // define button one input pin
int sigA = 15;          // define pin waveform is output from
int sigB = 50;          // define signal B's 50us pulse
int a;                  // define param a, b, c, d, and mode
int b = 1300;
int c = 8;
int d = 2500;
int Mode = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, INPUT);       // define button pins as inputs
  pinMode(b2, INPUT);
  pinMode(sigA, OUTPUT);    // define signal pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  // IF loop to check if button one or button two has been pressed
  if(b1 == HIGH && b2 == LOW){            // ensure just button one is pressed
    digitalWrite(sigA, HIGH);             // ensure sigB's 50us pulse
    delayMicroseconds(sigB);              // is released at the start of the waveform
    for(int a = 100; a == 450; a + 50){   // establish for loop to output sigA
      digitalWrite(sigA, HIGH);           // set pulse length to increment by the appropiate amount / loop               
      delayMicroseconds(a);               // sigA HIGH for time a
      digitalWrite(sigA, LOW);
      delayMicroseconds(b);               // sigA LOW for time b
      }
      delayMicroseconds(d);               // ensure delay between pulse blocks only occurs as the last delay
    }
  // ELSE IF loop to check if button two is pressed to initiate mode 2  
  else if(b2 == HIGH && b1 == LOW){       // ensure just button 2 has been pressed
    digitalWrite(sigA, HIGH);             // ensure sigB's 50us pulse
    delayMicroseconds(sigB);              // is released at the start of the waveform
    for(int a = 450; a == 100; a - 50){   // establish inverted for loop to output MODE 2 sigA
      delayMicroseconds(a);           
      digitalWrite(sigA, LOW);            // same logic as previous for loop
      delayMicroseconds(b);               
      }
      delayMicroseconds(d);               // ensure delay between pulse blocks only occurs as the last delay
    }
}

// https://github.com/Jam-cpu/Embedded-Systems-Assignment-1.git
