void setup()
{
    // set up output pins
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT );
    
    // blink green LED on and off twice
        digitalWrite(10, HIGH);
        delay(500);
        digitalWrite(10, LOW);
        delay(500);
    
    // wait one second
    delay (1000);
    
    // blink blue LED on and off twice
        digitalWrite(3, HIGH);
        delay(250);
        digitalWrite(3, LOW);
        delay(1000);
        digitalWrite(3, HIGH);
        delay(250);
        digitalWrite(3, LOW);
        delay(1000);
    
    // wait three seconds
    delay (2000);
}

void loop()
{
    // blink both LEDs on and off alternatively

    digitalWrite(3, HIGH);
    digitalWrite(10,HIGH);
        delay(500);
        digitalWrite(3, LOW);
        digitalWrite(10,LOW);
        delay(200);

    
}
