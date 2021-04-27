/*
 * Hello, welcome project with musical keyboard!!!
 * This is code of project, was create in 03/04/2021.
 * 
 * by Guilherme Pedroso de Lima
 */
 
const int button1 = 2;    // variable with name button1 receives pin number 2 from the push button
const int button2 = 3;    // variable with name button2 receives pin number 3 from the push button
const int button3 = 4;   
const int button4 = 5;    
const int button5 = 6;    
const int button6 = 7;    
const int button7 = 8;   
const int button8 = 9;   
const int red_led =  13;  // variable red_led receives pin number 13 from Arduino
const int speaker = 11;   // variable speaker receives pin number 


// variables to read the state of the push button
int State = 0;          
int State2 = 0;
int State3 = 0;   
int State4 = 0; 
int State5 = 0;  
int State6 = 0; 
int State7 = 0;  
int State8 = 0; 

void setup() {
 

  pinMode(red_led, OUTPUT); // starts red LED as output
 
  pinMode(button1, INPUT);  // start pin 2 of button 1 as an input
  pinMode(button2, INPUT);  // start pin 3 of button 2 as an input
  pinMode(button3, INPUT);  
  pinMode(button4, INPUT); 
  pinMode(button5, INPUT);  
  pinMode(button6, INPUT);  
  pinMode(button7, INPUT);  
  pinMode(button8, INPUT);  
  
  pinMode(speaker, OUTPUT); // starts speaker as output
}

void loop() {
 
  // read the status of the push button value
  State = digitalRead(button1); // button and store output in the variable State, 0 or 1
  State2 = digitalRead(button2);
  State3 = digitalRead(button3);
  State4 = digitalRead(button4);
  State5 = digitalRead(button5);
  State6 = digitalRead(button6); 
  State7 = digitalRead(button7);
  State8 = digitalRead(button8);
  
  if (State == 1) //High = 1
  {
    // turn on the red LED
    digitalWrite(red_led, HIGH);
    tone(speaker, 262);  //tone note C (doh)
  } 
  else if(State2 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 294);   //tone note D
  }
  else if(State3 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 330);   //tone note E
  }
  else if(State4 == 1)
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 349);   ///tone note F
  }
  else if(State5 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 392);   //tone note G
  } 
  else if(State6 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 440);   //tone note A
  } 
  else if(State7 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 494);   //tone note B
  }
  else if(State8 == 1) 
  {
      digitalWrite(red_led, HIGH);
      tone(speaker, 523);   //tone note C in other frequency
  }
  else 
  {
    //shutdown Led:
    digitalWrite(red_led, LOW);
    noTone(speaker); 
  }
}
