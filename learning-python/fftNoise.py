import numpy as np
from scipy.io.wavfile import write

sample_rate = 44100
duration = 5.0
n_samples = int(sample_rate * duration)

# Create a one-sided frequency spectrum (positive freqs only)
freqs = np.fft.rfftfreq(n_samples, d=1/sample_rate)
spectrum = np.zeros_like(freqs, dtype=np.complex128)

# Assign equal energy to all audible frequencies (20Hz-20kHz)
mask = (freqs >= 20) & (freqs <= 20000)
spectrum[mask] = 1.0  # Uniform amplitude

# Inverse FFT to get real-valued signal
audio = np.fft.irfft(spectrum)

# Normalize and export
audio /= np.max(np.abs(audio))
write("single_sided_spectrum.wav", sample_rate, (audio * 32767).astype(np.int16))
