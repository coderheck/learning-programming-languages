import numpy as np
from scipy.io.wavfile import write

sample_rate = 44100  # Standard sample rate
duration = 5.0       # Length in seconds
t = np.linspace(0, duration, int(sample_rate * duration), False)

audio = np.zeros_like(t)  # Initialize output

# Add sine waves (zero-phase, no negative starts)
freq_step = 10  # Adjust for density (smaller = more frequencies)
amplitude = 0.01  # Keep low to avoid clipping

for freq in range(20, 20000, freq_step):
    audio += amplitude * np.sin(2 * np.pi * freq * t)  # All sines start at 0°

# Normalize to [-1, 1] range to prevent distortion
audio /= np.max(np.abs(audio))

# Save as WAV file
write("Noise.wav", sample_rate, (audio * 32767).astype(np.int16))
