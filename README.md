# 🤖 Robot Explorador Autónomo

<div align = center>

[![Static Badge](https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Static Badge](https://img.shields.io/badge/C%2B%2B-91.8%25-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](#)
[![Static Badge](https://img.shields.io/badge/C-8.2%25-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
](#)

[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Active-success.svg)](#)


</div>

---

## 📋 Descripción del Proyecto

**Robot Explorador Autónomo** es un sistema robótico inteligente construido alrededor de una **placa Arduino UNO** con **Sensor Shield**. Este robot es capaz de navegar de forma completamente autónoma en entornos desconocidos, detectando y esquivando obstáculos en tiempo real mediante sensores de proximidad.

### 🎯 Características Principales
- ✅ **Navegación autónoma** sin intervención humana
- ✅ **Detección de obstáculos** con múltiples sensores
- ✅ **Toma de decisiones** en tiempo real
- ✅ **Fácil personalización** del comportamiento
- ✅ **Código modular** y bien documentado

---

## 🛠️ Especificaciones Técnicas

### 🔌 Hardware Utilizado

| Componente | Especificaciones | Función |
|------------|------------------|---------|
| **🟦 Arduino UNO** | Microcontrolador ATmega328P | Cerebro del sistema |
| **🔌 Sensor Shield** | Compatible con Arduino UNO | Expansión de puertos |
| **⚡ Motores DC** | 2x motores con reductora | Movimiento y tracción |
| **🎛️ Driver de Motores** | L298N o similar | Control de velocidad y dirección |
| **📡 Sensores de Distancia** | Ultrasonido (HC-SR04) | Detección frontal de obstáculos |
| **🟡 Sensores IR** | Infrarrojos laterales | Detección lateral y refinada |
| **🔋 Fuente de Alimentación** | Batería LiPo o power bank | Alimentación del sistema |
| **🔗 Estructura** | Chasis robótico | Soporte mecánico |

### 💻 Stack Tecnológico

| Lenguaje | Porcentaje | Uso en el Proyecto |
|----------|------------|-------------------|
| **🟦 C++** | 91.8% | Programación principal de Arduino |
| **🟧 C** | 8.2% | Librerías de bajo nivel |

---

## 🎮 Funcionalidades Implementadas

### 🚗 Movimiento Autónomo
- **Avance continuo** en ausencia de obstáculos
- **Detección frontal** con sensor ultrasonido
- **Evitación de obstáculos** mediante giros calculados
- **Corrección de trayectoria** con sensores laterales

### 🧠 Lógica de Decisiones
```cpp
// Pseudocódigo del algoritmo principal
while(robot_activo) {
    medir_distancia_frontal();
    
    if (obstaculo_cercano) {
        detener_motores();
        decidir_direccion_giro();
        ejecutar_maniobra_evasion();
    } else {
        avanzar_continuo();
    }
}
```

---

## 📸 Galería del Proyecto

### 🤖 Vista del Robot Ensamblado
[Esquiva obstaculos robot.jpg]

### 🔌 Diagrama de Cableado
[Esquiva obstaculos.jpg]

---

## ⚡ Guía de Instalación y Uso

### 📥 Prerrequisitos
- **Arduino IDE** (versión 1.8.x o superior)
- **Placa Arduino UNO** y cable USB
- **Componentes hardware** listados anteriormente

### 🛠️ Configuración Paso a Paso

1. **Clonar el Repositorio**
   ```bash
   git clone https://github.com/ImStellar0408/Robot-Explorador.git
   cd Robot-Explorador
   ```

2. **Abrir el Proyecto en Arduino IDE**
   - Abre `Robot_Explorador.ino` en el IDE
   - Verifica que la placa seleccionada sea "Arduino UNO"

3. **Instalar Dependencias** (si aplica)
   - Las librerías necesarias están incluidas en el repositorio

4. **Montaje del Hardware**
   - Sigue el diagrama de conexiones proporcionado
   - Verifica polaridad de motores y sensores
   - Asegura todas las conexiones eléctricas

5. **Carga del Código**
   ```bash
   # Conecta el Arduino via USB
   # Selecciona el puerto COM correcto
   # Haz click en "Subir" en Arduino IDE
   ```

6. **Pruebas Iniciales**
   - Alimenta el sistema
   - Verifica funcionamiento de sensores
   - Testea movimientos básicos

---

## 🔧 Personalización Avanzada

### ⚙️ Ajuste de Parámetros
Modifica las constantes en el código para adaptar el comportamiento:

```cpp
// Configuración de distancias (cm)
const int DISTANCIA_SEGURA = 15;
const int DISTANCIA_ALERTA = 30;

// Velocidades de motor (0-255)
const int VELOCIDAD_NORMAL = 150;
const int VELOCIDAD_GIRO = 200;

// Tiempos de maniobra (ms)
const int TIEMPO_GIRO = 500;
```

### 🎨 Comportamientos Personalizables
- **Patrones de navegación** (aleatorio, sistemático)
- **Estrategias de evasión** (giro fijo, cálculo dinámico)
- **Velocidades adaptativas** según entorno
- **Modos de operación** (exploración, seguimiento de pared)

---

## 🐛 Solución de Problemas

### ❌ Problemas Comunes

| Problema | Causa Probable | Solución |
|----------|----------------|----------|
| **Robot no se mueve** | Alimentación insuficiente | Verificar batería y conexiones |
| **Sensores no detectan** | Cableado incorrecto | Revisar pines y tierra |
| **Movimiento errático** | Interferencias eléctricas | Añadir condensadores de filtrado |
| **Reset automático** | Picos de corriente | Mejorar fuente de alimentación |

### 🔍 Debugging
Habilita el monitor serie para diagnóstico:
```cpp
#define DEBUG true

void setup() {
    #ifdef DEBUG
    Serial.begin(9600);
    #endif
}
```

---
## 👨‍💻 Autor

**ImStellar0408** - [GitHub Profile](https://github.com/ImStellar0408)

---

<div align="center">

### ⭐ ¿Te gusta este proyecto? ¡Dale una estrella en GitHub!

**¡Happy Making!** 🚀🔧

</div>
