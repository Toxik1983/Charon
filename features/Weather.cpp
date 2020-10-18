/**
 * @description Make weather toggleable
 * @Author Jaenster
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"

REMOTEFUNC(void, DrawWeather, (), 0x473910);

namespace Weather {

    void drawWeatherIntercept() {
        if (!Settings["disableWeather"] && !Settings["debugMode"]) DrawWeather();
    }

    class : public Feature {
    public:
        void init() {
            MemoryPatch(0x476D23) << CALL(drawWeatherIntercept);
        }

    } feature;

}
