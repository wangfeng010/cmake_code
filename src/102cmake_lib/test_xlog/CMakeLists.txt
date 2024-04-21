cmake_minimum_required(VERSION 3.20)

project(test_xlog)

#预处理时找不到头文件
#编译时找不到XLog的声明，链接错误找不到XLog定义

# 指定头文件查找路径
include_directories("../xlog") #可以找到头文件了

# 指定库文件查找路径
link_directories("../../../build/src/102cmake_lib/xlog")

# 指定加载的库 注意 这句话是在add_executable之后的 
# 因为这指定加载的库属于test_xlog的一种“属性”
# 所以在add_executable之后设定

# 最终目标时这样一句话
add_executable(test_xlog test_xlog.cpp)

# 指定加载的库
target_link_libraries(test_xlog xlog)
# 这里的xlog会根据系统的不同变成libxlog.a或xplog.lib的