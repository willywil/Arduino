int DOT = 8;
int CINDY = 1;
int HARRY = 2;
int LARRY = 3;
int MARY = 4;
int CARRIE = 5;
int CHARLIE = 6;
int LULU = 7;
int n = 1 ;
void off ();

void setup() {
  // put your setup code here, to run once:
pinMode (DOT, OUTPUT);
pinMode (CINDY,OUTPUT);
pinMode(HARRY, OUTPUT);
pinMode (LARRY, OUTPUT);
pinMode (MARY, OUTPUT);
pinMode (CARRIE, OUTPUT);
pinMode (CHARLIE, OUTPUT);
pinMode (LULU, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// for(n = 0; n < 11; n++){
  Serial.println("new line");

  switch (n){
  case 0 :
  Serial.println('0');
  digitalWrite(DOT,HIGH); //8
  digitalWrite(CINDY,HIGH); //1
  //digitalWrite(HARRY,HIGH); //2
  digitalWrite(LARRY,HIGH); //3
  digitalWrite(MARY,HIGH); //4
  digitalWrite(CARRIE,HIGH); //5
  digitalWrite(CHARLIE,HIGH); //6
  digitalWrite(LULU,HIGH); //7
  //off();
  break;

   case 1:
   Serial.println('1');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
 // digitalWrite(HARRY,HIGH);
  //digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
 // digitalWrite(CARRIE,HIGH);
 // digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

  case 2:
  Serial.println('2');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  //digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 3:
   Serial.println('3');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  //digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 4:
   Serial.println('4');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
 // digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 5:
   Serial.println('5');
  digitalWrite(DOT,HIGH);
  //digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;
  
   case 6:
   Serial.println('6');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 7:
   Serial.println('7');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 8:
   Serial.println('8');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;

   case 9:
   Serial.println('9');
  digitalWrite(DOT,HIGH);
  digitalWrite(CINDY,HIGH);
  digitalWrite(HARRY,HIGH);
  digitalWrite(LARRY,HIGH);
  digitalWrite(MARY,HIGH);
  digitalWrite(CARRIE,HIGH);
  digitalWrite(CHARLIE,HIGH);
  digitalWrite(LULU,HIGH);
  off();
  break;
  default:
  digitalWrite(DOT,LOW);
  digitalWrite(CINDY,LOW);
  digitalWrite(HARRY,LOW);
  digitalWrite(LARRY,LOW);
  digitalWrite(MARY,LOW);
  digitalWrite(CARRIE,LOW);
  digitalWrite(CHARLIE,LOW);
  digitalWrite(LULU,LOW);
  }
  
delay(1000);
}

//}

void off(){
  Serial.println("OFF");
  delay(1000);
  digitalWrite(DOT,LOW);
  digitalWrite(CINDY,LOW);
  digitalWrite(HARRY,LOW);
  digitalWrite(LARRY,LOW);
  digitalWrite(MARY,LOW);
  digitalWrite(CARRIE,LOW);
  digitalWrite(CHARLIE,LOW);
  digitalWrite(LULU,LOW);
  delay(1000);
  
  }
