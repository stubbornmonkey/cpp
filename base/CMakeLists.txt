cmake_minimum_required(VERSION 3.19)
project(base)

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
    add_executable(${target_name} ${source} 01_HelloWord.cpp 02_Identifier.cpp 03_DataType.cpp 04_ConstAndVar.cpp 05_Define.cpp 06_CharAndString.cpp 07_ChangeChar.cpp 08_ChangeDataType.cpp 09_Input.cpp 10_MacroDefinition.cpp 11_NameSpace.cpp 12_Operater.cpp 13_DefineFunction.cpp 14_FunctionOrder.cpp 15_ParamFunction.cpp 16_FunctionReturnValue.cpp 17_FunctionParamaDefaultValue.cpp 18_FunctionOverload.cpp 19_FunctionRecursion.cpp 20_UseOtherFileFunction.cpp 20_CtyMath.cpp 20_CtyMath.h 21_TestDifferentMemoryRegion.cpp 22_MemoryResidue.cpp 23_RadicallyUsePointer.cpp 24_NullPointerAndWildPointer.cpp 25_ConstPointerAndPointerConst.cpp)
    # 输出提示信息
    message("-- Building ${source} -> ${OUTPUT_DIR}/runtime/${target_name}")
endforeach()