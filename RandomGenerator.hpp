#ifndef RANDOM_GENERATOR_HPP
#define RANDOM_GENERATOR_HPP

#include <random>
#include <chrono>
#include <mutex>
using namespace std;

class RandomGenerator {
private:
    mt19937 engine;
    mutex mtx;
    static unsigned long long currentTimeSeed() {
        return chrono::high_resolution_clock::now().time_since_epoch().count();
    }

public:
    RandomGenerator() {
        reseed(currentTimeSeed());
    }
    explicit RandomGenerator(unsigned int seed) {
        reseed(seed);
    }
    void reseed(unsigned int seed) {
        lock_guard<mutex> lock(mtx);
        engine.seed(seed);
    }

    int getInt(int min, int max) {
        lock_guard<mutex> lock(mtx);
        uniform_int_distribution<int> dist(min, max);
        return dist(engine);
    }
    float getFloat(float min, float max) {
        lock_guard<mutex> lock(mtx);
        uniform_real_distribution<float> dist(min, max);
        return dist(engine);
    }
    double getDouble(double min, double max) {
        lock_guard<mutex> lock(mtx);
        uniform_real_distribution<double> dist(min, max);
        return dist(engine);
    }
    bool getBool() {
        lock_guard<mutex> lock(mtx);
        bernoulli_distribution dist(0.5);
        return dist(engine);
    }
};

#endif // RANDOM_GENERATOR_HPP
