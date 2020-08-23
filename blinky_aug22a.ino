// inverted mode so LOW sets LED on
#define BAUD_RATE 115200
#define LED_ON  0 
#define LED_OFF 1 
#define SET_BUILTIN_LED_1 2  // GPIO2
#define SET_BUILTIN_LED_2 16 // GPIO16

int x = 1;

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(SET_BUILTIN_LED_1, OUTPUT);     
  pinMode(SET_BUILTIN_LED_2, OUTPUT);     
}

void loop() {
  if (x) { 
     digitalWrite(SET_BUILTIN_LED_1, LED_ON);   
     //Serial.printf("Inside 1 x is %d\n",x);
  } else { 
     digitalWrite(SET_BUILTIN_LED_2, LED_ON);   
     //Serial.printf("Inside 0 x is %d\n",x);
  }

  delay(2000);                

  if (x) { 
    digitalWrite(SET_BUILTIN_LED_1, LED_OFF);  
    //Serial.printf("Inside 1 x is %d\n",x);
  }  else { 
     digitalWrite(SET_BUILTIN_LED_2, LED_OFF);  
     //Serial.printf("Inside 0 x is %d\n",x);
   }
  x ^= 1;
  Serial.printf("%d\n",x);
  delay(2000);                  
}
