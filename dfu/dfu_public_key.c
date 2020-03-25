
/* This file was automatically generated by nrfutil on 2019-10-18 (YY-MM-DD) at 18:24:55 */

#include "stdint.h"
#include "compiler_abstraction.h"

/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) const uint8_t pk[64] =
{
    0x7d, 0xc2, 0x98, 0xd5, 0x40, 0xb2, 0xdb, 0xb5, 0xac, 0x2c, 0xc1, 0x57, 0x9a, 0x63, 0xa6, 0xaa, 0xa3, 0xe6, 0xbd, 0xa9, 0x9e, 0xab, 0x33, 0x08, 0x98, 0xb0, 0x59, 0xd9, 0xc3, 0x2a, 0x0f, 0xe6, 
    0x7f, 0x7f, 0x0b, 0xd2, 0x5d, 0x97, 0x41, 0x1f, 0xa0, 0x82, 0x7c, 0xd6, 0xf3, 0x65, 0x3b, 0x3d, 0xc8, 0x53, 0x6f, 0x70, 0xc0, 0x1d, 0xdf, 0x73, 0x76, 0x3f, 0x73, 0x41, 0xe6, 0x30, 0x28, 0xb6
};
#if 0

__ALIGN(4) const uint8_t pk1[64] =
{
    0x67, 0x31, 0xaf, 0x75, 0x5f, 0x22, 0x5a, 0x8e, 0xe0, 0x92, 0x78, 0xb1, 0xad, 0x8b, 0x48, 0xed, 0x6d, 0x68, 0xa6, 0x89, 0x71, 0x57, 0x52, 0x7c, 0x8f, 0x87, 0xa9, 0x67, 0xdb, 0x0d, 0xba, 0x49, 
    0x8c, 0xeb, 0xb9, 0x15, 0x03, 0xf2, 0xa6, 0x43, 0x69, 0x3a, 0xb7, 0xfa, 0x2a, 0x6c, 0xea, 0x3e, 0xbc, 0xd3, 0x35, 0x10, 0xdd, 0x8a, 0x0c, 0x91, 0x06, 0x9a, 0x38, 0xc1, 0x31, 0xdf, 0xaf, 0xcd
};

__ALIGN(4) const uint8_t pk2[64] =
{
    0xee, 0x57, 0x76, 0x2e, 0x7c, 0x5e, 0x66, 0x1f, 0xd3, 0x81, 0x30, 0xed, 0x6e, 0x45, 0xa7, 0xfc, 0x9e, 0x9d, 0x16, 0x10, 0x35, 0x24, 0x4d, 0x1f, 0x52, 0xf3, 0xba, 0x60, 0x56, 0x9c, 0xa9, 0x90, 
    0x31, 0xa5, 0x66, 0x52, 0x72, 0x68, 0x91, 0xd3, 0x1b, 0x30, 0xa6, 0xb3, 0x9e, 0x94, 0x7d, 0x3a, 0x3e, 0x10, 0xfc, 0xca, 0xce, 0xab, 0x48, 0x2e, 0xda, 0x56, 0x0e, 0xc8, 0x1f, 0x8f, 0x4c, 0x71
};

__ALIGN(4) const uint8_t pk3[64] =
{
	0x1b, 0x0c, 0xae, 0x9f, 0x22, 0x80, 0x60, 0xa1, 0x85, 0xa0, 0xba, 0x18, 0xe7, 0xaf, 0xfc, 0x94, 0x63, 0xfb, 0xd2, 0x58, 0xac, 0xde, 0x1c, 0xa0, 0x1d, 0x2a, 0xd2, 0x0d, 0x25, 0x72, 0x9f, 0x37, 
	0x57, 0x00, 0xc4, 0xf6, 0x0b, 0x92, 0x21, 0x44, 0x85, 0x70, 0x5d, 0xbe, 0x62, 0x0d, 0x9e, 0x09, 0x82, 0x02, 0xf8, 0xec, 0x3b, 0xcd, 0x06, 0xb5, 0xc9, 0x68, 0xc7, 0xff, 0x2e, 0xe7, 0x95, 0x4
};
__ALIGN(4) const uint8_t pk4[64] =
{
	0x1b, 0x0c, 0xae, 0x9f, 0x22, 0x80, 0x60, 0xa1, 0x85, 0xa0, 0xba, 0x18, 0xe7, 0xaf, 0xfc, 0x94, 0x63, 0xfb, 0xd2, 0x58, 0xac, 0xde, 0x1c, 0xa0, 0x1d, 0x2a, 0xd2, 0x0d, 0x25, 0x72, 0x9f, 0x37, 
	0x57, 0x00, 0xc4, 0xf6, 0x0b, 0x92, 0x21, 0x44, 0x85, 0x70, 0x5d, 0xbe, 0x62, 0x0d, 0x9e, 0x09, 0x82, 0x02, 0xf8, 0xec, 0x3b, 0xcd, 0x06, 0xb5, 0xc9, 0x68, 0xc7, 0xff, 0x2e, 0xe7, 0x95, 0x4a
};
#endif
#else
#error "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
