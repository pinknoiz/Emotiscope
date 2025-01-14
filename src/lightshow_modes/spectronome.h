void draw_spectronome(){
	// Draw spectrograph
	draw_spectrum();

	// Darken it by how much confidence I have in the current tempo guess
	scale_CRGBF_array_by_constant(leds, 1.0 - sqrt(sqrt(sqrt(tempo_confidence))), NUM_LEDS);

	draw_metronome();
}