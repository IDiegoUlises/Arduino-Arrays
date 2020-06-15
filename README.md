# Arduino Arrays

**Se declara**

```c++
int arreglo[4];
```

**Se define**
```c++
int arreglo[4] = {0,1,2,3};
```

**Se seleciona**
```c++
int lista = arreglo[1];
```


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
