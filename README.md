I am tasked with designing a Quantum Key Generator for a secure facility, and I have specific requirements to meet. I need to create a system that takes a positive integer of 32 bits as input, with three private gates and one public CONSTANT gate, each consisting of 8 bits. My goal is to find the Quantum Key, ensuring that each key bit, when XORed with the respective gate bits, equals the corresponding bit in the Constant Public Gate. I am required to use bitwise operators for bit manipulation, and the output must be in binary form. At the end of the process, I will print and display the generated key.