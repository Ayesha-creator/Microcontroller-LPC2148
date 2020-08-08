### Interrupt Register (IR)

* Interrupt Register consists of flag bits for Match Interrupts and Capture Interrupts.
* It contains four bits each for match and capture interrupts.

![](https://embetronicx.com/wp-content/uploads/2017/07/Interrupt-register.png)


### Timer Control Register (TCR)

* Timer Control Register is used to control the functions of timer / counter.
* It is used to enable / disable or reset the Timer Counter. 

![](https://embetronicx.com/wp-content/uploads/2017/07/timer-control-register.png)


### Count Control Register (CTCR)

* Count Control Register is used to set either Timer mode or Counter Mode.
* If Counter Mode is selected, the counter pin and the edges (rising, falling or both) can be selected using CTCR.


### Timer Counter Register (TC)

* The value in the Timer Counter register in incremented when the value PC reaches its terminal value
as set by the PR register. If the PC is reset before reaching its maximum value, then the TC will count to the maximum possible value i.e. 0xFFFF FFFF and resets  back to 0x0000 0000.


### Prescale Register (PR)

* Prescale Register specifies the maximum value for the Prescale Counter.
* When the Prescale Counter (PC) is equal to PR, the TC in incremented on the next clock and 
also PC is cleared.

### Match Control Register (MCR)

* The Match Control Register is used control the actions to be performed
when the value in the Match Register (MR) matches with the value in the Timer Counter (TC).

![](https://embetronicx.com/wp-content/uploads/2017/07/match-control-register.png)


