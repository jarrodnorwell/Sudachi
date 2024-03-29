// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstdint>
#include <map>
#include <vector>

namespace NxTzdb {

// clang-format off
const static std::map<const char*, const std::vector<uint8_t>> antarctica = 
{
{"Casey",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1e, 0xcc, 0x80, 0x00, 0x00, 0x00, 0x00, 0x4a,
0xda, 0x06, 0x20, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x8f, 0xca, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x4e, 0xa9, 0x9c, 0x20,
0x00, 0x00, 0x00, 0x00, 0x4f, 0x43, 0xcd, 0x90, 0x00, 0x00, 0x00, 0x00, 0x58, 0x0a, 0x3b, 0x80, 0x00, 0x00, 0x00,
0x00, 0x5a, 0xa4, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x5b, 0xb9, 0x14, 0x40, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x8d,
0x1d, 0x80, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x96, 0x45, 0x30, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x63, 0xc5, 0x00, 0x00,
0x00, 0x00, 0x00, 0x5f, 0x78, 0xa0, 0x3c, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x80, 0x00, 0x04, 0x00, 0x00, 0x9a, 0xb0, 0x00, 0x08, 0x2d,
0x30, 0x30, 0x00, 0x2b, 0x30, 0x38, 0x00, 0x2b, 0x31, 0x31, 0x00, 0x0a, 0x3c, 0x2b, 0x31, 0x31, 0x3e, 0x2d, 0x31,
0x31, 0x0a, }},
{"Davis",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x9c, 0x40, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf6,
0x47, 0xdf, 0x10, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x47, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0xda, 0x14, 0x30,
0x00, 0x00, 0x00, 0x00, 0x4b, 0x97, 0xfa, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4e, 0xa9, 0xaa, 0x30, 0x00, 0x00, 0x00,
0x00, 0x4f, 0x43, 0xf7, 0xc0, 0x01, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x62, 0x70, 0x00, 0x04, 0x00, 0x00, 0x46, 0x50, 0x00, 0x08, 0x2d, 0x30, 0x30, 0x00, 0x2b, 0x30, 0x37, 0x00,
0x2b, 0x30, 0x35, 0x00, 0x0a, 0x3c, 0x2b, 0x30, 0x37, 0x3e, 0x2d, 0x37, 0x0a, }},
{"DumontDUrville",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xff, 0x56, 0xb6, 0x5a, 0x08, 0xff, 0xff, 0xff, 0xff, 0x72,
0xed, 0xa4, 0x90, 0x01, 0x02, 0x00, 0x00, 0x89, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x89, 0xf0, 0x00, 0x04, 0x00, 0x00,
0x8c, 0xa0, 0x00, 0x09, 0x4c, 0x4d, 0x54, 0x00, 0x50, 0x4d, 0x4d, 0x54, 0x00, 0x2b, 0x31, 0x30, 0x00, 0x0a, 0x3c,
0x2b, 0x31, 0x30, 0x3e, 0x2d, 0x31, 0x30, 0x0a, }},
{"Macquarie",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0xff, 0x7c, 0x05, 0x16, 0x00, 0xff, 0xff, 0xff, 0xff, 0x9b,
0xd5, 0x78, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9c, 0xbc, 0x2f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x87, 0xb4, 0x60,
0xff, 0xff, 0xff, 0xff, 0xd7, 0x0c, 0x68, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xc2, 0x8d, 0x00, 0xff, 0xff, 0xff,
0xff, 0xfc, 0xb2, 0x7e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc7, 0x59, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x76,
0xb0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x92, 0x80, 0x00,
0x00, 0x00, 0x00, 0x01, 0x87, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x3f, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x70, 0x39, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0d, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x50, 0x1b,
0x80, 0x00, 0x00, 0x00, 0x00, 0x05, 0xf6, 0x38, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x2f, 0xfd, 0x80, 0x00, 0x00,
0x00, 0x00, 0x07, 0xd6, 0x1a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0f, 0xdf, 0x80, 0x00, 0x00, 0x00, 0x00, 0x09,
0xb5, 0xfc, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xef, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x9f, 0x19, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0c, 0xd8, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x7e, 0xfb, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0e, 0xb8, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x5e, 0xdd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x98,
0xa2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x3e, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x78, 0x84, 0x00, 0x00,
0x00, 0x00, 0x00, 0x13, 0x1e, 0xa1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x58, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
0x14, 0xfe, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x38, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x03, 0x4f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x21, 0x64, 0x80, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe3, 0x31, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1a, 0x01, 0x46, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xa7, 0x63, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1b,
0xe1, 0x28, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x87, 0x45, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xc1, 0x0a, 0x80,
0x00, 0x00, 0x00, 0x00, 0x1e, 0x67, 0x27, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x97, 0xb2, 0x00, 0x00, 0x00, 0x00,
0x00, 0x20, 0x59, 0x7e, 0x80, 0x00, 0x00, 0x00, 0x00, 0x21, 0x80, 0xce, 0x80, 0x00, 0x00, 0x00, 0x00, 0x22, 0x42,
0x9b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x69, 0xeb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x22, 0x7d, 0x00, 0x00,
0x00, 0x00, 0x00, 0x25, 0x49, 0xcd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x02, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x27, 0x29, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0xf4, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xed, 0xe1,
0x80, 0x00, 0x00, 0x00, 0x00, 0x29, 0xd4, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xcd, 0xc3, 0x80, 0x00, 0x00,
0x00, 0x00, 0x2b, 0xb4, 0x7a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xad, 0xa5, 0x80, 0x00, 0x00, 0x00, 0x00, 0x2d,
0x94, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x8d, 0x87, 0x80, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x74, 0x3e, 0x00,
0x00, 0x00, 0x00, 0x00, 0x30, 0x6d, 0x69, 0x80, 0x00, 0x00, 0x00, 0x00, 0x31, 0x5d, 0x5a, 0x80, 0x00, 0x00, 0x00,
0x00, 0x32, 0x56, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x3d, 0x3c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x34, 0x36,
0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x1d, 0x1e, 0x80, 0x00, 0x00, 0x00, 0x00, 0x36, 0x16, 0x4a, 0x00, 0x00,
0x00, 0x00, 0x00, 0x36, 0xfd, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x37, 0xf6, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0xdc, 0xe2, 0x80, 0x00, 0x00, 0x00, 0x00, 0x39, 0xa7, 0xe9, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3a, 0xbc, 0xc4,
0x80, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xbf, 0x2a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xa5, 0xe1, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3d, 0x9f, 0x0c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x85, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
0x7e, 0xee, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0x65, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x5e, 0xd0, 0x80,
0x00, 0x00, 0x00, 0x00, 0x42, 0x45, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x3e, 0xb2, 0x80, 0x00, 0x00, 0x00,
0x00, 0x44, 0x2e, 0xa3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x45, 0x1e, 0x94, 0x80, 0x00, 0x00, 0x00, 0x00, 0x46, 0x05,
0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x07, 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0xf7, 0xa2, 0x00, 0x00,
0x00, 0x00, 0x00, 0x48, 0xe7, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xd7, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
0x4a, 0xc7, 0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x97, 0x48, 0x00, 0x01, 0x02, 0x01, 0x00, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0xa0, 0x00,
0x04, 0x00, 0x00, 0x9a, 0xb0, 0x01, 0x09, 0x2d, 0x30, 0x30, 0x00, 0x41, 0x45, 0x53, 0x54, 0x00, 0x41, 0x45, 0x44,
0x54, 0x00, 0x0a, 0x41, 0x45, 0x53, 0x54, 0x2d, 0x31, 0x30, 0x41, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x31, 0x30, 0x2e,
0x31, 0x2e, 0x30, 0x2c, 0x4d, 0x34, 0x2e, 0x31, 0x2e, 0x30, 0x2f, 0x33, 0x0a, }},
{"Mawson",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x20, 0x32, 0x80, 0x00, 0x00, 0x00, 0x00, 0x4a,
0xda, 0x22, 0x40, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x60, 0x00, 0x04, 0x00, 0x00,
0x46, 0x50, 0x00, 0x08, 0x2d, 0x30, 0x30, 0x00, 0x2b, 0x30, 0x36, 0x00, 0x2b, 0x30, 0x35, 0x00, 0x0a, 0x3c, 0x2b,
0x30, 0x35, 0x3e, 0x2d, 0x35, 0x0a, }},
{"McMurdo",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x13, 0xff, 0xff, 0xff, 0xff, 0x41, 0xb7, 0x4c, 0xa8, 0xff, 0xff, 0xff, 0xff, 0xb0,
0xb4, 0xb2, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x51, 0x87, 0x58, 0xff, 0xff, 0xff, 0xff, 0xb2, 0x78, 0xe5, 0x68,
0xff, 0xff, 0xff, 0xff, 0xb3, 0x43, 0xe5, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb4, 0x58, 0xc7, 0x68, 0xff, 0xff, 0xff,
0xff, 0xb5, 0x23, 0xc7, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x38, 0xa9, 0x68, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x03,
0xa9, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb8, 0x18, 0x8b, 0x68, 0xff, 0xff, 0xff, 0xff, 0xb8, 0xec, 0xc5, 0xe0, 0xff,
0xff, 0xff, 0xff, 0xb9, 0xf8, 0x6d, 0x68, 0xff, 0xff, 0xff, 0xff, 0xba, 0xcc, 0xa7, 0xe0, 0xff, 0xff, 0xff, 0xff,
0xbb, 0xd8, 0x4f, 0x68, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xe3, 0xe8, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xae, 0xf6,
0xe8, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xc3, 0xca, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x8e, 0xd8, 0xe8, 0xff, 0xff,
0xff, 0xff, 0xc0, 0xa3, 0xac, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x6e, 0xba, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc2,
0x83, 0x8e, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x4e, 0x9c, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x63, 0x70, 0xe0,
0xff, 0xff, 0xff, 0xff, 0xc5, 0x2e, 0x7e, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x4c, 0x8d, 0x60, 0xff, 0xff, 0xff,
0xff, 0xc7, 0x0e, 0x60, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x2c, 0x6f, 0x60, 0xff, 0xff, 0xff, 0xff, 0xc8, 0xf7,
0x7d, 0x68, 0xff, 0xff, 0xff, 0xff, 0xd2, 0xda, 0x9a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x09, 0x18, 0xfd, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x09, 0xac, 0xa5, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xef, 0xa5, 0x60, 0x00, 0x00, 0x00, 0x00,
0x0b, 0x9e, 0xfc, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xd8, 0xc1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x7e, 0xde,
0xe0, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xb8, 0xa3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x5e, 0xc0, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x10, 0x98, 0x85, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x3e, 0xa2, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x12,
0x78, 0x67, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x13, 0x1e, 0x84, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x14, 0x58, 0x49, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x14, 0xfe, 0x66, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x16, 0x38, 0x2b, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x16, 0xe7, 0x83, 0x60, 0x00, 0x00, 0x00, 0x00, 0x18, 0x21, 0x48, 0x60, 0x00, 0x00, 0x00, 0x00, 0x18, 0xc7,
0x65, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x01, 0x2a, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xa7, 0x47, 0x60, 0x00,
0x00, 0x00, 0x00, 0x1b, 0xe1, 0x0c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x87, 0x29, 0x60, 0x00, 0x00, 0x00, 0x00,
0x1d, 0xc0, 0xee, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x67, 0x0b, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xa0, 0xd0,
0x60, 0x00, 0x00, 0x00, 0x00, 0x20, 0x46, 0xed, 0x60, 0x00, 0x00, 0x00, 0x00, 0x21, 0x80, 0xb2, 0x60, 0x00, 0x00,
0x00, 0x00, 0x22, 0x30, 0x09, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x23, 0x69, 0xce, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x24,
0x0f, 0xeb, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x25, 0x2e, 0x01, 0x60, 0x00, 0x00, 0x00, 0x00, 0x26, 0x02, 0x42, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x27, 0x0d, 0xe3, 0x60, 0x00, 0x00, 0x00, 0x00, 0x27, 0xe2, 0x24, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x28, 0xed, 0xc5, 0x60, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc2, 0x06, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xcd,
0xa7, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xab, 0x23, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xad, 0x89, 0x60, 0x00,
0x00, 0x00, 0x00, 0x2d, 0x8b, 0x05, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x8d, 0x6b, 0x60, 0x00, 0x00, 0x00, 0x00,
0x2f, 0x6a, 0xe7, 0x60, 0x00, 0x00, 0x00, 0x00, 0x30, 0x6d, 0x4d, 0x60, 0x00, 0x00, 0x00, 0x00, 0x31, 0x4a, 0xc9,
0x60, 0x00, 0x00, 0x00, 0x00, 0x32, 0x56, 0x69, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x33, 0x2a, 0xab, 0x60, 0x00, 0x00,
0x00, 0x00, 0x34, 0x36, 0x4b, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x35, 0x0a, 0x8d, 0x60, 0x00, 0x00, 0x00, 0x00, 0x36,
0x16, 0x2d, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x36, 0xf3, 0xa9, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x37, 0xf6, 0x0f, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x38, 0xd3, 0x8b, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x39, 0xd5, 0xf1, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x3a, 0xb3, 0x6d, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xbf, 0x0e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x93,
0x4f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x9e, 0xf0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x73, 0x31, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x3f, 0x7e, 0xd2, 0x60, 0x00, 0x00, 0x00, 0x00, 0x40, 0x5c, 0x4e, 0x60, 0x00, 0x00, 0x00, 0x00,
0x41, 0x5e, 0xb4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x42, 0x3c, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x43, 0x3e, 0x96,
0x60, 0x00, 0x00, 0x00, 0x00, 0x44, 0x1c, 0x12, 0x60, 0x00, 0x00, 0x00, 0x00, 0x45, 0x1e, 0x78, 0x60, 0x00, 0x00,
0x00, 0x00, 0x45, 0xfb, 0xf4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x46, 0xfe, 0x5a, 0x60, 0x02, 0x01, 0x02, 0x03, 0x02,
0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
0x02, 0x03, 0x02, 0x03, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04,
0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x00, 0x00, 0xa3, 0xd8,
0x00, 0x00, 0x00, 0x00, 0xaf, 0xc8, 0x01, 0x04, 0x00, 0x00, 0xa1, 0xb8, 0x00, 0x09, 0x00, 0x00, 0xa8, 0xc0, 0x01,
0x04, 0x00, 0x00, 0xb6, 0xd0, 0x01, 0x0e, 0x00, 0x00, 0xa8, 0xc0, 0x00, 0x04, 0x4c, 0x4d, 0x54, 0x00, 0x4e, 0x5a,
0x53, 0x54, 0x00, 0x4e, 0x5a, 0x4d, 0x54, 0x00, 0x4e, 0x5a, 0x44, 0x54, 0x00, 0x0a, 0x4e, 0x5a, 0x53, 0x54, 0x2d,
0x31, 0x32, 0x4e, 0x5a, 0x44, 0x54, 0x2c, 0x4d, 0x39, 0x2e, 0x35, 0x2e, 0x30, 0x2c, 0x4d, 0x34, 0x2e, 0x31, 0x2e,
0x30, 0x2f, 0x33, 0x0a, }},
{"Palmer",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00,
0x00, 0x05, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x98, 0xad, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf6,
0xe6, 0x9f, 0xb0, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x13, 0x43, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc7, 0xd3, 0x30,
0xff, 0xff, 0xff, 0xff, 0xf9, 0xf4, 0x77, 0x40, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xd3, 0x36, 0xb0, 0xff, 0xff, 0xff,
0xff, 0xfb, 0xc3, 0x35, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbc, 0x53, 0x30, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xac,
0x52, 0x40, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x9c, 0x35, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8c, 0x34, 0x40, 0x00,
0x00, 0x00, 0x00, 0x07, 0xa3, 0x4a, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x24, 0x6f, 0xa0, 0x00, 0x00, 0x00, 0x00,
0x17, 0x30, 0xbc, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x06, 0x5d, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0xd1, 0x56,
0xb0, 0x00, 0x00, 0x00, 0x00, 0x19, 0xe6, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xb1, 0x38, 0xb0, 0x00, 0x00,
0x00, 0x00, 0x1b, 0xcf, 0x5c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x91, 0x1a, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1d,
0xaf, 0x3e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x70, 0xfc, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x8f, 0x20, 0x40,
0x00, 0x00, 0x00, 0x00, 0x20, 0x7f, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x21, 0x6f, 0x02, 0x40, 0x00, 0x00, 0x00,
0x00, 0x22, 0x39, 0xfb, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0x4e, 0xe4, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x19,
0xdd, 0x30, 0x00, 0x00, 0x00, 0x00, 0x25, 0x38, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x25, 0xf9, 0xbf, 0x30, 0x00,
0x00, 0x00, 0x00, 0x26, 0xf2, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x27, 0xd9, 0xa1, 0x30, 0x00, 0x00, 0x00, 0x00,
0x28, 0xf7, 0xc4, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc2, 0xbd, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xd7, 0xa6,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xa2, 0x9f, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xb7, 0x88, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x2d, 0x82, 0x81, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x97, 0x6a, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2f,
0x62, 0x63, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x30, 0x80, 0x87, 0x40, 0x00, 0x00, 0x00, 0x00, 0x31, 0x42, 0x45, 0xb0,
0x00, 0x00, 0x00, 0x00, 0x32, 0x60, 0x69, 0x40, 0x00, 0x00, 0x00, 0x00, 0x33, 0x3d, 0xd7, 0x30, 0x00, 0x00, 0x00,
0x00, 0x34, 0x40, 0x4b, 0x40, 0x00, 0x00, 0x00, 0x00, 0x35, 0x0b, 0x44, 0x30, 0x00, 0x00, 0x00, 0x00, 0x36, 0x0d,
0xb8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x37, 0x06, 0xd5, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x0f, 0x40, 0x00,
0x00, 0x00, 0x00, 0x38, 0xcb, 0x08, 0x30, 0x00, 0x00, 0x00, 0x00, 0x39, 0xe9, 0x2b, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x3a, 0xaa, 0xea, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xc9, 0x0d, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x8a, 0xcc,
0x30, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xa8, 0xef, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x6a, 0xae, 0x30, 0x00, 0x00,
0x00, 0x00, 0x3f, 0x88, 0xd1, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x53, 0xca, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x41,
0x68, 0xb3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x42, 0x33, 0xac, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x95, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x44, 0x13, 0x8e, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x45, 0x31, 0xb2, 0x40, 0x00, 0x00, 0x00,
0x00, 0x45, 0xf3, 0x70, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x47, 0x11, 0x94, 0x40, 0x00, 0x00, 0x00, 0x00, 0x47, 0xef,
0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x48, 0xf1, 0x76, 0x40, 0x00, 0x00, 0x00, 0x00, 0x49, 0xbc, 0x6f, 0x30, 0x00,
0x00, 0x00, 0x00, 0x4a, 0xd1, 0x58, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4b, 0xb8, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00,
0x4c, 0xb1, 0x3a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4d, 0xc6, 0x07, 0x30, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x50, 0x82,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x9c, 0xae, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x50, 0x42, 0xd9, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x51, 0x7c, 0x90, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x52, 0x2b, 0xf6, 0x40, 0x00, 0x00, 0x00, 0x00, 0x53,
0x5c, 0x72, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x54, 0x0b, 0xd8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x57, 0x37, 0xe6, 0x30,
0x00, 0x00, 0x00, 0x00, 0x57, 0xaf, 0xec, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x58, 0x43, 0x86, 0xb0, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x04, 0x03, 0x04, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc7, 0xc0, 0x00, 0x04, 0xff, 0xff, 0xd5, 0xd0,
0x01, 0x08, 0xff, 0xff, 0xe3, 0xe0, 0x01, 0x0c, 0xff, 0xff, 0xd5, 0xd0, 0x00, 0x08, 0x2d, 0x30, 0x30, 0x00, 0x2d,
0x30, 0x34, 0x00, 0x2d, 0x30, 0x33, 0x00, 0x2d, 0x30, 0x32, 0x00, 0x0a, 0x3c, 0x2d, 0x30, 0x33, 0x3e, 0x33, 0x0a,
}},
{"Rothera",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x02, 0x2d, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xd5, 0xd0, 0x00, 0x04, 0x2d, 0x30, 0x30, 0x00, 0x2d, 0x30, 0x33, 0x00, 0x0a, 0x3c, 0x2d,
0x30, 0x33, 0x3e, 0x33, 0x0a, }},
{"South_Pole",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x13, 0xff, 0xff, 0xff, 0xff, 0x41, 0xb7, 0x4c, 0xa8, 0xff, 0xff, 0xff, 0xff, 0xb0,
0xb4, 0xb2, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x51, 0x87, 0x58, 0xff, 0xff, 0xff, 0xff, 0xb2, 0x78, 0xe5, 0x68,
0xff, 0xff, 0xff, 0xff, 0xb3, 0x43, 0xe5, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb4, 0x58, 0xc7, 0x68, 0xff, 0xff, 0xff,
0xff, 0xb5, 0x23, 0xc7, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x38, 0xa9, 0x68, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x03,
0xa9, 0x60, 0xff, 0xff, 0xff, 0xff, 0xb8, 0x18, 0x8b, 0x68, 0xff, 0xff, 0xff, 0xff, 0xb8, 0xec, 0xc5, 0xe0, 0xff,
0xff, 0xff, 0xff, 0xb9, 0xf8, 0x6d, 0x68, 0xff, 0xff, 0xff, 0xff, 0xba, 0xcc, 0xa7, 0xe0, 0xff, 0xff, 0xff, 0xff,
0xbb, 0xd8, 0x4f, 0x68, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xe3, 0xe8, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xae, 0xf6,
0xe8, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xc3, 0xca, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x8e, 0xd8, 0xe8, 0xff, 0xff,
0xff, 0xff, 0xc0, 0xa3, 0xac, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x6e, 0xba, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc2,
0x83, 0x8e, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x4e, 0x9c, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x63, 0x70, 0xe0,
0xff, 0xff, 0xff, 0xff, 0xc5, 0x2e, 0x7e, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x4c, 0x8d, 0x60, 0xff, 0xff, 0xff,
0xff, 0xc7, 0x0e, 0x60, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x2c, 0x6f, 0x60, 0xff, 0xff, 0xff, 0xff, 0xc8, 0xf7,
0x7d, 0x68, 0xff, 0xff, 0xff, 0xff, 0xd2, 0xda, 0x9a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x09, 0x18, 0xfd, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x09, 0xac, 0xa5, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xef, 0xa5, 0x60, 0x00, 0x00, 0x00, 0x00,
0x0b, 0x9e, 0xfc, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xd8, 0xc1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x7e, 0xde,
0xe0, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xb8, 0xa3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x5e, 0xc0, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x10, 0x98, 0x85, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x3e, 0xa2, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x12,
0x78, 0x67, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x13, 0x1e, 0x84, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x14, 0x58, 0x49, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x14, 0xfe, 0x66, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x16, 0x38, 0x2b, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x16, 0xe7, 0x83, 0x60, 0x00, 0x00, 0x00, 0x00, 0x18, 0x21, 0x48, 0x60, 0x00, 0x00, 0x00, 0x00, 0x18, 0xc7,
0x65, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x01, 0x2a, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xa7, 0x47, 0x60, 0x00,
0x00, 0x00, 0x00, 0x1b, 0xe1, 0x0c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x87, 0x29, 0x60, 0x00, 0x00, 0x00, 0x00,
0x1d, 0xc0, 0xee, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x67, 0x0b, 0x60, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xa0, 0xd0,
0x60, 0x00, 0x00, 0x00, 0x00, 0x20, 0x46, 0xed, 0x60, 0x00, 0x00, 0x00, 0x00, 0x21, 0x80, 0xb2, 0x60, 0x00, 0x00,
0x00, 0x00, 0x22, 0x30, 0x09, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x23, 0x69, 0xce, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x24,
0x0f, 0xeb, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x25, 0x2e, 0x01, 0x60, 0x00, 0x00, 0x00, 0x00, 0x26, 0x02, 0x42, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x27, 0x0d, 0xe3, 0x60, 0x00, 0x00, 0x00, 0x00, 0x27, 0xe2, 0x24, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x28, 0xed, 0xc5, 0x60, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc2, 0x06, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xcd,
0xa7, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xab, 0x23, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xad, 0x89, 0x60, 0x00,
0x00, 0x00, 0x00, 0x2d, 0x8b, 0x05, 0x60, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x8d, 0x6b, 0x60, 0x00, 0x00, 0x00, 0x00,
0x2f, 0x6a, 0xe7, 0x60, 0x00, 0x00, 0x00, 0x00, 0x30, 0x6d, 0x4d, 0x60, 0x00, 0x00, 0x00, 0x00, 0x31, 0x4a, 0xc9,
0x60, 0x00, 0x00, 0x00, 0x00, 0x32, 0x56, 0x69, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x33, 0x2a, 0xab, 0x60, 0x00, 0x00,
0x00, 0x00, 0x34, 0x36, 0x4b, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x35, 0x0a, 0x8d, 0x60, 0x00, 0x00, 0x00, 0x00, 0x36,
0x16, 0x2d, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x36, 0xf3, 0xa9, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x37, 0xf6, 0x0f, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x38, 0xd3, 0x8b, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x39, 0xd5, 0xf1, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x3a, 0xb3, 0x6d, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xbf, 0x0e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x93,
0x4f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x9e, 0xf0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x73, 0x31, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x3f, 0x7e, 0xd2, 0x60, 0x00, 0x00, 0x00, 0x00, 0x40, 0x5c, 0x4e, 0x60, 0x00, 0x00, 0x00, 0x00,
0x41, 0x5e, 0xb4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x42, 0x3c, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x43, 0x3e, 0x96,
0x60, 0x00, 0x00, 0x00, 0x00, 0x44, 0x1c, 0x12, 0x60, 0x00, 0x00, 0x00, 0x00, 0x45, 0x1e, 0x78, 0x60, 0x00, 0x00,
0x00, 0x00, 0x45, 0xfb, 0xf4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x46, 0xfe, 0x5a, 0x60, 0x02, 0x01, 0x02, 0x03, 0x02,
0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
0x02, 0x03, 0x02, 0x03, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04,
0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x00, 0x00, 0xa3, 0xd8,
0x00, 0x00, 0x00, 0x00, 0xaf, 0xc8, 0x01, 0x04, 0x00, 0x00, 0xa1, 0xb8, 0x00, 0x09, 0x00, 0x00, 0xa8, 0xc0, 0x01,
0x04, 0x00, 0x00, 0xb6, 0xd0, 0x01, 0x0e, 0x00, 0x00, 0xa8, 0xc0, 0x00, 0x04, 0x4c, 0x4d, 0x54, 0x00, 0x4e, 0x5a,
0x53, 0x54, 0x00, 0x4e, 0x5a, 0x4d, 0x54, 0x00, 0x4e, 0x5a, 0x44, 0x54, 0x00, 0x0a, 0x4e, 0x5a, 0x53, 0x54, 0x2d,
0x31, 0x32, 0x4e, 0x5a, 0x44, 0x54, 0x2c, 0x4d, 0x39, 0x2e, 0x35, 0x2e, 0x30, 0x2c, 0x4d, 0x34, 0x2e, 0x31, 0x2e,
0x30, 0x2f, 0x33, 0x0a, }},
{"Syowa",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x1b, 0x36, 0xb4, 0x01, 0x00, 0x00, 0x2b, 0xcc,
0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x00, 0x04, 0x4c, 0x4d, 0x54, 0x00, 0x2b, 0x30, 0x33, 0x00, 0x0a, 0x3c, 0x2b,
0x30, 0x33, 0x3e, 0x2d, 0x33, 0x0a, }},
{"Troll",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0d, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42,
0x46, 0x05, 0x90, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x20, 0x01, 0x04, 0x00, 0x00,
0x00, 0x00, 0x00, 0x08, 0x2d, 0x30, 0x30, 0x00, 0x2b, 0x30, 0x32, 0x00, 0x2b, 0x30, 0x30, 0x00, 0x0a, 0x3c, 0x2b,
0x30, 0x30, 0x3e, 0x30, 0x3c, 0x2b, 0x30, 0x32, 0x3e, 0x2d, 0x32, 0x2c, 0x4d, 0x33, 0x2e, 0x35, 0x2e, 0x30, 0x2f,
0x31, 0x2c, 0x4d, 0x31, 0x30, 0x2e, 0x35, 0x2e, 0x30, 0x2f, 0x33, 0x0a, }},
{"Vostok",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0xff, 0xff, 0xb0, 0xfe, 0xba, 0x64, 0x01, 0x00, 0x00, 0x52, 0x1c,
0x00, 0x00, 0x00, 0x00, 0x54, 0x60, 0x00, 0x04, 0x4c, 0x4d, 0x54, 0x00, 0x2b, 0x30, 0x36, 0x00, 0x0a, 0x3c, 0x2b,
0x30, 0x36, 0x3e, 0x2d, 0x36, 0x0a, }},
};
// clang-format on

} // namespace NxTzdb
