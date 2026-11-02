# ParpadeoTimers

Tres LEDs que parpadean a ritmos distintos en un STM32F401CCU6 (reloj HSI de 16 MHz).

| Señal | Pin | Cómo se controla | Cambia cada |
|---|---|---|---|
| LUZ_PRINCIPAL | PB12 | Lazo principal con `HAL_GetTick()` (sin bloquear) | 500 ms |
| LUZ_RAPIDA | PB14 | Interrupción de **TIM3** (PSC 1600-1, ARR 2500-1) | 250 ms |
| LUZ_LENTA | PB15 | Interrupción de **TIM4** (PSC 16000-1, ARR 1000-1) | 1000 ms |

Cálculo del timer: `t = (PSC+1)·(ARR+1) / 16 MHz`.
Ejemplo TIM3: 1600 · 2500 / 16 000 000 = 0,25 s.

Las dos interrupciones llegan al mismo `HAL_TIM_PeriodElapsedCallback()`, que distingue el timer con `htim->Instance`.

## Proteus
Cada pin (PB12, PB14, PB15) → resistencia de 220 Ω → LED → GND.
Cargar `build/Debug/ParpadeoTimers.elf` (o el `.hex`) en el STM32 y poner el reloj en 16 MHz.
