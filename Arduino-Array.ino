//Se crea una array
String arreglo[2];

void setup()
{
  //Se define el array
  arreglo[0] = "cero";
  arreglo[1] = "uno";
  arreglo[2] = "tres";

  //Inicia puerto serial
  Serial.begin(9600);
}

void loop()
{
  //Obtiente el valor del arreglo uno
  Serial.println(arreglo[1]);

  //Calcula el tamaño del array
  int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

  //Imprime el tamaño del array
  Serial.print("tamaño:");
  Serial.println(longitud);
}
