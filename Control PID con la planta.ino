int pinA = 3;
volatile int contador = 0;

void setup() 
{
  pinMode(pinA, INPUT);
  Serial.begin(115200); 
  attachInterrupt(1, interrupcion, RISING); // Flanco de subida por el Pin 3
}

void loop()
{
  Serial.print("Pulsos: ");
  Serial.println(contador);
}

void interrupcion()
{
  contador++;
}