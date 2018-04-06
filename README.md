# E91NetworkModel

  This model is predicated upon the entanglement (https://en.wikipedia.org/wiki/Quantum_entanglement)
  
  In a nutshell ::
  
  (Computer A) -----> (SERVER) -------> (Computer B)
  
  Computer A sends the server ping to check photons and what computer to send the values to. SERVER then sends Computer B the ping that Computer A wants to share the key and that Computer B needs to check photons. That leaves us with 2 keys. 1 key is shared between SERVER and Computer A. Second is shared between SERVER and Computer B. Key 1 is encrypted with key 2 (using OTP so that it is unconditionally safe) and then sent to Computer B. Computer B decrypts the key 1 using key 2. Therefore both Computer 1 and 2 have key 1 and they can be connected securely.


# DOCUMENTATION
