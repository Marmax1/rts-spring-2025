unsigned long time;
int ledPin = 9;

int pin3flag = 0;
int pin5flag = 0;
int pin6flag = 0;
int pin9flag = 0;
int pin10flag = 0;

const unsigned long timers[] = {10000, 1000, 500, 100, 50};

// Последнее время обновления состояния для каждого пина
unsigned long previousMillis3 = 0;        
unsigned long previousMillis5 = 0;       
unsigned long previousMillis6 = 0;      
unsigned long previousMillis9 = 0;    
unsigned long previousMillis10 = 0; 


void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
}

void loop() {

  time = micros();
    // Обновляем каждый пин в соответствии с его временем

    if (time - previousMillis3 >= timers[0]){
    PORTD ^= B00001000;
    previousMillis3 = time;
    }

    if (time - previousMillis5 >= timers[1]){
    PORTD ^= B00100000;
    previousMillis5 = time;
    }

    if (time - previousMillis6 >= timers[2]){
    PORTD ^= B01000000;
    previousMillis6 = time;
    }

    if (time - previousMillis9 >= timers[3]){
    PORTB ^= B00000010;
    previousMillis9 = time;
    }
    
    if (time - previousMillis10 >= timers[4] ){
    PORTB ^= B00000100;
    previousMillis10 = time;
    }
}
