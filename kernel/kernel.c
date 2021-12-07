#include "Screen.h"


struct Arr {
	uint8_t c;
	struct Arr* next;
};


int kmain() {
    volatile char* video_memory = (char*)0xB8000;
	volatile uint8_t str[5] = {72, 101, 108, 108, 111};

	*video_memory = 72;
	video_memory += 2;
	*video_memory = 101;
	video_memory += 2;
	*video_memory = 108;
	video_memory += 2;
	*video_memory = 108;
	video_memory += 2;
	*video_memory = 111;

    return 0;
}
