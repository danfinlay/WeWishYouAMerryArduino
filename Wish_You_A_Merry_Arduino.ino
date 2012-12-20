/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.

  3 = Tree
  4 = House
  5 = PVC Tree
 */
 
 //These are my three light circuits.
 int tree = 2;
 int house = 3;
 int pvc = 4;

//Pace of the song is my original figuring multiplied by the timing var.
int timing = 1;

//These variables are poorly named.
//Each "pinX" is actually one of the eight notes
//of "We wish you a merry Xmas.
//Here you can assign them to alternate definitions,
//For less-than-eight lighting rigs.
int pin2=house,pin3=tree,pin4=pvc,pin5=tree,pin6=pvc,pin7=tree,pin8=house;


void setup() {                
  // initialize the digital pin as an output.
  // Pin 83 has an LED connected on most Arduino boards:

  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);   
  pinMode(4, OUTPUT);   
  pinMode(5, OUTPUT);   
  pinMode(6, OUTPUT);   
  pinMode(7, OUTPUT);   
  pinMode(8, OUTPUT);   
  
}





void loop() {
  
  
  //First Bar
  
    delay(timing * 333);  
    delay(timing * 333);  
  
  digitalWrite(pin8, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin8, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
  //Second Bar
  
    digitalWrite(pin4, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin4, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
   digitalWrite(pin4, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin4, LOW);    // set the LED off
  
   digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off
  
   digitalWrite(pin4, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin4, LOW);    // set the LED off
  
  //Third Bar
  
   digitalWrite(pin3, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin3, LOW);    // set the LED off
  
    digitalWrite(pin2, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin2, LOW);    // set the LED off
  delay(timing * 166);   

    digitalWrite(pin2, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin2, LOW);    // set the LED off
  delay(timing * 166);    // wait for a second
  
    digitalWrite(pin2, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin2, LOW);    // set the LED off
  delay(timing * 166);    // wait for a second
  
  //Fourth Bar
  
    digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
    digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off
  
    digitalWrite(pin6, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin6, LOW);    // set the LED off
  
    digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off
  
    digitalWrite(pin4, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin4, LOW);    // set the LED off
  
  //Fifth Bar
  
    digitalWrite(pin3, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin3, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
    digitalWrite(pin8, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin8, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
    digitalWrite(pin8, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin8, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
  //Sixth Bar
  
   digitalWrite(pin6, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin6, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
    digitalWrite(pin6, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin6, LOW);    // set the LED off
  
    digitalWrite(pin7, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin7, LOW);    // set the LED off
  
    digitalWrite(pin6, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin6, LOW);    // set the LED off
  
    digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off
  
  //Seventh Bar
  
    digitalWrite(pin4, HIGH);   // set the LED on
  delay(timing * 333);              // wait for a second
  digitalWrite(pin4, LOW);    // set the LED off
  
    digitalWrite(pin2, HIGH);   // set the LED on
  delay(timing * 166);              // wait for a second
  digitalWrite(pin2, LOW);    // set the LED off
  delay(timing * 166);              // wait for a second
  
    digitalWrite(pin8, HIGH);   // set the LED on
  delay(timing * 83);              // wait for a second
  digitalWrite(pin8, LOW);    // set the LED off
  delay(timing * 83);              // wait for a second
  
    digitalWrite(pin8, HIGH);   // set the LED on
  delay(timing * 83);              // wait for a second
  digitalWrite(pin8, LOW);    // set the LED off
  delay(timing * 83);              // wait for a second
  
  //Eighth Bar

  digitalWrite(pin2, HIGH);   // set the LED on
  delay(timing * 333);              // wait for a second
  digitalWrite(pin2, LOW);    // set the LED off


  digitalWrite(pin5, HIGH);   // set the LED on
  delay(timing * 333);              // wait for a second
  digitalWrite(pin5, LOW);    // set the LED off


  digitalWrite(pin3, HIGH);   // set the LED on
  delay(timing * 333);              // wait for a second
  digitalWrite(pin3, LOW);    // set the LED off
  
  //Ninth Bar/Crescendo
  
    digitalWrite(pin7, HIGH);   // set the LED on
    
    //Vibrato
      digitalWrite(pin4, HIGH); 
      digitalWrite(pin6, HIGH);
    delay(timing * 83);
    
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);

digitalWrite(pin3, LOW);
digitalWrite(pin8, HIGH);
digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);   // set the LED on
    delay(timing * 83);
    
    digitalWrite(pin8, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin5,HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);

      digitalWrite(pin4, HIGH); 
      digitalWrite(pin6, HIGH);
    delay(timing * 83);
    
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);

digitalWrite(pin3, LOW);
digitalWrite(pin8, HIGH);
digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);   // set the LED on
    delay(timing * 83);
    
    digitalWrite(pin8, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin5,HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);

      digitalWrite(pin4, HIGH); 
      digitalWrite(pin6, HIGH);
    delay(timing * 83);
    
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);

digitalWrite(pin3, LOW);
digitalWrite(pin8, HIGH);
digitalWrite(pin5, LOW);
digitalWrite(pin4, HIGH);   // set the LED on
    delay(timing * 83);
    digitalWrite(pin8, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin5,HIGH);
   digitalWrite(pin4, LOW);
delay(timing * 83);


//All Off
digitalWrite(pin5, LOW);
  digitalWrite(pin7, LOW);    // set the LED off
digitalWrite(pin2,LOW);
  

  

 
}
