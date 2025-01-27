//==============================================================================
// Copyright (c) 2015-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX12 GFX9 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX9
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX9

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX12Gfx9 Public counter index
#define GPUTIME_PUBLIC_DX12_GFX9 0
#define EXECUTIONDURATION_PUBLIC_DX12_GFX9 1
#define EXECUTIONSTART_PUBLIC_DX12_GFX9 2
#define EXECUTIONEND_PUBLIC_DX12_GFX9 3
#define GPUBUSY_PUBLIC_DX12_GFX9 4
#define GPUBUSYCYCLES_PUBLIC_DX12_GFX9 5
#define TESSELLATORBUSY_PUBLIC_DX12_GFX9 6
#define TESSELLATORBUSYCYCLES_PUBLIC_DX12_GFX9 7
#define VSGSBUSY_PUBLIC_DX12_GFX9 8
#define VSGSBUSYCYCLES_PUBLIC_DX12_GFX9 9
#define VSGSTIME_PUBLIC_DX12_GFX9 10
#define PRETESSELLATIONBUSY_PUBLIC_DX12_GFX9 11
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX9 12
#define PRETESSELLATIONTIME_PUBLIC_DX12_GFX9 13
#define POSTTESSELLATIONBUSY_PUBLIC_DX12_GFX9 14
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX9 15
#define POSTTESSELLATIONTIME_PUBLIC_DX12_GFX9 16
#define PSBUSY_PUBLIC_DX12_GFX9 17
#define PSBUSYCYCLES_PUBLIC_DX12_GFX9 18
#define PSTIME_PUBLIC_DX12_GFX9 19
#define CSBUSY_PUBLIC_DX12_GFX9 20
#define CSBUSYCYCLES_PUBLIC_DX12_GFX9 21
#define CSTIME_PUBLIC_DX12_GFX9 22
#define VSGSVALUINSTCOUNT_PUBLIC_DX12_GFX9 23
#define VSGSSALUINSTCOUNT_PUBLIC_DX12_GFX9 24
#define VSGSVALUBUSY_PUBLIC_DX12_GFX9 25
#define VSGSVALUBUSYCYCLES_PUBLIC_DX12_GFX9 26
#define VSGSSALUBUSY_PUBLIC_DX12_GFX9 27
#define VSGSSALUBUSYCYCLES_PUBLIC_DX12_GFX9 28
#define PRETESSVALUINSTCOUNT_PUBLIC_DX12_GFX9 29
#define PRETESSSALUINSTCOUNT_PUBLIC_DX12_GFX9 30
#define PRETESSVALUBUSY_PUBLIC_DX12_GFX9 31
#define PRETESSVALUBUSYCYCLES_PUBLIC_DX12_GFX9 32
#define PRETESSSALUBUSY_PUBLIC_DX12_GFX9 33
#define PRETESSSALUBUSYCYCLES_PUBLIC_DX12_GFX9 34
#define POSTTESSVALUINSTCOUNT_PUBLIC_DX12_GFX9 35
#define POSTTESSSALUINSTCOUNT_PUBLIC_DX12_GFX9 36
#define POSTTESSVALUBUSY_PUBLIC_DX12_GFX9 37
#define POSTTESSVALUBUSYCYCLES_PUBLIC_DX12_GFX9 38
#define POSTTESSSALUBUSY_PUBLIC_DX12_GFX9 39
#define POSTTESSSALUBUSYCYCLES_PUBLIC_DX12_GFX9 40
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX12_GFX9 41
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX12_GFX9 42
#define PRIMITIVESIN_PUBLIC_DX12_GFX9 43
#define CULLEDPRIMS_PUBLIC_DX12_GFX9 44
#define CLIPPEDPRIMS_PUBLIC_DX12_GFX9 45
#define PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX9 46
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX9 47
#define PSPIXELSOUT_PUBLIC_DX12_GFX9 48
#define PSEXPORTSTALLS_PUBLIC_DX12_GFX9 49
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX9 50
#define PSVALUINSTCOUNT_PUBLIC_DX12_GFX9 51
#define PSSALUINSTCOUNT_PUBLIC_DX12_GFX9 52
#define PSVALUBUSY_PUBLIC_DX12_GFX9 53
#define PSVALUBUSYCYCLES_PUBLIC_DX12_GFX9 54
#define PSSALUBUSY_PUBLIC_DX12_GFX9 55
#define PSSALUBUSYCYCLES_PUBLIC_DX12_GFX9 56
#define CSTHREADGROUPS_PUBLIC_DX12_GFX9 57
#define CSWAVEFRONTS_PUBLIC_DX12_GFX9 58
#define CSTHREADS_PUBLIC_DX12_GFX9 59
#define CSTHREADGROUPSIZE_PUBLIC_DX12_GFX9 60
#define CSVALUINSTS_PUBLIC_DX12_GFX9 61
#define CSVALUUTILIZATION_PUBLIC_DX12_GFX9 62
#define CSSALUINSTS_PUBLIC_DX12_GFX9 63
#define CSVFETCHINSTS_PUBLIC_DX12_GFX9 64
#define CSSFETCHINSTS_PUBLIC_DX12_GFX9 65
#define CSVWRITEINSTS_PUBLIC_DX12_GFX9 66
#define CSFLATVMEMINSTS_PUBLIC_DX12_GFX9 67
#define CSVALUBUSY_PUBLIC_DX12_GFX9 68
#define CSVALUBUSYCYCLES_PUBLIC_DX12_GFX9 69
#define CSSALUBUSY_PUBLIC_DX12_GFX9 70
#define CSSALUBUSYCYCLES_PUBLIC_DX12_GFX9 71
#define CSMEMUNITBUSY_PUBLIC_DX12_GFX9 72
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX12_GFX9 73
#define CSMEMUNITSTALLED_PUBLIC_DX12_GFX9 74
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX9 75
#define CSWRITEUNITSTALLED_PUBLIC_DX12_GFX9 76
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX9 77
#define CSGDSINSTS_PUBLIC_DX12_GFX9 78
#define CSLDSINSTS_PUBLIC_DX12_GFX9 79
#define CSFLATLDSINSTS_PUBLIC_DX12_GFX9 80
#define CSALUSTALLEDBYLDS_PUBLIC_DX12_GFX9 81
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX12_GFX9 82
#define CSLDSBANKCONFLICT_PUBLIC_DX12_GFX9 83
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX9 84
#define TEXUNITBUSY_PUBLIC_DX12_GFX9 85
#define TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX9 86
#define TEXTRIFILTERINGPCT_PUBLIC_DX12_GFX9 87
#define TEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX9 88
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX9 89
#define TEXVOLFILTERINGPCT_PUBLIC_DX12_GFX9 90
#define TEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX9 91
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX9 92
#define TEXAVEANISOTROPY_PUBLIC_DX12_GFX9 93
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX9 94
#define DEPTHSTENCILTESTBUSYCOUNT_PUBLIC_DX12_GFX9 95
#define HIZTILESACCEPTED_PUBLIC_DX12_GFX9 96
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX9 97
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX9 98
#define PREZTILESDETAILCULLED_PUBLIC_DX12_GFX9 99
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX9 100
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX9 101
#define HIZQUADSCULLED_PUBLIC_DX12_GFX9 102
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX9 103
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX9 104
#define PREZQUADSCULLED_PUBLIC_DX12_GFX9 105
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX9 106
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX12_GFX9 107
#define POSTZQUADS_PUBLIC_DX12_GFX9 108
#define POSTZQUADCOUNT_PUBLIC_DX12_GFX9 109
#define PREZSAMPLESPASSING_PUBLIC_DX12_GFX9 110
#define PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX9 111
#define PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX9 112
#define POSTZSAMPLESPASSING_PUBLIC_DX12_GFX9 113
#define POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX9 114
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX9 115
#define ZUNITSTALLED_PUBLIC_DX12_GFX9 116
#define ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX9 117
#define DBMEMREAD_PUBLIC_DX12_GFX9 118
#define DBMEMWRITTEN_PUBLIC_DX12_GFX9 119
#define CBMEMREAD_PUBLIC_DX12_GFX9 120
#define CBCOLORANDMASKREAD_PUBLIC_DX12_GFX9 121
#define CBMEMWRITTEN_PUBLIC_DX12_GFX9 122
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX9 123
#define CBSLOWPIXELPCT_PUBLIC_DX12_GFX9 124
#define CBSLOWPIXELCOUNT_PUBLIC_DX12_GFX9 125
#define FETCHSIZE_PUBLIC_DX12_GFX9 126
#define WRITESIZE_PUBLIC_DX12_GFX9 127
#define L1CACHEHIT_PUBLIC_DX12_GFX9 128
#define L1CACHEHITCOUNT_PUBLIC_DX12_GFX9 129
#define L1CACHEMISSCOUNT_PUBLIC_DX12_GFX9 130
#define L2CACHEHIT_PUBLIC_DX12_GFX9 131
#define L2CACHEMISS_PUBLIC_DX12_GFX9 132
#define L2CACHEHITCOUNT_PUBLIC_DX12_GFX9 133
#define L2CACHEMISSCOUNT_PUBLIC_DX12_GFX9 134
#define MEMUNITBUSY_PUBLIC_DX12_GFX9 135
#define MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX9 136
#define MEMUNITSTALLED_PUBLIC_DX12_GFX9 137
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX9 138
#define WRITEUNITSTALLED_PUBLIC_DX12_GFX9 139
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX9 140
#define LOCALVIDMEMBYTES_PUBLIC_DX12_GFX9 141
#define PCIEBYTES_PUBLIC_DX12_GFX9 142

/// Number of public counters for DX12 GFX9 
const size_t kDx12Gfx9PublicCounterCount = 143;

/// Array of public counters for DX12 GFX9 
extern const GpaCounterDesc kDx12Gfx9PublicCounters[kDx12Gfx9PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX9
