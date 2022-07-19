# 1 "c:\\Users\\alvar\\OneDrive\\Escritorio\\Visual Archivos\\Arduino Programing\\Led Cube\\LedCube1.ino"
void setup() {

for (int pin = 2; pin < 14; pin++)
    {
    pinMode(pin, 0x1);
    }

}

void loop()
  /* primera secuencia */
{
    for (int pin = 11; pin < 14; pin ++)
    {
    digitalWrite (pin, 0x1);
    }

    for (int pin = 2; pin < 11; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (400);
    }

    delay (1000);

    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, 0x0);
    delay (250);
    }
  /* segunda secuencia */
    delay (650);

    for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, 0x0);
    }

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (300);
    digitalWrite (pin, 0x0);
    delay (300);
    }

    for (int pin = 13; pin > 10; pin--)
    {
    digitalWrite (pin, 0x1);
    delay (300);
    digitalWrite (pin, 0x0);
    delay (300);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (300);
    digitalWrite (pin, 0x0);
    delay (300);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (200);
    digitalWrite (pin, 0x0);
    delay (200);
    }

    for (int pin = 11; pin < 14; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (200);
    }

    delay (500);

    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, 0x0);
    delay (150);
    }

    for (int pin = 2; pin > 9; pin++)
    {
    digitalWrite (pin, 0x1);
    delay (100);
    }

    for (int pin = 10; pin >= 2; pin--)
    {
    digitalWrite (pin, 0x0);
    delay (100);
    }

    delay (500);

  /* secuencia 3 */
    for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (120);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x0);
    digitalWrite (12, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (120);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (12, 0x0);
    digitalWrite (13, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (120);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (13, 0x0);


 for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (80);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x0);
    digitalWrite (12, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (80);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (12, 0x0);
    digitalWrite (13, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (80);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (13, 0x0);


for (int pin = 2; pin < 14; pin ++)
    {
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (50);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (11, 0x0);
    digitalWrite (12, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (50);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (12, 0x0);
    digitalWrite (13, 0x1);

    for (int pin = 2; pin < 11; pin ++)
    {
    digitalWrite (pin, 0x1);
    delay (50);
    digitalWrite (pin, 0x0);
    }

    digitalWrite (13, 0x0);


/* secuencia 4 */
 for (int i = 1; i < 11; i++)
    {

        for (int pin = 2; pin < 14; pin ++)
        {
        digitalWrite (pin, 0x1);
        delay (70);
        }

    digitalWrite (2, 0x0);
    digitalWrite (3, 0x0);
    digitalWrite (4, 0x0);
    digitalWrite (5, 0x0);
    digitalWrite (7, 0x0);
    digitalWrite (8, 0x0);
    digitalWrite (9, 0x0);
    digitalWrite (10, 0x0);
    digitalWrite (11, 0x0);
    digitalWrite (13, 0x0);


    }
}
