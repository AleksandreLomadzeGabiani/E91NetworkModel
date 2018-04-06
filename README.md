# E91NetworkModel

  This model is predicated upon the [entanglement](https://en.wikipedia.org/wiki/Quantum_entanglement). It tries to fix the problem of having to keep a lot of photon pairs in each individual computer which is one of the largest downsides of entanglement based protocols.
  
##  In a nutshell ::
  
  
  >**(Computer A) -- K1 --> (SERVER) ---K2 , C1--> (Computer B)**
  
  
  >**K1** - The key collected from observing entangled photons (SERVER, Computer A)
  
  >**K2** - The key collected from observing entangled photons (SERVER, Computer B)
  
  >**C1** - OTP (K1,K2) encrypted Key 1 by using Key 2.

  So when **Computer A** sends the key to **SERVER** and asks it to send the key to **Computer B**. Then **SERVER** sends a different key **K2** and encrypted info **C1** to Computer B. Then Computer B uses **K2** to decrypt **C1** and finally ends up with **K1**. So in the end both **Computer A and B** have **K1** and can send information safely.


# DOCUMENTATION
