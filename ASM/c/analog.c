#include "analog.h"


void handle_analogs(){
    z64_input_t second_player = z64_game.common.input[0];
    z64_game.camera_focus += second_player.raw.x;
    //z64_game.camera_distance += second_player.raw.x;
    /*z64_game.col_hdr->vtx->x += second_player.raw.x;*/
    /*z64_game.col_hdr->vtx->y += second_player.raw.y;*/
}
