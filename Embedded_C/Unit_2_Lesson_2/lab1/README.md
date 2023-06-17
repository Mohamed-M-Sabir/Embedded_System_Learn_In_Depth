### Commands That Are Used In This App

#### Compile C Code Within App.c

```
arm-none-eabi-gcc -C -mcpu=arm926ej-s -I app.c -o app.o
```

#### Compile C Code Within uart.c

```
arm-none-eabi-gcc -C -mcpu=arm926ej-s -I uart.c -o uart.o
```

#### Disassemble app.o Sections

```
arm-none-eabi-objdumb -h app.o
```

#### Disassemble app.o

```
arm-none-eabi-objdumb -D app.o
```

#### Assembling startup.s file

```
arm-none-eabi-as -mcpu=arm926ej-s startup.s -o startup.o
```

#### Linking linker_script.ld file with app file and get learn-in-depth.elf file

```
arm-none-eabi-ld -T linker_script.ld app.o uart.o startup.o -o learn-in-depth.elf
```

#### Disassemble elearn-in-depth.elf sections

```
arm-none-eabi-objdump -h learn-in-depth.elf
```

#### Resolving learn-in-depth.elf Symbols

```
arm-none-eabi-nm learn-in-depth.elf
```

#### Getting the binary executable from learn-in-depth.elf file

```
arm-none-eabi-objcopy -O binary elearn-in-depth.elf learn-in-depth.bin
```

#### Running The Binary File On Board Versatilepb Using Qemu Emulator

```
qemu-system-arm -M versatilepb -m 128M -nographic -kernel learn-in-depth.bin
```
