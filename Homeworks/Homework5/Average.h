
#ifndef AVERAGE_H
#define AVERAGE_H

class Average {
  public:

    // Implementations
    float computeAverage(int num1, int num2) {
        return (num1 + num2) / 2.0f;
    }

    float computeAverage(int num1, int num2, int num3) {
        return (num1 + num2 + num3) / 3.0f;
    }

    float computeAverage(float num1, float num2) {
        return (num1 + num2) / 2.0f;
    }

    float computeAverage(float num1, float num2, float num3) {
        return (num1 + num2 + num3) / 3.0f;
    }

};
#endif
