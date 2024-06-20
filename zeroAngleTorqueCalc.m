function tauo = zeroAngleTorqueCalc(platform_mass, excenter_arm_length, coupler_mass, excenter_mass, g)

    tauo = ((platform_mass / 6 + coupler_mass) * excenter_arm_length * g ) + (excenter_mass * g * excenter_arm_length/2);


end
