**Programming STM32F4 Black Pill in PlatformIO (VSCODE)**

1. In this method , we'll be programming the Black Pill through the DFU i.e. Device Firmware Update Mode.
2. You have to install the STM32 DFU driver installed for this.
3. If you don't have it installed already, you can install the STM32 cube IDE and the Cube MX and their installation will automatically initiate installing the necessary drivers.
4. You can download these Cube IDE through the official STM32 site.
5. To check whether the DFU driver is intalled successfully or not, connect your STM32 through the USB-C connector and open the device manager on your windows machine.
6. <img width="340" height="131" alt="image" src="https://github.com/user-attachments/assets/43529b17-515e-4155-b0e0-86102c5b9645" />
7. You would see under the PORTs section as 'USB Serial Device' and an assigned COM Port to it.
8. Now press and hold the **boot** button on the board and tap the **nrst (reset)** button.
9. This should set the board in the DFU mode now.
10. <img width="276" height="45" alt="image" src="https://github.com/user-attachments/assets/f7bc1a3a-b787-45d3-b806-f79179f74d38" />
11. It should show up like this.
