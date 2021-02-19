#ifndef THREEGAME_RNG_HPP_
#define THREEGAME_RNG_HPP_

struct Rng {
  static const int N = 624;
  static const int M = 397;

  uint32_t vektor[N];
  int idx;

  void seed_with(uint32_t seed);
  void update();
  uint32_t random();
};

#endif
