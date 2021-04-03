#ifndef SOMETHING_GAME_HPP_
#define SOMETHING_GAME_HPP_

#include "./something_player.hpp"
#include "./something_renderer.hpp"
#include "./something_camera.hpp"
#include "./something_tile_grid.hpp"
#include "./something_poof.hpp"
#include "./something_projectiles.hpp"

struct Game
{
    bool quit;

    const Uint8 *keyboard;
    SDL_Window *window;

    Atlas atlas;
    Player player;
    Camera camera;
    Tile_Grid tile_grid;
    Poof poof;
    Projectiles projectiles;

    V2<float> mouse;

    void init(SDL_Window *window);
    void handle_event(const SDL_Event *event);
    void update(Seconds dt);
    void render(Renderer *renderer) const;
};

#endif  // SOMETHING_GAME_HPP_
