#pragma once
#include"../detwfa.hpp"

namespace TFHEpp{
#define INST(P)                                                     \
    extern template void CMUXFFT<P>(TRLWE<P> & res, const TRGSWFFT<P> &cs, \
                             const TRLWE<P> &c1, const TRLWE<P> &c0)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(bkP)                                             \
    extern template void CMUXFFTwithPolynomialMulByXaiMinusOne<bkP>( \
        TRLWE<typename bkP::targetP> & acc,                   \
        const BootstrappingKeyElementFFT<bkP> &cs, const int a)
TFHEPP_EXPLICIT_INSTANTIATION_BLIND_ROTATE(INST)
#undef INST

}