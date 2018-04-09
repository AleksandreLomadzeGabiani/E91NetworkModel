# E91NetworkModel

  This model is predicated upon the [entanglement](https://en.wikipedia.org/wiki/Quantum_entanglement). It tries to fix the problem of having to keep a lot of photon pairs in each individual computer which is one of the largest downsides of entanglement based protocols.
  
  ### Note
  I would like to note that I will not be setting up an actual server in my code. all the objects are supposed to be more simplistic representations of the perfect case scenario. Therefore transfer of information will happen with simple functions insted of actual server involvement. (Therefore I will pass c1 to Computer B through a function insted of creating a classical channel. Additionally other parts of the model might be simplified as well). Keeping all of this in mind I still everything I will simplify will attempt to produce the outcome that is supposed to be achieved by their real life counterparts (for example server recieving k1)
  
  By real life counterparts I mean events that could also be unproven at the time. I am just working  with the assumption (for the scope of the project) that information quantum physics theories (that I am currently able to access and grasp work the way that they are described in the documents)
  
  if there is anything anyone would like to add to or correct me on please contact me (sandro.lomadze-gabiani@americanhighschool.ge) I would much appreciate any and all feedback.
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

      bool isEntangled();
returns true if the qubit is entangled. [V0^2 and V1^2 == 0.5](https://en.wikipedia.org/wiki/Quantum_entanglement)

## :white_circle:
## Class EntangledQubitBlock

### variables
      std::vector<qubit> bits;
The entangled qubits that generate the key
      
      std::vector<int> currentState;
Stores the last value that observed qubits took on

### constructors
      EntangledQubitBlock();
generated block of 20 qubits

      EntangledQubitBlock(int size);
generates block of size qubits.

### Acessors
      std::vector<int> getCurrentState();
 gets the last observed values of qubits.
 
      std::vector<int> getKey();
 returns values of stored qubits.


## :white_circle:                                                                                                                          
## Class Computer

### variables
      string ID;
must be unique to every computer and is used to identify them.

      EntangledQubitBlock qubitBlock
is a collection of entangled qubits that connect two s


      std::vector<int> temp;
      std::pair<std::vector<int>,std::string> key;
### constructors
      Computer();
constructs computer with default ID of NULL.

      Computer(std::string n,EntangledQubitBlock z);
constructs computer with ID=n , and qubitblock=z

      Computer(std::string n,int bitnum);
constructs computer with ID=n , and qubitblock=*new qubitblock(bitnum)     

### Accessors
      std::string getID();
      EntangledQubitBlock getBlock();
      std::pair<std::vector<int>,std::string> getkey();
      std::vector<int> getTemp();

### Mutators
      void recieveInfo(std::string sender,std::vector<int> info);
      void recievePing(); //SETS TEMP TO THE QUANTUM BLOCK CURRENT FORM
      void sendKey(Server s,Computer b);
      



