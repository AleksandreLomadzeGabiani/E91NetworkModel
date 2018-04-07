# E91NetworkModel

  This model is predicated upon the [entanglement](https://en.wikipedia.org/wiki/Quantum_entanglement). It tries to fix the problem of having to keep a lot of photon pairs in each individual computer which is one of the largest downsides of entanglement based protocols.
  
##  In a nutshell ::
  
  
      (Computer A) -- K1 --> (SERVER) ---K2 , C1--> (Computer B)
  
  
  >**K1** - The key collected from observing entangled photons (SERVER, Computer A)
  
  >**K2** - The key collected from observing entangled photons (SERVER, Computer B)
  
  >**C1** - OTP (K1,K2) encrypted Key 1 by using Key 2.

  So when **Computer A** sends the key to **SERVER** and asks it to send the key to **Computer B**. Then **SERVER** sends a different key **K2** and encrypted info **C1** to Computer B. Then Computer B uses **K2** to decrypt **C1** and finally ends up with **K1**. So in the end both **Computer A and B** have **K1** and can send information safely.


# DOCUMENTATION

## Class qubit

### varibles

[|V> = V0|0> + V1|1>](https://en.wikipedia.org/wiki/Qubit)

in my representation of qubit there are 2 variables. double A and B.
A is V0^2 which is probability that when we observe the qubit it will be 0.
B is V1^2 which is probability that when we observe the qubit it will be 1.
  
### constructors

      qubit();
 Sets A and B as 0.5 on default.
        
      qubit(double a);
 Sets A=a , and B=1-A
 
 ### Accessors
 
      int getValue();
  returns random integer from [0,1] if the qubit is entangled. if it is not we return -1. (**_not because it has no value, but because the value of a qubit will does matter to us as much (in the scope of this model) as the fact that it isn't entangled_**)

      bool isEntangled()
returns true if the qubit is entangled. [V0^2 and V1^2 == 0.5](https://en.wikipedia.org/wiki/Quantum_entanglement)

## Class Computer

### variables
