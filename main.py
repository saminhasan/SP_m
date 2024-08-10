# import numpy as np
# import pandas as pd
# import matplotlib.pyplot as plt
# from numpy import set_printoptions

# # Set numpy print options
# set_printoptions(precision=32, suppress=True)

# # Path to the CSV file
# file_path = 'Rots_raw.csv'

# # Read the CSV file
# data = pd.read_csv(file_path)

# # Convert to numpy array excluding 'gait_cycle' column
# data_array = data.drop(columns=['gait_cycle']).to_numpy()

# # Extracting columns for plotting
# time = data_array[:, 0]
# Z_rot = data_array[:, 1]
# X_rot = data_array[:, 2]
# Y_rot = data_array[:, 3]
# Z = data_array[:, 4]

# # Create the plot
# fig, axs = plt.subplots(4, 1, figsize=(10, 12), sharex=True)
# fig.suptitle('Rotation and Z Position Data')

# # Plot Z Rotation
# axs[0].plot(time, Z_rot, label='Z Rotation', color='b')
# axs[0].set_ylabel('Z Rotation')
# axs[0].legend()

# # Plot X Rotation
# axs[1].plot(time, X_rot, label='X Rotation', color='g')
# axs[1].set_ylabel('X Rotation')
# axs[1].legend()

# # Plot Y Rotation
# axs[2].plot(time, Y_rot, label='Y Rotation', color='r')
# axs[2].set_ylabel('Y Rotation')
# axs[2].legend()

# # Plot Z Position
# axs[3].plot(time, Z, label='Z Position', color='m')
# axs[3].set_xlabel('Time (s)')
# axs[3].set_ylabel('Z Position')
# axs[3].legend()

# # Display the plot
# plt.show()
import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import get_window
from scipy.interpolate import UnivariateSpline

# Generate synthetic gait cycle data for demonstration
fs = 1000  # Sampling frequency
duration = 1  # Duration of one gait cycle in seconds
t = np.linspace(0, duration, fs * duration)
z_movement = np.sin(2 * np.pi * t)  # Example Z movement
rx_movement = np.sin(2 * np.pi * t + np.pi / 6)  # Example Rx movement

# Define overlap region (e.g., 10% of the cycle length)
overlap_length = int(0.1 * len(t))

# Create crossfade window (Hann window for smooth transition)
window = get_window('hann', overlap_length * 2)

# Extract overlap regions
end_of_cycle = z_movement[-overlap_length:]
start_of_cycle = z_movement[:overlap_length]

# Apply crossfade window
crossfade_end = end_of_cycle * window[:overlap_length]
crossfade_start = start_of_cycle * window[overlap_length:]

# Combine signals with crossfade
combined_z_movement = np.concatenate((
    z_movement[:-overlap_length],
    crossfade_end + crossfade_start,
    z_movement[overlap_length:]
))

# Update time vector to match the length of combined_z_movement
t_combined = np.linspace(0, duration * (len(combined_z_movement) / len(z_movement)), len(combined_z_movement))

# Spline interpolation for smooth derivatives
spline = UnivariateSpline(t_combined, combined_z_movement, s=0)
smooth_z_movement = spline(t_combined)

# Plot the original and smoothed signals
plt.figure(figsize=(12, 6))
plt.plot(t, z_movement, label='Original Signal')
plt.plot(t_combined, smooth_z_movement, label='Smoothed Signal')
plt.legend()
plt.xlabel('Time [s]')
plt.ylabel('Z Movement')
plt.title('Smoothing of Gait Cycle Data')
plt.show()


