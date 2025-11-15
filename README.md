# Contador Digital 00-99 con Display de 7 Segmentos

Proyecto de contador digital de dos dígitos (00-99) implementado en Arduino, utilizando displays de 7 segmentos de cátodo común con técnica de multiplexación.

## Características

- Contador de 00 a 99
- 3 botones de control: incremento, decremento y reset
- Multiplexación de displays para optimizar pines
- Antirebote implementado por software

## Hardware Requerido

- 1x Arduino Uno
- 2x Display de 7 segmentos (cátodo común)
- 3x Pulsadores
- 7x Resistencias de 220-330Ω (para segmentos)
- Cables de conexión

## Conexiones

### Displays de 7 Segmentos
- Segmentos A-G: Pines digitales 2-8
- COM Display Decenas: Pin 9
- COM Display Unidades: Pin 10

### Botones
- Botón UP (verde): Pin 11 → GND
- Botón DOWN (azul): Pin 12 → GND
- Botón RESET (rojo): Pin 13 → GND

## Funcionamiento

- **Botón UP**: Incrementa el contador de 1 en 1 (00→01→02...→99→00)
- **Botón DOWN**: Decrementa el contador de 1 en 1 (99→98→97...→00→99)
- **Botón RESET**: Reinicia el contador a 00

## Simulación en Wokwi

El proyecto incluye archivos para simular en [Wokwi](https://wokwi.com):
- `sketch.ino`: Código principal
- `diagram.json`: Configuración del circuito

## Archivos del Proyecto
```
/
├── caso1/          # Prueba básica: 1 display, 1 botón (0-9)
├── caso2/          # Prueba intermedia: 1 display, 3 botones (0-9)
├── caso3/          # Proyecto completo: 2 displays, 3 botones (00-99)
│   ├── sketch.ino
│   └── diagram.json
└── README.md
```

## Técnica de Multiplexación

Los displays comparten los mismos pines de segmentos (A-G). La multiplexación alterna rápidamente entre ambos displays, activando uno a la vez mientras se configuran los segmentos correspondientes. Esto crea la ilusión de que ambos están encendidos simultáneamente.

