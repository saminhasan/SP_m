# import numpy as np
# import pandas as pd
# import matplotlib.pyplot as plt

# from data.util import add_reference_frame, set_axes_equal
# from scipy.signal import find_peaks

# def plot_pose_array(pose_array, window_name='', plot_title='Frame vs Pose'):
#     fig, axes = plt.subplots(6, 1, figsize=(9, 16))
#     fig.canvas.manager.set_window_title(window_name)
#     fig.suptitle(plot_title, fontsize=16)

#     labels = ['X(m)', 'Y(m)', 'Z(m)', 'Roll(rad)', 'Pitch(rad)', 'Yaw(rad)']
#     time = np.arange(len(pose_array))

#     # Using list comprehension to plot and label axes
#     _ = [ax.plot(time, pose_array[:, i]) or ax.set_ylabel(labels[i]) or ax.grid(True) for i, ax in enumerate(axes)]

#     axes[-1].set_xlabel('Frame')

#     plt.tight_layout(rect=[0, 0, 1, 0.96])  # Adjust layout to make space for suptitle


# # def swap_axes(arr):
# #     swapped_arr = np.empty_like(arr)
# #     swapped_arr[..., 2] = arr[..., 0]
# #     swapped_arr[..., 0] = arr[..., 1]
# #     swapped_arr[..., 1] = arr[..., 2]
# #     return swapped_arr


# # def unswap_axes(arr):
# #     unswapped_arr = np.empty_like(arr)
# #     unswapped_arr[..., 0] = arr[..., 2]
# #     unswapped_arr[..., 1] = arr[..., 0]
# #     unswapped_arr[..., 2] = arr[..., 1]
# #     return unswapped_arr


# def mean_center_columns(arr):
#     # Calculate the mean of each column
#     col_means = np.mean(arr, axis=0)
#     # Subtract the column means from each element in the respective column
#     centered_arr = arr - col_means
    
#     return centered_arr

# def compute(a, b, c):
#     T1 = a# swap_axes(a)
#     T10 = b# swap_axes(b)
#     S = c# swap_axes(c)
#     cg = (T1 + T10 + S) / 3

#     v1 = T1 -T10
#     v2 = T1 - S
#     uy = (v1) / np.linalg.norm(v1, axis=1)[:, np.newaxis]
#     ux = np.cross(uy, v2)/ np.linalg.norm(np.cross(uy, v2), axis=1)[:, np.newaxis]
#     beta = np.arcsin(-ux[:,2])
#     alpha = np.arcsin(ux[:,1]/np.cos(beta))
#     gamma = np.arcsin(uy[:,2] / np.cos(beta))
#     yaw, pitch, roll  = alpha, beta, gamma
#     pose = np.hstack((cg, np.stack((roll, pitch, yaw), axis=1)))
#     peaks, _ = find_peaks(cg[:,2])

#     highest_peak_idx = peaks[np.argmax(cg[peaks, 2])]
#     return pose 


# if __name__ == '__main__':
#     file_path = 'Traj.csv'  
#     # Reading the file while skipping the unnecessary header rows
#     data = pd.read_csv(file_path, skiprows=1)
#     # Extracting the coordinates for each marker
#     T1 = data[['T1Y', 'T1Z', 'T1X']].values / 1000
#     T10 = data[['T10Y', 'T10Z', 'T10X']].values / 1000
#     Sternum = data[['SternumY', 'SternumZ', 'SternumX']].values / 1000
#     Rnip = data[['RnipY', 'RnipZ', 'RnipX']].values / 1000
#     Lnip = data[['LnipY', 'LnipZ', 'LnipX']].values / 1000


#     pose_array = compute(T1, T10, Sternum)
#     plot_pose_array(pose_array)
#     plt.show()
#     plt.close()
#     pa_c = mean_center_columns(pose_array)
#     # np.savetxt('centered_array.txt', pa_c, delimiter=',')
#     # exit()
#     # Create a 3D plot for visualization
#     fig = plt.figure('Walking Trajectory')
#     ax = fig.add_subplot(111, projection='3d')
#     ax.set_title('Walking Trajectories')
#     # Axis labels
#     ax.set_xlabel('X axis (mm)')
#     ax.set_ylabel('Y axis (mm)')
#     ax.set_zlabel('Z axis (mm)')

#     # Plot legends outside the loop to ensure they are displayed
#     legend_elements = [
#         plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='r', markersize=10, label='T1'),
#         plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='g', markersize=10, label='T10'),
#         plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='b', markersize=10, label='Sternum'),
#         plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='c', markersize=10, label='Rnip'),
#         plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='m', markersize=10, label='Lnip')
#     ]
#     ax.legend(handles=legend_elements)

#     for num in range(1000, len(T1), 3):
#         print(f"\rAnimating frame {num + 1}/{len(T1)}", end="", flush=True)
#         ax.clear()

#         pose = pose_array[num]
#         translation = pose[:3]

#         rotation = pose[3:]
        

#         # # Axis labels for each frame
#         ax.set_xlabel('X axis (m)')
#         ax.set_ylabel('Y axis (m)')
#         ax.set_zlabel('Z axis (m)')
#         # ax.set_xlim([min(data[['T1X', 'T10X', 'SternumX', 'RnipX', 'LnipX']].min()), max(data[['T1X', 'T10X', 'SternumX', 'RnipX', 'LnipX']].max())])
#         # ax.set_ylim([min(data[['T1Y', 'T10Y', 'SternumY', 'RnipY', 'LnipY']].min()), max(data[['T1Y', 'T10Y', 'SternumY', 'RnipY', 'LnipY']].max())])
#         # ax.set_zlim([min(data[['T1Z', 'T10Z', 'SternumZ', 'RnipZ', 'LnipZ']].min()), max(data[['T1Z', 'T10Z', 'SternumZ', 'RnipZ', 'LnipZ']].max())])

#         # Set the x-axis limits
#         ax.set_xlim([min(T1[0].min(), T10[0].min(), Sternum[0].min(), Rnip[0].min(), Lnip[0].min()), 
#                     max(T1[0].max(), T10[0].max(), Sternum[0].max(), Rnip[0].max(), Lnip[0].max())])

#         # Set the y-axis limits
#         ax.set_ylim([min(T1[1].min(), T10[1].min(), Sternum[1].min(), Rnip[1].min(), Lnip[1].min()), 
#                     max(T1[1].max(), T10[1].max(), Sternum[1].max(), Rnip[1].max(), Lnip[1].max())])

#         # Set the z-axis limits
#         ax.set_zlim([min(T1[2].min(), T10[2].min(), Sternum[2].min(), Rnip[2].min(), Lnip[2].min()), 
#                     max(T1[2].max(), T10[2].max(), Sternum[2].max(), Rnip[2].max(), Lnip[2].max())])


#         ax.scatter(T1[num, 0], T1[num, 1], T1[num, 2], color='r', label='T1')
#         ax.scatter(T10[num, 0], T10[num, 1], T10[num, 2], color='g', label='T10')
#         ax.scatter(Sternum[num, 0], Sternum[num, 1], Sternum[num, 2], color='b', label='Sternum')
#         ax.scatter(Rnip[num, 0], Rnip[num, 1], Rnip[num, 2], color='c', label='Rnip')
#         ax.scatter(Lnip[num, 0], Lnip[num, 1], Lnip[num, 2], color='m', label='Lnip')
        
#         add_reference_frame(ax=ax, translation=translation, rotation=rotation, length=0.5)
#         ax.legend(handles=legend_elements)
#         # set_axes_equal(ax=ax)
#         plt.pause(1e-12)  # Pause briefly to update the plot

#     plt.show()
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
filename = 'Rots.csv'
data = pd.read_csv(filename)

# Extract data into variables
time_sec = data['time'].to_numpy()
z_measured_deg = data['Z_rot'].to_numpy()
x_measured_deg = data['X_rot'].to_numpy()
y_measured_deg = data['Y_rot'].to_numpy()
z_measured_m = data['Z'].to_numpy()

# Calculate the time step
ts = time_sec[1] - time_sec[0]

# Calculate the number of rows needed to reach tf
tf = 4
num_rows = int(tf / ts) + 1

# Preallocate arrays
extended_time_sec = np.zeros(num_rows)
extended_z_measured_deg = np.zeros(num_rows)
extended_x_measured_deg = np.zeros(num_rows)
extended_y_measured_deg = np.zeros(num_rows)
extended_z_measured_m = np.zeros(num_rows)

# Fill the preallocated arrays with smoothing using linear interpolation
for i in range(num_rows):
    index = (i % len(time_sec))
    extended_time_sec[i] = i * ts
    extended_z_measured_deg[i] = z_measured_deg[index]
    extended_x_measured_deg[i] = x_measured_deg[index]
    extended_y_measured_deg[i] = y_measured_deg[index]
    extended_z_measured_m[i] = z_measured_m[index]
    
    # Linear interpolation for smooth transition
    if index == 0 and i > 0:
        prev_index = (i-1) % len(time_sec)
        for j in range(1, 4):
            t = j / 4
            extended_z_measured_deg[i-j] = (1-t) * z_measured_deg[prev_index] + t * z_measured_deg[index]
            extended_x_measured_deg[i-j] = (1-t) * x_measured_deg[prev_index] + t * x_measured_deg[index]
            extended_y_measured_deg[i-j] = (1-t) * y_measured_deg[prev_index] + t * y_measured_deg[index]
            extended_z_measured_m[i-j] = (1-t) * z_measured_m[prev_index] + t * z_measured_m[index]

# Plot all extended variables vs time
plt.figure(figsize=(10, 8))

# plt.subplot(4, 1, 1)
plt.plot(extended_time_sec, extended_z_measured_deg)
plt.title('Z Measured (deg) vs Time')
plt.xlabel('Time (s)')
plt.ylabel('Z Measured (deg)')
plt.grid(True)

# plt.subplot(4, 1, 2)
# plt.plot(extended_time_sec, extended_x_measured_deg)
# plt.title('X Measured (deg) vs Time')
# plt.xlabel('Time (s)')
# plt.ylabel('X Measured (deg)')
# plt.grid(True)

# plt.subplot(4, 1, 3)
# plt.plot(extended_time_sec, extended_y_measured_deg)
# plt.title('Y Measured (deg) vs Time')
# plt.xlabel('Time (s)')
# plt.ylabel('Y Measured (deg)')
# plt.grid(True)

# plt.subplot(4, 1, 4)
# plt.plot(extended_time_sec, extended_z_measured_m)
# plt.title('Z Measured (m) vs Time')
# plt.xlabel('Time (s)')
# plt.ylabel('Z Measured (m)')
# plt.grid(True)

plt.tight_layout()
plt.show()
