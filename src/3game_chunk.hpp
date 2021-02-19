#ifndef THREEGAME_CHUNK_HPP_
#define THREEGAME_CHUNK_HPP_

#include "./3game_rng.hpp"

using Chunk_Coord = V2<int>;

struct Chunk {
  Chunk_Coord coord;
  bool walls[CHUNK_SIZE][CHUNK_SIZE];

  void generate_walls(Rng *rng);
  bool wall_at(Tile_Coord tile) const;
};

#endif
