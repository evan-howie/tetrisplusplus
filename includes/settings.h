#pragma once

#define GAME_LOOP_FPS 60.0
#define GAME_LOOP_PERIOD_s 1 / GAME_LOOP_FPS
#define GAME_LOOP_PERIOD_ms 1000 / GAME_LOOP_FPS

#define DEFAULT_DAS 95
#define DEFAULT_ARR INT32_MAX
#define DEFAULT_ARP 1000.0 / ARR
#define DEFAULT_SDF -1 
#define DEFAULT_LOCK_TIME 1000
#define DEFAULT_HARD_LOCK_FACTOR 5

#define SHM_PATH "/tpp_shared_mem"
#define SHM_SIZE 1024
#define SHM_CELL_EMPTY 'o'
#define SHM_CELL_FULL 'x'
