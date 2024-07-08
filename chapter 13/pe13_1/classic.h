#include "cd.h"

class Classic : public Cd {
private:
    char single[50];
public:
    Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    Classic(){};
    void Report() const;
};
