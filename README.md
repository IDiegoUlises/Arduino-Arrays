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

**Se obtiene el tamaño del arreglo**
```c++
int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
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
