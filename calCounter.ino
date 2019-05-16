#include <Logging.h>
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
 int D1=30;
 int D2=31;
 int D3=32;
 int D4=33;
 int A=34;
 int B=35;
 int C=36;
 int D=37;
 int E=38;
 int F=39;
 int G=40;
 void displayFourAt(int i);
 void clearAll();
 void displayString(String str);
 char intToString(int i);
  
  unsigned long previousMillis=0;
  unsigned long interval=1000;
  
  int increment=0;
  int hours=0;
  int minutes=0;
  int seconds=0;
  char message[50]="";
  char characters[50]="";
  int time[4]={0,0,0,0};
  
  
  char keys[100];
  int * objects[100];
  
  int mode=5;
  int pow(int number,int power);
  int digitOf(int digit, int number);


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i=30;i<41;i++){
  pinMode(i, OUTPUT);    
  } 
}

// the loop routine runs over and over again forever:
void loop() {
  
 int adc_key_in = analogRead(0);
 
 if (adc_key_in < 60) {
    rightHeld();
  }
  else if (adc_key_in < 200) {
    upHeld();
  }
  else if (adc_key_in < 400){
    downHeld();
  }
  else if (adc_key_in < 600){
    leftHeld();
  }
  else if (adc_key_in < 800){
    selectHeld();
  }
  
  
  unsigned long currentMillis = millis();
 char buffer[2];
  if(currentMillis - previousMillis > interval) {
    char stringer=intToString(123);
    int digit=digitOf(2,19);
    int y=1;
    String test=intToStrings(123)[0];
    message[0]=test[0];
    message[1]=intToString(1);
    message[2]=intToString(1);
    int x=123;
    int lastDigit = x % 10;
    message[3]=intToString(pow(3,2));
    previousMillis=currentMillis;
    }
    //message[0]='1';
    displayString(message);
    
}

void clearAll(){
  for (int i=30;i<=40;i++){
    pinMode(i, OUTPUT); 
    digitalWrite(i, 1); 
  }
}

int * LEDMapDataFor(char chr){
  if (chr=='0'){
    static int data[7]={ 0, 0, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='1'){
    static int data[7]={ 1, 0, 0, 1, 1, 1, 1};
    return data;
  }
  else if (chr=='2'){
    static int data[7]={ 0, 0, 1, 0, 0, 1, 0};
    return data;
  }
  else if (chr=='3'){
    static int data[7]={ 0, 0, 0, 0, 1, 1, 0};
    return data;
  }
  else if (chr=='4'){
    static int data[7]={ 1, 0, 0, 1, 1, 0, 0};
    return data;
  }
  else if (chr=='5'){
    static int data[7]={ 0, 1, 0, 0, 1, 0, 0};
    return data;
  }
  else if (chr=='6'){
    static int data[7]={ 0, 1, 0, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='7'){
    static int data[7]={ 0, 0, 0, 1, 1, 1, 1};
    return data;
  }
  else if (chr=='8'){
    static int data[7]={ 0, 0, 0, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='9'){
    static int data[7]={ 0, 0, 0, 1, 1, 0, 0};
    return data;
  }
  else if (chr=='a'||chr=='A'){
    static int data[7]={ 0, 0, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='b'){
    static int data[7]={ 1, 1, 0, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='B'){
    static int data[7]={ 0, 0, 0, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='c'){
    static int data[7]={ 1, 1, 1, 0, 0, 1, 0};
    return data;
  }
  else if (chr=='C'){
    static int data[7]={ 0, 1, 1, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='d'){
    static int data[7]={ 1, 0, 0, 0, 0, 1, 0};
    return data;
  }
  else if (chr=='D'){
    static int data[7]={ 0, 0, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='e'){
    static int data[7]={ 0, 0, 1, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='E'){
    static int data[7]={ 0, 1, 1, 0, 0, 0, 0};
    return data;
  }
  else if (chr=='f'||chr=='F'){
    static int data[7]={ 0, 1, 1, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='f'||chr=='F'){
    static int data[7]={ 0, 1, 1, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='g'){
    static int data[7]={ 0, 0, 0, 0, 1, 0, 0};
    return data;
  }
  else if (chr=='G'){
    static int data[7]={ 0, 1, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='h'){
    static int data[7]={ 1, 1, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='H'){
    static int data[7]={ 1, 0, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='i'||chr=='I'){
    static int data[7]={ 1, 1, 1, 1, 0, 0, 1};
    return data;
  }
  else if (chr=='j'||chr=='J'){
    static int data[7]={ 1, 0, 0, 0, 0, 1, 1};
    return data;
  }
  else if (chr=='k'||chr=='K'){
    static int data[7]={ 1, 0, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='l'){
    static int data[7]={ 1, 1, 1, 1, 0, 0, 1};
    return data;
  }
  else if (chr=='L'){
    static int data[7]={ 1, 1, 1, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='m'||chr=='M'||chr=='n'||chr=='N'){
    static int data[7]={ 1, 1, 0, 1, 0, 1, 0};
    return data;
  }
  else if (chr=='o'){
    static int data[7]={ 1, 1, 0, 0, 0, 1, 0};
    return data;
  }
  else if (chr=='O'){
    static int data[7]={ 0, 0, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='p'||chr=='P'){
    static int data[7]={ 0, 0, 1, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='q'||chr=='Q'){
    static int data[7]={ 0, 0, 0, 1, 1, 0, 0};
    return data;
  }
  else if (chr=='r'){
    static int data[7]={ 1, 1, 1, 1, 0, 1, 0};
    return data;
  }
  else if (chr=='R'){
    static int data[7]={ 0, 0, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='s'||chr=='S'){
    static int data[7]={ 0, 1, 0, 0, 1, 0, 0};
    return data;
  }
  else if (chr=='t'){
    static int data[7]={ 1, 1, 1, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='T'){
    static int data[7]={ 0, 1, 1, 1, 0, 0, 1};
    return data;
  }
  else if (chr=='u'){
    static int data[7]={ 1, 1, 0, 0, 0, 1, 1};
    return data;
  }
  else if (chr=='U'){
    static int data[7]={ 1, 0, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='v'){
    static int data[7]={ 1, 1, 0, 0, 0, 1, 1};
    return data;
  }
  else if (chr=='V'){
    static int data[7]={ 1, 0, 0, 0, 0, 0, 1};
    return data;
  }
  else if (chr=='w'||chr=='W'){
    static int data[14]={ 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1};
    return data;
  }
  else if (chr=='x'||chr=='X'){
    static int data[7]={ 1, 0, 0, 1, 0, 0, 0};
    return data;
  }
  else if (chr=='y'||chr=='Y'){
    static int data[7]={ 1, 0, 0, 1, 1, 0, 0};
    return data;
  }
  else if (chr=='z'||chr=='Z'){
    static int data[7]={ 0, 0, 1, 0, 0, 1, 0};
    return data;
  }
  else if (chr==' '){
    static int data[7]={ 1, 1, 1, 0, 1, 1, 1};
    return data;
  }
  static int data[7]={ 1, 1, 1, 1, 1, 1, 1};
  return data;
}

void displayString(String str){
  displayLEDMapAt(1,LEDMapDataFor(str[0]));
  displayLEDMapAt(2,LEDMapDataFor(str[1]));
  displayLEDMapAt(3,LEDMapDataFor(str[2]));
  displayLEDMapAt(4,LEDMapDataFor(str[3]));
}

void displayChars(char chrs[]){
  
  displayLEDMapAt(1,LEDMapDataFor(chrs[0]));
  displayLEDMapAt(2,LEDMapDataFor(chrs[1]));
  displayLEDMapAt(3,LEDMapDataFor(chrs[2]));
  displayLEDMapAt(4,LEDMapDataFor(chrs[3]));
}

 void displayLEDMapAt(int i, int charLEDMap[]){
  clearAll();
   i--;
  if (i>=0&&i<=3){
    digitalWrite(D1+i, 0); 
  for (int x=0;x<7;x++){
  digitalWrite(A+x, charLEDMap[x]); 
  }
  }
  clearAll();
}

char intToString(int i){
  char numbs[11]="0123456789";
  //if (i>=0&&i<=9){
    return numbs[i];
  //}
  return NULL;
}

void drop(char *chrs){
  for (int i=0;i<50;i++){
    chrs[i]=chrs[i+1];
  }
}

void rightDown(){
  
}

void rightHeld(){
  
}

void rightReleased(){
  
}


void leftDown(){
  
}

void leftHeld(){
  
}

void leftReleased(){
  
}


void upDown(){
  
}

void upHeld(){
  
}

void upReleased(){
  
}


void downDown(){
  
}

void downHeld(){
}

void downReleased(){
  
}

void selectDown(){
  
}

void selectHeld(){
  
}

void selectReleased(){
  
}

int digitOf(int digit, int number){
  
  int previous=number;
  digit=digitCount(number)-digit;
  int i=0;
  while(true){
    if (i==digit){
     return previous%10;
    }
    previous=previous/10;
    i++;
  }
  
  
  
    int value=0;
    int digits=sizeof((String)digit);
  if (!digits){
   digits=0; 
  }
    //int x=123;
    //int lastDigit = x % 10;
    
  return number;
}

int pow(int number,int power){
  power--;
  int start=number;
  for (int i=0;i<power;i++){
    number=number*start;
  }
  return number;
}


int digitCount(int number){
  
  int previous=number;
  int i=0;
  
  while(true){
    if (previous==0){
     return i; 
    }
    previous=previous/10;
    i++;
  }
}

char * intToChar(int number){
  char result[50];
  result[0]=intToString(1);
  int previous=number;
  //previous=5;
  int i=0;
  
  while(true){
    if (previous==0){
      break;
    }
    result[i]=intToString(previous%10);
    
    
    
    
    previous=previous/10;
    i++;
  }
  
  return result;
}

String intToStrings(int number){
  String temp="a";
  int i=0;
  int previous=number;
  while (true){
  if (previous==0){
   break; 
  }
  temp[i]=intToString(previous%10);
  previous=previous/10;
  i++;
  }
  
  return temp;
}
