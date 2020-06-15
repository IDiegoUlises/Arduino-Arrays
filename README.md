# Arduino Arrays

**Se declara**

```c++
string cars[4];
```

**Se define**
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

**Se seleciona**
```c++
string lista = cars[1];

```c++
//Ver el tamaño del array(Verificar)
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
