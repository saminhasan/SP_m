import numpy as np
import matplotlib.pyplot as plt

# Load the data from the uploaded CSV file
data = np.loadtxt('motorData.txt', delimiter=',')

# Extract the time column and motor angles
time = data[:, 0]
motorAngles = data[:, 1:]

# Sampling frequency (assuming time is in seconds and evenly spaced)
dT = np.mean(np.diff(time))
Fs = 1 / dT

# Plot the FFTs
plt.figure(figsize=(12, 8))

for col in range(motorAngles.shape[1]):
    # Perform FFT
    Y = np.fft.fft(motorAngles[:, col])
    
    # Compute the two-sided spectrum P2
    P2 = np.abs(Y / motorAngles.shape[0])
    
    # Compute the single-sided spectrum P1
    P1 = P2[:motorAngles.shape[0]//2 + 1]
    P1[1:-1] = 2 * P1[1:-1]
    
    # Define the frequency domain f
    f = Fs * np.arange(motorAngles.shape[0]//2 + 1) / motorAngles.shape[0]
    
    # Plot the FFT
    plt.subplot(2, 3, col + 1)
    plt.plot(f, P1)
    plt.title(f'FFT of Column {col + 1}')
    plt.xlabel('Frequency (Hz)')
    plt.ylabel('Amplitude')
    plt.grid()

plt.tight_layout()
plt.show()
