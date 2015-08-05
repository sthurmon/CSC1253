#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include "sound.h"
using namespace std;

#define A             128
#define sample_rate  8000
#define f0            440

namespace snd {

        /**
	 * This code returns the number of half-steps above the base
	 * note, A4.
	 */
	int half_steps(string note) {
		int n, offset=0;
		if (note[0] > 'B')     offset++;
		if (note[0] > 'E')     offset++;
		n =(note[0] - 'A')*2 - offset;
		int i = 1;
		     if (note[1] == 'b') { i++; n--; }
		else if (note[1] == '#') { i++; n++; }  
		n += (note[i] - '4')*12;
		return n;                               
	}


        /**
	 * Generates the amplitude of a sound wave of frequency at time.
	 */
	uint8_t wave (float frequency, float time) {
		return A*sin(2*M_PI*frequency*time/sample_rate);
	}


        /**
	 * Gives the frequency of a note.
	 */
	float   freq (string note) {
		return f0*pow(pow(2.0, 1.0/12.0), (double)half_steps(note));
	}


	/**
	 * Plays a pure note (given its frequency) for a specified duration.
	 */
	void    play (float frequency, float duration) {
		ofstream outfile;
		outfile.open("sound.raw", ios::app);
		float time;
		for (time=0; time<=duration*sample_rate; time++) {
			outfile << wave(frequency, time);
		}
	}


	/**
	 * Plays a pure note (given in scientific pitch notation) for a
	 * specified duration.
	 */
	void    play (string note, float duration) {
		ofstream outfile;
		outfile.open("sound.raw", ios::app);
		float frequency = freq(note);
		float time;
		for (time=0; time<=duration*sample_rate; time++) {
			outfile << wave(frequency, time);
		}
	}

}
