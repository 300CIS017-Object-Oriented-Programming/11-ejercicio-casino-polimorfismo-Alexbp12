## 📈 PREGUNTAS TEÓRICAS

## CLASES ABSTRACTAS 

### ¿Qué cosas del código fuente indican que la clase `Juego` es una clase abstracta?

- La clase `Juego` se define usando la palabra clave `abstract`, por ejemplo:  
  `public abstract class Juego { ... }`
- Dentro de la clase, al menos un método está declarado como abstracto, por ejemplo:  
  `public abstract void iniciar();`  
  Esto significa que no tiene implementación en la clase `Juego` y debe ser implementado por las clases hijas.

### ¿Qué implicaciones tiene esa decisión de diseño para este programa?

- No se pueden crear objetos directamente de la clase `Juego`.
- La clase sirve como una plantilla base para otros juegos específicos.
- Obliga a que las clases que hereden de `Juego` implementen los métodos abstractos, asegurando una estructura común entre distintos tipos de juegos.
- Mejora la organización y reutilización del código, ya que las funcionalidades comunes pueden implementarse en la clase `Juego` y compartirse entre sus subclases.

