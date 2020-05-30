# Arduino Arrays

se declara asi(mas o menos)

```c++
string cars[4];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

cars[0] = "BWM";

//Ver el tamaño del array
int cantidad = cars.lenght();
```

Codigo de prueba
```c++
int estado[1];
int led = 2;

estado[0] = 0;
estado[1] = 1;

void setup() {
  Serial.begin(9600);

  pinMode(led,OUTPUT);

   digitalWrite(led,estado[1]);


}

void loop() {
  // put your main code here, to run repeatedly:

}

```


Existe dos tipos unidimensonal y bidiminsiunal 

Es como una lista que almacena muchas variables
