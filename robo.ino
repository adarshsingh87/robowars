//MOTOR 1
#define MOTOR_A1_PIN 7//connected to pin 7 on motor driver
#define MOTOR_B1_PIN 8//connected to pin 8 on motor driver

//MOTOR 2
#define MOTOR_A2_PIN 4//connected to pin 4 on motor driver
#define MOTOR_B2_PIN 9//connected to pin 9 on motor driver

#define PWM_MOTOR_1 5//connected to pin 5 on motor driver
#define PWM_MOTOR_2 6//connected to pin 6 on motor driver
int channel1 = 2; // defines the channels that are connected
int channel2 = 3;// to pins 9 and 10 of arduino respectively

int Channel1 ; // Used later to 
int Channel2 ; // store values
void setup()                         
{
  pinMode(MOTOR_A1_PIN, OUTPUT);
  pinMode(MOTOR_B1_PIN, OUTPUT);
  pinMode(channel1, INPUT);
  pinMode(channel2, INPUT);
  pinMode(MOTOR_A2_PIN, OUTPUT);
  pinMode(MOTOR_B2_PIN, OUTPUT);

  pinMode(PWM_MOTOR_1, OUTPUT);
  pinMode(PWM_MOTOR_2, OUTPUT);
  Serial.begin (9600);
}

void loop(){
    {Channel1 = (pulseIn (channel1, HIGH));
    Channel2 = (pulseIn (channel2, HIGH));
    Serial.println (Channel1);
    Serial.println (Channel2);
    if (Channel1 > 1300 && Channel1 < 1600 && Channel2 > 1300 && Channel2 < 1600 ){nothing();} 
    if (Channel1 < 1300 && Channel2 < 1300) { reverse() ;}
    if (Channel1 > 1600 && Channel2 > 1600) { forward() ;}  
    if (Channel1 < 1300 && Channel2 > 1600) { left() ;}
    if (Channel1 > 1600 && Channel2 < 1300) { right();}
}}
void nothing(){
    //motor_speed = 0;
    analogWrite(PWM_MOTOR_1, 0);
    analogWrite(PWM_MOTOR_2, 0);
    digitalWrite(MOTOR_A1_PIN, LOW);
    digitalWrite(MOTOR_A2_PIN, LOW);
    digitalWrite(MOTOR_B1_PIN, LOW);
    digitalWrite(MOTOR_B2_PIN, LOW);
}
void forward(){
    //motor_speed = 0;
    analogWrite(PWM_MOTOR_1, 1000);
    analogWrite(PWM_MOTOR_2, 1000);
    digitalWrite(MOTOR_A1_PIN, HIGH);
    digitalWrite(MOTOR_A2_PIN, HIGH);
    digitalWrite(MOTOR_B1_PIN, LOW);
    digitalWrite(MOTOR_B2_PIN, LOW);
}
void reverse(){
    //motor_speed = 0;
    analogWrite(PWM_MOTOR_1, 1000);
    analogWrite(PWM_MOTOR_2, 1000);
    digitalWrite(MOTOR_A1_PIN, LOW);
    digitalWrite(MOTOR_A2_PIN, LOW);
    digitalWrite(MOTOR_B1_PIN, HIGH);
    digitalWrite(MOTOR_B2_PIN, HIGH);
}
void left(){
    //motor_speed = 0;
    analogWrite(PWM_MOTOR_1, 1000);
    analogWrite(PWM_MOTOR_2, 1000);
    digitalWrite(MOTOR_A1_PIN, LOW);
    digitalWrite(MOTOR_A2_PIN, HIGH);
    digitalWrite(MOTOR_B1_PIN, HIGH);
    digitalWrite(MOTOR_B2_PIN, LOW);
}
void right(){
    //motor_speed = 0;
    analogWrite(PWM_MOTOR_1, 1000);
    analogWrite(PWM_MOTOR_2, 1000);
    digitalWrite(MOTOR_A1_PIN, HIGH);
    digitalWrite(MOTOR_A2_PIN, LOW);
    digitalWrite(MOTOR_B1_PIN, LOW);
    digitalWrite(MOTOR_B2_PIN, HIGH);
}
