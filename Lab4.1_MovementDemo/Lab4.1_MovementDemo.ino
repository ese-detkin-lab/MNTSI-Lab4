#define LEFT_A 2
#define LEFT_B 3
#define RIGHT_A 5
#define RIGHT_B 4

void forward();
void backward();
void turnLeft();
void turnRight();
void stop();

void setup() {
  // put your setup code here, to run once:
  pinMode(LEFT_A, OUTPUT);
  pinMode(LEFT_B, OUTPUT);
  pinMode(RIGHT_A, OUTPUT);
  pinMode(RIGHT_B, OUTPUT);
}
void loop() {
  forward();
  delay(500);
  stop();
  delay(500);
  backward();
  delay(500);
  stop();
  delay(500);
  turnLeft();
  delay(500);
  stop();
  delay(500);
  turnRight();
  delay(500);
  stop();
  delay(500);
  stop();
  delay(2000);
}

void stop(){
  digitalWrite(LEFT_A, LOW);
  digitalWrite(LEFT_B, LOW);
  digitalWrite(RIGHT_A, LOW);
  digitalWrite(RIGHT_B, LOW);
}

void forward(){
  digitalWrite(LEFT_A, HIGH);
  digitalWrite(LEFT_B, LOW);
  digitalWrite(RIGHT_A, HIGH);
  digitalWrite(RIGHT_B, LOW);
}

void backward(){
  digitalWrite(LEFT_A, LOW);
  digitalWrite(LEFT_B, HIGH);
  digitalWrite(RIGHT_A, LOW);
  digitalWrite(RIGHT_B, HIGH);
}

void turnRight(){
  digitalWrite(LEFT_A, HIGH);
  digitalWrite(LEFT_B, LOW);
  digitalWrite(RIGHT_A, LOW);
  digitalWrite(RIGHT_B, HIGH);
}

void turnLeft(){
  digitalWrite(LEFT_A, LOW);
  digitalWrite(LEFT_B, HIGH);
  digitalWrite(RIGHT_A, HIGH);
  digitalWrite(RIGHT_B, LOW);
}
