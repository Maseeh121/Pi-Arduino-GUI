# Pi-Arduino-GUI

The purpose of this program is to take measurements of an object using the arudino uno and feed that data to the raspberry pi, using the gpio pins on both devices. The raspberry pi would then take that data and display it in a GUI.

I was slowly building up to this by:

1. Getting the arduino to emit a 1 from one of it's pins and having the raspberry pi recieve and display that
2. Connecting a button to the arduino and have the arduino emit a 1 or 0 based on if the button was pressed. Thereafter, having the raspberry pi display on a gui whether the button was pressed or not.
3. Doing the same with 2 buttons and without a time delay.

Currently the file testing 2 has the working version of #2.
