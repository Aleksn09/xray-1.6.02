#include "stdafx.h"
#include "stats_submitter.h"

namespace gamespy_profile
{

// DSA params 
u8 const stats_submitter::p_number[crypto::xr_dsa::public_key_length] = {
	0x81, 0x45, 0xf1, 0x8f, 0x3c, 0x00, 0x36, 0xb8, 
	0xf5, 0x7b, 0x26, 0xba, 0x1d, 0x98, 0xb8, 0x25, 
	0xce, 0x53, 0xbd, 0x10, 0xc3, 0x34, 0xa0, 0xfc, 
	0xcf, 0x5e, 0x50, 0x48, 0x78, 0x3e, 0x6a, 0x53, 
	0xce, 0x24, 0x89, 0x76, 0x41, 0xf7, 0xd2, 0x3d, 
	0x28, 0x0d, 0x00, 0xac, 0x28, 0xc8, 0x8f, 0xfd, 
	0x10, 0xca, 0xf7, 0x1e, 0x45, 0xf8, 0xef, 0xa9, 
	0xed, 0x4d, 0x1c, 0xa7, 0x0b, 0x48, 0xac, 0xb6, 
	0xd4, 0x23, 0x4a, 0x5f, 0x43, 0x3c, 0x2b, 0x6a, 
	0x51, 0xf2, 0x4b, 0xc4, 0x51, 0x4c, 0xef, 0x9b, 
	0x18, 0xdd, 0xb7, 0x6e, 0xe9, 0x06, 0x8c, 0x15, 
	0x8e, 0xa9, 0x32, 0x05, 0xaa, 0x3a, 0x64, 0x58, 
	0xc6, 0x5f, 0x10, 0xba, 0xfb, 0x26, 0x49, 0x58, 
	0xd2, 0x4a, 0xd7, 0x6c, 0xab, 0x6b, 0x5c, 0x90, 
	0xad, 0xdc, 0x92, 0x42, 0x22, 0x95, 0xb0, 0xbe, 
	0xb0, 0xab, 0xe7, 0xd3, 0xd4, 0x4b, 0xd7, 0xe9, 
};//p_number

u8 const stats_submitter::q_number[crypto::xr_dsa::private_key_length] = {
	0xaa, 0x22, 0x5b, 0x49, 0xbd, 0x81, 0xc0, 0x05, 
	0x85, 0x94, 0xae, 0x4f, 0xfc, 0x06, 0xd7, 0x01, 
	0x4e, 0xdb, 0x4d, 0x67, 
};//q_number
u8 const stats_submitter::g_number[crypto::xr_dsa::public_key_length] = {
	0x21, 0x0f, 0x1d, 0xbf, 0x5e, 0x04, 0xae, 0x82, 
	0x7a, 0x57, 0xef, 0x73, 0xf3, 0x71, 0x1f, 0xc8, 
	0x52, 0x62, 0x09, 0x62, 0x19, 0x8a, 0xe1, 0xab, 
	0xbd, 0xc7, 0xbd, 0x99, 0xc0, 0x88, 0xff, 0x29, 
	0x2f, 0xa6, 0x60, 0x51, 0xde, 0xfe, 0x35, 0xfd, 
	0x6d, 0xd3, 0xc6, 0x87, 0x62, 0x78, 0xbe, 0x14, 
	0xfc, 0x78, 0x01, 0x1f, 0x03, 0x50, 0xaa, 0x1c, 
	0x15, 0x7f, 0xcb, 0xb7, 0x19, 0x34, 0x77, 0x37, 
	0x16, 0x59, 0x76, 0x9b, 0x4c, 0x3d, 0x40, 0x0a, 
	0x04, 0x8f, 0xa6, 0x7b, 0x8a, 0x8e, 0x22, 0xde, 
	0xd1, 0x13, 0x83, 0x38, 0xb8, 0x87, 0xe7, 0x3a, 
	0x60, 0x34, 0x47, 0x55, 0xde, 0xac, 0x34, 0x2e, 
	0xe1, 0x6e, 0x39, 0x56, 0xfc, 0xab, 0xce, 0x2c, 
	0xf2, 0xc6, 0x5b, 0x23, 0x31, 0xf5, 0x28, 0x18, 
	0x4e, 0x83, 0xeb, 0x09, 0x7a, 0xc2, 0x83, 0xd0, 
	0x8a, 0xf0, 0x3a, 0xc1, 0xbd, 0x69, 0x67, 0xfb, 
};//g_number

u8 const stats_submitter::public_key[crypto::xr_dsa::public_key_length] = {
	0x66, 0xe4, 0x18, 0x25, 0x1f, 0x19, 0x13, 0xae, 
	0x77, 0xb2, 0x09, 0x7e, 0x1c, 0xe8, 0xf8, 0xe9, 
	0xea, 0x1d, 0x5e, 0xce, 0x70, 0xd2, 0xe8, 0x2a, 
	0x92, 0x81, 0xf5, 0xce, 0x1a, 0x17, 0x80, 0x32, 
	0x06, 0x87, 0xbb, 0x4c, 0x9c, 0xed, 0x36, 0x84, 
	0xc2, 0x11, 0xb8, 0xc3, 0x7c, 0xa4, 0xbb, 0x97, 
	0xb9, 0x59, 0x9f, 0xcb, 0x68, 0x0a, 0x3f, 0x1c, 
	0xac, 0xb8, 0x65, 0x71, 0x13, 0x3e, 0xce, 0xb4, 
	0xb1, 0x2d, 0xf9, 0x08, 0x7a, 0xf0, 0x73, 0x98, 
	0x2c, 0xa0, 0xf1, 0x9b, 0xd3, 0x3d, 0x0b, 0xcc, 
	0x99, 0x7e, 0x82, 0x9d, 0x63, 0x81, 0xd5, 0x20, 
	0x3f, 0xe5, 0xd1, 0x02, 0x0d, 0x26, 0xb0, 0xd5, 
	0x44, 0x59, 0x9f, 0x2c, 0xd7, 0xce, 0x1c, 0x92, 
	0xd2, 0xe6, 0xbb, 0x52, 0x54, 0x15, 0xfd, 0xc6, 
	0x22, 0x02, 0xd2, 0xf1, 0x28, 0x89, 0xa9, 0x47, 
	0x4d, 0xc2, 0x79, 0x07, 0x5c, 0xb3, 0xd6, 0x2b, 
};//public_key	

} //namespace gamespy_profile