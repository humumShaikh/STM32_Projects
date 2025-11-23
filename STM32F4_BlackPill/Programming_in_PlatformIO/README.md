**Programming STM32F4 Black Pill in PlatformIO (VSCODE)**

1. In this method , we'll be programming the Black Pill through the DFU i.e. Device Firmware Update Mode.
2. You have to install the STM32 DFU driver installed for this.
3. If you don't have it installed already, you can install the STM32 cube IDE and the Cube MX and their installation will automatically initiate installing the necessary drivers.
4. You can download these Cube IDE through the official STM32 site.
5. To check whether the DFU driver is intalled successfully or not, connect your STM32 through the USB-C connector and open the device manager on your windows machine.
6. 
7. <img width="340" height="131" alt="image" src="https://github.com/user-attachments/assets/43529b17-515e-4155-b0e0-86102c5b9645" />

8. You would see under the PORTs section as 'USB Serial Device' and an assigned COM Port to it.
9. Now press and hold the **boot** button on the board and tap the **nrst (reset)** button.
10. This should set the board in the DFU mode now.
11. 
12. <img width="276" height="45" alt="image" src="https://github.com/user-attachments/assets/f7bc1a3a-b787-45d3-b806-f79179f74d38" />

13. It should show up like this.
14. Now open up your VScode and switch to platformIO.

15. <img width="1366" height="728" alt="image" src="https://github.com/user-attachments/assets/46f26715-7c1c-40bb-915e-c05239ecd224" />

16. Make a new project.

17. <img width="1366" height="726" alt="image" src="https://github.com/user-attachments/assets/169a248e-5509-4f5c-a862-fd401839a4dd" />

18. Select your version of the black pill board.
19. Click finish.

20. In the **platformio.ini** file add this line to enable the serial monitor **monitor_speed = 115200**

21. <img width="872" height="262" alt="image" src="https://github.com/user-attachments/assets/20adaf54-5ed7-4555-a1b3-62f83f1c0c65" />

22. Add this line to make sure that it uploads using the dfu

23. <img width="900" height="403" alt="image" src="https://github.com/user-attachments/assets/e96e0508-f0c0-4d61-9a58-73fb95ddc0d2" />

24. This should do it.
25. Now open the src section and open the main.cpp

26. <img width="1141" height="583" alt="image" src="https://github.com/user-attachments/assets/9905dcca-b5f4-4e3f-84b6-d1347466b329" />

27. This is where we are supposed to write our arduino code.
28. Make sure to include the **Arduino.h** , it is needed for compilation
29. A sample code is provided.
30. Once done, click the upload button indicated by the right arrow at the bottom left.

31. <img width="1073" height="729" alt="image" src="https://github.com/user-attachments/assets/c530a33d-9464-48ad-921e-b2720f7e7d64" />

32. You will see things compiling and building in the terminal.

33. <img width="1070" height="707" alt="image" src="https://github.com/user-attachments/assets/a0593ed2-4aa0-4b70-97a6-d8683300d0db" />
