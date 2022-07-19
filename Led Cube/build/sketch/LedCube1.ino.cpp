#include <Arduino.h>
#line 1 "c:\\Users\\alvar\\OneDrive\\Escritorio\\Visual Archivos\\Arduino Programing\\Led Cube\\LedCube1.ino"
#line 1 "c:\\Users\\alvar\\OneDrive\\Escritorio\\Visual Archivos\\Arduino Programing\\Led Cube\\LedCube1.ino"
void setup();
#line 10 "c:\\Users\\alvar\\OneDrive\\Escritorio\\Visual Archivos\\Arduino Programing\\Led Cube\\LedCube1.ino"
void loop();
#line 1 "c:\\Users\\alvar\\OneDrive\\Escritorio\\Visual Archivos\\Arduino Programing\\Led Cube\\LedCube1.ino"
void setup() {

for (int pin = 2; pin < 14; pin++) 
    {
    pinMode(pin, OUTPUT); 
    }

}

void loop()
  /* primera secuencia */
{
    for (int pin = 11; pin < 14; pin ++)
    {
    digitalWrite (pin, HIGH);
    }

    for (int pin = 2; pin < 11; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (400);
    }
    
    delay (1000);
    
    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, LOW);
    delay (250);
    }
  /* segunda secuencia */
    delay (650);
	
    for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, LOW);
    }
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (300);
    digitalWrite (pin, LOW);
    delay (300);
    }

    for (int pin = 13; pin > 10; pin--)
    {
    digitalWrite (pin, HIGH);
    delay (300);
    digitalWrite (pin, LOW);
    delay (300);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (300);
    digitalWrite (pin, LOW);
    delay (300);
    }
    
    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (200);
    digitalWrite (pin, LOW);
    delay (200);
    }
    
    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (200);
    }

    delay (500);

    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, LOW);
    delay (150);
    }
    
    for (int pin = 2; pin > 9; pin++)
    {
    digitalWrite (pin, HIGH);
    delay (100);
    }
    
    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, LOW);
    delay (100);
    } 

    delay (500);
    
  /* secuencia 3 */
    for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (120);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (120);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (12, LOW);
    digitalWrite (13, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (120);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (13, LOW);
    

	for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (80);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (80);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (12, LOW);
    digitalWrite (13, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (80);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (13, LOW);
    

for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (50);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (50);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (12, LOW);
    digitalWrite (13, HIGH);
    
    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, HIGH);
    delay (50);
    digitalWrite (pin, LOW);
    }
    
    digitalWrite (13, LOW);
    

/* secuencia 4 */
	for (int i = 1; i < 11; i++)
    {
        
        for (int pin = 2; pin < 14; pin ++)
        {
        digitalWrite (pin, HIGH);
        delay (70);
        }

    digitalWrite (2, LOW);
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
    digitalWrite (13, LOW);
    
    
    }
} 
