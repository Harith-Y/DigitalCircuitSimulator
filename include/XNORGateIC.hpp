#ifndef XNORGATEIC_HPP
#define XNORGATEIC_HPP

#include "IC.hpp"

template <typename T>
class XNORGateIC : public IC<T> {
    public:
        XNORGateIC();

        // ~XNORGateIC() {
        //     cout << "XNOR Gate destructor called." << endl;
        // }

        void simulate() override;
};

#endif // XNORGATEIC_HPP
