
int led = 13;
int up = 7;
int down = 8;
int clutch = 9;
int launch = 10;
int nls = 11;
int paddleup = 22;
int paddledown = 23;


void setup() {
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(up, OUTPUT);
  pinMode(down, OUTPUT);
  pinMode(clutch, OUTPUT);
  pinMode(launch, OUTPUT);
  pinMode(nls, OUTPUT);
  analogRead(paddleup);  
  analogRead(paddledown); 
 
}


void loop() {

 
  digitalWrite(led, HIGH);
  int UpValue = analogRead(paddleup);
  // print out the value you read:
  Serial.println(UpValue);
  int DownValue = analogRead(paddledown);
  // print out the value you read:
  Serial.println(DownValue);

 
  if (UpValue <= 100) {
    
    digitalWrite(up, HIGH );
    //digitalWrite(nls, HIGH );
  }
  else{

    digitalWrite(up, LOW  );
    //digitalWrite(nls, LOW );
    
  }

  if (DownValue <= 100) {
    digitalWrite(clutch, HIGH);
    delay(100);
    digitalWrite(down, HIGH );
    delay(100);
    digitalWrite(clutch, LOW);
  }
  else{

    digitalWrite(down, LOW  );
  }
  
  
}
