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
String arreglo[1];

arreglo[0] = "cero";
arreglo[1] = "uno";

void setup() {
  Serial.begin(9600);
}

void loop() {
 Serial.println(arreglo[1]);
}

```


Existe dos tipos unidimensonal y bidiminsiunal 

Es como una lista que almacena muchas variables
