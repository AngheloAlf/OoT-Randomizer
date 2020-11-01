#include "analog.h"


void handle_analogs(){
    z64_input_t second_player = z64_game.common.input[1];
    z64_game.col_hdr->camera->seg_params->rot.x += second_player.x_diff;
    z64_game.col_hdr->camera->seg_params->rot.y += second_player.y_diff;
}
