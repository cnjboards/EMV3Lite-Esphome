#include "esphome/core/color.h"

const char * wifi_icon(float wifi_strength) {
    if (isnan(wifi_strength))
                        return "\U000F092B"; // No-wifi
        else if (wifi_strength < 10)
                        return "\U000F0920";  // low-wifi
        else if (wifi_strength < 30)
                        return "\U000F091F"; // wifi-1
        else if (wifi_strength < 50)
                        return "\U000F0922"; // wifi-2
        else if (wifi_strength < 75)
                        return "\U000F0925"; // wifi-3
        else
                        return "\U000F0928"; // wifi-4
}

const Color wifi_color(float wifi_strength) {
    if (isnan(wifi_strength))
                        return Color(127, 127, 127); // No-wifi
        else if (wifi_strength < 10)
                        return Color(255,0,0);  // low-wifi
        else if (wifi_strength < 30)
                        return Color(255,127,0); // wifi-1
        else if (wifi_strength < 50)
                        return Color(255,200,0); // wifi-2
        else if (wifi_strength < 75)
                        return Color(255,255,0); // wifi-3
        else
                        return Color(0,255,0); // wifi-4
}