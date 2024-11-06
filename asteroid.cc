#include <random>
#include "asteroid.h"
#include <SFML/Graphics/Texture.hpp>

/*
Random :

std::random_device rn_device;
std::default_random_engine engine(rn_device());
std::uniform_int_distribution<float> uniform_dist(-150,-250);

direction_ = { uniform_dist(engine) , uniform_dist(engine) };
*/