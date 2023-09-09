#include <bits/stdc++.h>
#include<fstream>

class Encryption {
public:
    virtual bool prod(double a, double b);
};
class EncryptionStub : public Encryption {
public:
	bool prod(double a, double b) override {
        // This is the stub implementation
        return true;
    }
};
