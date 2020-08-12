### Simulation video: [Click here](https://drive.google.com/file/d/1nOBo_AR5wF_Pm8PT_rM6tNU9RtTaYK_w/view?usp=drivesdk)


### Single Edge Controlled PWM Output
Only falling edge position can be controlled.

### Double Edge Controlled PWM Output
Both Rising and Falling edge positions can be controlled.

![](https://www.electronicwings.com/public/images/user_images/images/ARM7_20170414/PWM/LPC2148_PWM_Type.png)

### PWMIR (PWM Interrupt Register) 
- It has 7 interrupt bits corresponding to the 7 PWM match registers.
- If an interrupt is generated, then the corresponding bit in this register becomes HIGH.
Otherwise the bit will be LOW.
- Writing a 1 to a bit in this register clears that interrupt.
- Writing a 0 has no effect.
 
### PWMTCR (PWM Timer Control Register) 
- It is used to control the operation of the PWM Timer Counter.

### PWMTC (PWM Timer Counter) 
- It is incremented when the PWM Prescale Counter (PWMPC) reaches its terminal count.       
 
### PWMPR (PWM Prescale Register) 
- It holds the maximum value of the Prescale Counter.
 
### PWMPC (PWM Prescale Counter) 
- It is incremented on every PCLK.
- When it reaches the value in PWM Prescale Register, the PWM Timer Counter is incremented and PWM Prescale Counter is reset on next PCLK.

### PWMMR0-PWMMR6 (PWM Match Registers) 
- The values stored in these registers are continuously compared with the PWM Timer Counter value.
- When the two values are equal, the timer can be reset or stop or an interrupt may be generated.  

### PWMMCR (PWM Match Control Register) 
- It controls what action is to be taken on a match between the PWM Match Registers and PWM Timer Counter.

### PWMLER (PWM Latch Enable Register) 
- It is used to control the update of the PWM Match Registers when they are used for PWM generation.
