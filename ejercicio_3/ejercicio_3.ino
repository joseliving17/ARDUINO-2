
#include <Servo.h>

int i = 0;

Servo pepito;

void setup()
{
  pepito.attach(3);

}

void loop()
{
  for (i = 0; i <= 180; i += 1) {
    pepito.write(i);
    delay(20); 
  }

  
  for (i = 180; i >= 0; i -= 1) {
    pepito.write(i);
    delay(20); 
  }
}
