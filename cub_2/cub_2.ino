/**********************************************************************************
**                                                                               **
**                      Entrades i sortides digitals                             **
**                          Cub de leds 2                                        **
**  TeoDor DeDiu                                                                 **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led2 = 2;          // donar nom al pin 2 de l’Arduino
const int led3 = 3;          // donar nom al pin 3 de l’Arduino
const int led4 = 4;          // donar nom al pin 4 de l’Arduino
const int led5 = 5;          // donar nom al pin 5 de l’Arduino
const int led6 = 6;          // donar nom al pin 6 de l’Arduino
const int led7 = 7;          // donar nom al pin 7 de l’Arduino
const int led8 = 8;          // donar nom al pin 8 de l’Arduino
const int led9 = 9;          // donar nom al pin 9 de l’Arduino
const int led10 = 10;         // donar nom al pin 10 de l’Arduino
const int led11 = 11;         // donar nom al pin 11 de l’Arduino Vermell
const int led12 = 12;         // donar nom al pin 12 de l’Arduino Verd
const int led13 = 13;         // donar nom al pin 13 de l’Arduino Groc
int tempo = 1;
//***********************************************************************************
void setup() {   
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);
pinMode(led13, OUTPUT);
}
void loop() {
digitalWrite(led11,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
delay(tempo);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
delay(tempo);
digitalWrite(led12,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
delay(tempo);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led12,LOW);
delay(tempo);
digitalWrite(led13,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
delay(tempo);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led13,LOW);
delay(tempo);
}
