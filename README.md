### Microcontroller-LPC2148


LPC2148 has two 32-bit General Purpose I/O ports.

1.  PORT0

2.  PORT1

PORT0 is a 32-bit port

Out of these 32 pins, 28 pins can be configured as either general purpose input or output.
1 of these 32 pins (P0.31) can be configured as general-purpose output only.
3 of these 32 pins (P0.24, P0.26 and P0.27) are reserved. Hence, they are not available for use. Also, these pins are not mentioned in pin diagram.
PORT1 is also a 32-bit port. Only 16 of these 32 pins (P1.16 – P1.31) are available for use as general-purpose input or output.

### PINSELx
Usually most of the pins of an ARM microcontroller is multi-functional, every pin can be made to perform one of the assigned function by setting particular bits of PINSEL register.

|value | Function   |
|------|------------|
| 00   | GPIO      |          
| 01   | First alt functional |
| 10   | Second alt functional |
| 11   | Third alt functional |


|Register |Pins|
|---------|-----|
| PINSEL0 |P0.0 to P0.15|
| PINSEL1 |P0.16 to P0.31|
| PINSEL2 |P1|

### IOxDIR
This register is used to control the direction (input or output) of a pin.

|Value  | Direction |
|-------|-----------|
|0| Input |
|1|  output |

### IOxPIN
IOxPIN is GPIO port pin value register. This register is used to read the current state of port pins regardless of input or output configuration. And it is also used to write status (HIGH or LOW) of output pins.

### IOxSET
IOxSET is GPIO output set register. This register is commonly used in conjunction with IOxCLR register described below. Writing ones to this register sets (output high) corresponding port pins, while writing zeros has no effect.

|Values|	IOSET|
|------|-------|
|0 |No effect|
|1 | Sets High on Pin|

### IOxCLR
IOxCLR is GPIO output clear register. As mentioned above, this register is used in conjunction with IOxSET. Writing ones to this register clears (output low) corresponding port pins, while writing zeros has no effect.

|Values|	IOCLR|
|------|-------|
|0 |No effect|
|1 | Sets low on Pin|
