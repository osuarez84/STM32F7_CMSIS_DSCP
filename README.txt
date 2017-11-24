This project is a testing project to use the STM32F746 MCU to compute the FFT
from a waveform generated using MATLAB.
The idea es to compute it, send the data
to the PC using serial COM and then read the data using MATLAB and compare it 

with the FFT computed with MATLAB.

The project has been checked with a waveform and the results confirm that 
the FFT 
computed by the MCU and the one computed by MATLAB are identical.