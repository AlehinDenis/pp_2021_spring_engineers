// Copyright 2021 Oganyan Robert


#ifndef MODULES_TASK_2_OGANYAN_R_MARK_COMPONENTS_OMP_MARK_COMPONENTS_OMP_H_
#define MODULES_TASK_2_OGANYAN_R_MARK_COMPONENTS_OMP_MARK_COMPONENTS_OMP_H_


#include <utility>
#include <cstdint>
#include <stdexcept>
#include <vector>
#include <queue>
#include "../../modules/task_2/oganyan_r_mark_components_omp/Disjoint_Set_Union.h"




std::pair<std::vector<int>, int> MarkComponentsSeq(std::vector<int> *img,
                                                   int height, int width);

std::pair<std::vector<int>, int> MarkComponentsPar(std::vector<int> *img,
                                                   int height, int width);

void bfs(std::vector<int> *img, std::pair<int, int> start,
         int *number, int width, int height);


#endif  //  MODULES_TASK_2_OGANYAN_R_MARK_COMPONENTS_OMP_MARK_COMPONENTS_OMP_H_
