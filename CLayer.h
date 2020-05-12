//
// Created by User on 29.04.2020.
//

#ifndef NEOCOGNITRON_CLAYER_H
#define NEOCOGNITRON_CLAYER_H

#include "ColumnResult.h"
#include "CCell.h"


class CLayer {
private:
    std::vector<std::vector<std::vector<CCell*>>> c_cells;

    //std::vector<std::vector<std::vector<float>>> d
    std::vector<std::vector<float>> d;

    std::vector<std::vector<float>> conn_factor;

    int planes_number;
    int w_size;
    int plane_size;


public:
   // CLayer(NeocognithronConfiguration configuration, int layer_num);
   CLayer(int planes_number, int plane_size, int w_size, std::vector<std::vector<float>> &d_init, std::vector<float> &cof_corr);

   ColumnResult calk_result(ColumnResult previous_column_result);

    void init_c_layer(int new_planes_num, int prev_plane_size);
};


#endif //NEOCOGNITRON_CLAYER_H