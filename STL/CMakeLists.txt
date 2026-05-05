cmake_minimum_required(VERSION 3.19)
project(STL)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(OUTPUT_DIR ${CMAKE_BINARY_DIR}/build_output)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/archive)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/library)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/runtime)

# 递归查找所有C和C++源文件
file(GLOB_RECURSE sources "*.c" "*.cpp")

foreach(source IN LISTS sources)
    # 提取无扩展名的文件名
    get_filename_component(exe_name ${source} NAME_WE)
    # 生成唯一目标名（避免路径冲突）
    string(REPLACE "/" "_" target_name ${exe_name})
    # 添加可执行目标
    add_executable(${target_name} ${source}  01_string.cpp)
    # 输出提示信息
    message("-- Building ${source} -> ${OUTPUT_DIR}/runtime/${target_name}")
endforeach()