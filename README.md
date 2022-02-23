# Estructura de Datos (SI210)

### Contenido
- [Enteros](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/ENTEROS)
- [Vectores](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/VECTORES)
- [Matrices](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/MATRICES)
- [Pilas](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/PILAS)
- [Pilas Dinámicas](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/PILAS_DINAMICAS)
- [Colas](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/COLAS)
- [Colas Circulares](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/COLAS_CIRCULARES)
- [Colas Dinámicas](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/COLAS_DINAMICAS)
- [Proyectos](https://github.com/JoseAndresHV-UPSA/estructura-datos-si210/tree/master/PROYECTOS)

### Configuración para Visual Studio
Para la instalación en Visual Studio Installer:
1. Seleccionar el Workload `Desktop development with C++`
2. Dentro de opcional marcar `C++/CLI support`

Para la creación del proyecto en Visual Studio:
1. Crear nuevo proyecto `CLR Empty Project (.NET Framework)`
2. Una vez creado, agregar nuevo elemento `CLR` -> `Windows Forms`
3. Cerrar y volver a abrir proyecto
4. Dentro de `MyForm.cpp` copiar el siguiente código:
```cpp
#include "MyForm.h"

using namespace NOMBREPROYECTO;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NOMBREPROYECTO::MyForm());
	return 0;
}
```
Nota: Cambiar `NOMBREPROYECTO` por el nombre del proyecto actual.

5. Ir a `Propiedades del proyecto` -> `Linker` -> `System` -> `SubSystem`
   - Seleccionar `Windows (/SUBSYSTEM:WINDOWS)`
6. Ir a `Propiedades del proyecto` -> `Linker` -> `Advanced` -> `EntryPoint`
   - Escribir `main`

