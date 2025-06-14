--------------algoritmo de ordenamiento------>
orden :
puntero funcion(tiempo de ejecucion)
polimorfismo(tiempo de ejecucion)
funtores(tiempo de compilacion)
directo <>(tiempo de compilacion)

---------3 casos---
-
-medio
-promedio
-------------tarea-----------
rectangulo = bxh-------> fc
circulo=    ----->fc
solo 3 parametros :
ejecutec(puntero funcion,#int array parametro,array de nombres){
area del <<NOMBRE_FIGURA<<;
}
---------------------------
puntero metodo
objeto de c
static- en una clase
puntero funcion--> sin necesidad de decir que objeto se va usar 
# 📌 Proyecto: Ejecución de Cálculo de Áreas con Punteros a Función en C++

## 🔧 Algoritmo de Ordenamiento de Métodos

| Tipo de método     | Contexto de ejecución     | Detalles                          |
|--------------------|---------------------------|-----------------------------------|
| **Puntero a función** | Tiempo de ejecución         | Se resuelve en tiempo de ejecución. |
| **Polimorfismo**     | Tiempo de ejecución         | Determinación dinámica.            |
| **Funtores**         | Tiempo de compilación       | Llamadas en tiempo de compilación. |
| **Método directo (`<>`)** | Tiempo de compilación       | Completamente determinado en compilación. |

---

## 🧪 Casos de Prueba

Se aplican tres tipos de casos para evaluar los métodos de cálculo de áreas:

1. **Peor caso**
2. **Caso medio**
3. **Caso promedio**

---

## 📐 Tarea

Calcular el área de figuras geométricas usando `for` y punteros a función.

### 🔷 Fórmulas usadas:

- **Rectángulo**: \( A = base \times altura \)
- **Círculo**: \( A = \pi \times radio^2 \)

---

## ⚙️ Firma de función principal

```cpp
void ejecutec(int (*funcion)(int, int), int params[], std::string nombres[]) {
    std::cout << "Área del " << nombres[0] << ": ";
    std::cout << funcion(params[0], params[1]) << std::endl;
}

