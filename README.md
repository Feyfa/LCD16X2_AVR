# EXPLANATION
This project contains code to program LCD16x2 mode 4 bit and Atmega8a with language (c++)
# SOFTWARE USED
- Atmel Studio 7    = Code Editors
- Proteus           = Circuit Simulation  
# HOW TO CREATE A PROJECT AT ATMEL STUDIO
- Click new project
![Img 1A](Screenshot/1A.png)
- Select GCC C++ Executable Project, Write a name in the white box, then click OK
![Img 2A](Screenshot/2A.png)
- Type ATMEGA8A in the white box, then select ATmega8A in blue, then click OK
![Img 3A](Screenshot/3A.png)
- Select Properties
![Img 4A](Screenshot/4A.png)
- Select Toolchain, then select the Symbol in AVR/GNU C++ Compiler, then click the plus sign
![Img 5A](Screenshot/5A.png)
- Type F_CPU=8000000 in the white box, then click OK\
![Img 6A](Screenshot/6A.png)
- Click the close sign
![Img 7A](Screenshot/7A.png)
- Right click on mainA.cpp, then click remove
![Img 8A](Screenshot/8A.png)
- Click Delete
![Img 9A](Screenshot/9A.png)
- Click the blue one, then click Add, then click Existing Item
![Img 10A](Screenshot/10A.png)
- Go to the location of the files that have been downloaded, then select all, then click Add
![Img 11A](Screenshot/11A.png)
- The code editor is ready to run
![Img 12A](Screenshot/12A.png)

# HOW TO MAKE A SIMULATION IN PROTEUS
- Click Open Project
![Img 1P](Screenshot/1P.png)
- Select the LCD16X2 (4BIT) ATMEGA8A file, then click Open
![Img 2P](Screenshot/2P.png)
- Right-click the ATMEGA8 pad, then click Edit Properties
![Img 3P](Screenshot/3P.png)
- Click on the option (0100) Int. RC 8Mhz
![Img 4P](Screenshot/4P.png)
- Click on Program Files
![Img 5P](Screenshot/5P.png)
- Then select the atmel studio hex file, then click Open
![Img 6P](Screenshot/6P.png)