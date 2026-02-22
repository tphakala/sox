/* Float (single-precision) version of fft4g.
 *
 * This file compiles fft4g.c with FFT4G_FLOAT defined,
 * producing float variants of all FFT functions (lsx_rdft_f, etc.).
 * Used by the spectrogram effect for improved performance on ARM/NEON.
 */

#define FFT4G_FLOAT
#include "fft4g.c"
