/** MIT License
*
* Copyright(c) 2017 DevDuino
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files(the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions :
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef DEVDUINO_DEFAULT_FONT_H
#define DEVDUINO_DEFAULT_FONT_H

#include "font.h"

/**
 * Default namespace for devduino related code.
 */
namespace devduino {
	/**
	* \brief The default font for devduino.
	*/
	class DevduinoFont : public Font {
	public:
		uint8_t getGlyphWidth(uint8_t characterCode);
		uint8_t getGlyphHeight(uint8_t characterCode);
		const uint8_t* getGlyphPixels(uint8_t characterCode);
		int8_t getGlyphKerning(uint8_t characterCode, uint8_t previousCharacterCode);

	private:
		static const uint8_t glyphsBuffer[96][5] PROGMEM;
	};
} // namespace devduino

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_OLED) && !defined(NO_GLOBAL_OLED_FONT)
extern devduino::DevduinoFont devduinoFont;
#endif

#endif //DEVDUINO_DEFAULT_FONT_H