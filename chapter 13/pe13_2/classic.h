#include "cd.h"

class Classic : public Cd {
private:
    char *single;
public:
    Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    Classic(const Classic & d);
    Classic();
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic & d);
};

