#include <string>
#include <cstdlib>
#include <stdint.h>
using namespace std;

namespace snd {

	int     half_steps(string note);
	uint8_t wave (float frequency, float time);
	float   freq (string note);
	void    play (string note, float duration);
	void    play (float frequency, float duration);

}
