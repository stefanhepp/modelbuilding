Multimodule Custom Build
========================

To build:
- Clone https://github.com/pascallanger/DIY-Multiprotocol-TX-Module/tree/master
- Place `_MyConfig.h` into Multiprotocol
- Uncomment `#define USE_MY_CONFIG` in `_Config.h`
- apt install arduino
- Follow the instructions here: https://github.com/pascallanger/DIY-Multiprotocol-TX-Module/blob/master/docs/Compiling_STM32.md
  - Install the Multi-4-in-1 STM32 board in the IDE
  - Open the Multiprotocol.ino file
  - Select the STM32 Multi 4-in-1 board (128kb) board
  - Compile + export the binary

