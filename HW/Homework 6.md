# Homework 6

### 7.30

```assembly
a.	BRnp	SKIP
b.	ADD		R5,R5,#1
c.	STR		R0,R6,#0
d.	LD		R1,SAVER
```

### 8.2

> What is an advantage to using the model in Figure 8.9 to implement a stack vs. the model in Figure 8.8?

figure 8.8: As each value is added or removed, all the other values already on the stack move.

figure 8.9:  the data already stored on the stack does not physically move. Simply use stack pointers to implement its functions.

### 8.8

a. A, F

b. After PUSH J or PUSH K the stack contain the most elements.

c. A, F, M