## Copyright (c) 2018-2020 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

set(DEPTH "../../")

set(GPA_PROJECT_NAME GPUPerfAPICounterGenerator-DX12)
set(ProjectName ${GPA_PROJECT_NAME})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(${GPA_CMAKE_MODULES_DIR}/Common.cmake)
include(${CMAKE_COMMON_SRC_GLOBAL_AMD_DX_EXT})

set(COUNTER_GENERATOR_HEADERS_DX12
    gpa_counter_generator_dx12.h
    gpa_counter_generator_dx12_base.h
    gpa_counter_generator_dx12_non_amd.h)

set(COUNTER_GENERATOR_SRC_DX12
    gpa_counter_generator_dx12.cc
    gpa_counter_generator_dx12_base.cc
    gpa_counter_generator_dx12_non_amd.cc)

set(COUNTER_SCHEDULER_HEADERS_DX12
    gpa_counter_scheduler_dx12.h)

set(COUNTER_SCHEDULER_SRC_DX12
    gpa_counter_scheduler_dx12.cc)

if(EXISTS ${GPA_AUTOGEN_SRC_COUNTER_GENERATOR})
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/gpa_hw_counter_dx12.cmake)
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/public_counter_definitions_dx12.cmake)

    set(API_HEADER_FILES ${HW_COUNTER_HEADERS_DX12} ${PUBLIC_COUNTER_DEF_HEADERS_DX12} ${ADDITIONAL_COUNTER_DEF_HEADERS_DX12})
    set(API_SOURCE_FILES ${HW_COUNTER_SRC_DX12} ${PUBLIC_COUNTER_DEF_SRC_DX12} ${ADDITIONAL_COUNTER_DEF_SRC_DX12})

    if(WIN32)
        source_group("Source Files\\${HARDWARE_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${HW_COUNTER_HEADERS_DX12} ${HW_COUNTER_SRC_DX12})
        source_group("Source Files\\${DERIVED_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${PUBLIC_COUNTER_DEF_HEADERS_DX12}
                                                                                       ${ADDITIONAL_COUNTER_DEF_HEADERS_DX12}
                                                                                       ${PUBLIC_COUNTER_DEF_SRC_DX12}
                                                                                       ${ADDITIONAL_COUNTER_DEF_SRC_DX12})
    endif()
endif()

set(SOURCES ${COUNTER_GENERATOR_HEADERS_DX12}
            ${COUNTER_GENERATOR_SRC_DX12}
            ${COUNTER_SCHEDULER_HEADERS_DX12}
            ${COUNTER_SCHEDULER_SRC_DX12}
            ${API_HEADER_FILES}
            ${API_SOURCE_FILES}
            ${ADDITIONAL_COUNTERS_DX12})

if(WIN32)
    add_compile_options(/bigobj)
 else()
     add_compile_options(-Wno-write-strings)
 endif()

ADD_STATIC_LIBRARY(${GPA_PROJECT_NAME} ${SOURCES})
ADD_LINKER_FLAGS()
target_link_libraries(${GPA_PROJECT_NAME} GPUPerfAPICounterGenerator-Common)
target_include_directories(${GPA_PROJECT_NAME} PUBLIC ${ADDITIONAL_INCLUDE_DIRECTORIES})

if(WIN32)
        source_group("Source Files\\${COUNTER_GENERATOR_VS_FILTER}" FILES ${COUNTER_GENERATOR_HEADERS_DX12} ${COUNTER_GENERATOR_SRC_DX12})
        source_group("Source Files\\${COUNTER_SCHEDULER_VS_FILTER}" FILES ${COUNTER_SCHEDULER_HEADERS_DX12} ${COUNTER_SCHEDULER_SRC_DX12})
endif()

