# Arduino Arrays

se declara asi(mas o menos)

```c++
string cars[4];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

cars[0] = "BWM";

int cantidad = cars.lenght();
```

Codigo de prueba
```c++
int estado[1];

estado[0] = 0;
estado[1] = 1;

void setup() {
  Serial.begin(9600);

  pinMode(2,OUTPUT);

   digitalWrite(2,estado[1]);


}

void loop() {
  // put your main code here, to run repeatedly:

}

```


Existe dos tipos unidimensonal y bidiminsiunal 

Es como una lista que almacena muchas variables
