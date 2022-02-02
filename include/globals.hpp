#ifndef DLOBALS_HPP
#define GLOBALS_HPP

#include <chrono>

typedef std::chrono::milliseconds duration_t;
#define TICK_INTERVAL duration_t(16)

typedef uint32_t id_t;

#define WINDOW_TITLE "my window"
#define SCREEN_W 800
#define SCREEN_H 600
#define WINDOW_FLAGS 0 //SDL_WINDOW_RESIZABLE

/* DEBUG flags */
#define PRINT_ENGINE_MODE 1
#define PRINT_GAME_LOG 1
#define PRINT_EXIT_MESSAGE 0
#define PRINT_TICK_SLEEP_TIME 0
#define PRINT_LOAD_LOG 1
#define PRINT_PARSE_LOG 1
#define PRINT_PARSE_READFILE_LOG 0
#define LOAD_TEXTURES_CACHE 1
using std::chrono::milliseconds;
#define DELAY_LOAD_TIME milliseconds(300)
#define DISABLE_BATCH_PROGRESS_EXECUTION 0

#define PRELOAD_FONT_SIZES {32, 18, 16, 14}
#define DEFAULT_FONT "assets/fonts/comic_shanns_2.ttf"

/* Used font sizes:
 * 32 - Loading Screen
 * 14 - Engine default
 */

struct SDL_Color;
extern bool operator < (SDL_Color const&,
                        SDL_Color const&);

#endif
