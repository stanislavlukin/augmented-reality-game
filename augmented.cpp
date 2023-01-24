#include <iostream>
#include <chrono>

int main() {
    double dt = 0;
    while (true) {
        // Measure elapsed time
        auto start = std::chrono::high_resolution_clock::now();
        // Handle input
        handleInput();
        // Update game state
        update(dt);
        // Render current frame
        render();
        // Measure elapsed time
        auto end = std::chrono::high_resolution_clock::now();
        dt = std::chrono::duration<double, std::milli>(end - start).count();
    }
    return 0;
}

#include <AR/ar.h>
#include <AR/arMulti.h>

void handleInput() {
    ARUint8 *dataPtr;
    ARMarkerInfo *marker_info;
    int marker_num;
    if (arDetectMarker(dataPtr, thresh, &marker_info, &marker_num) < 0) {
        // Error occurred
    }
    for (int i = 0; i < marker_num; i++) {
        // Check if marker is visible
        if (marker_info[i].cf >= 0.7) {
            // Handle marker detection
        }
    }
}
