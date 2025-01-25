include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(${PROJECT_NAME}Test ${PROJECT_SOURCE_DIR}/Source/MyLib.cpp TestMyLib.cpp)
target_link_libraries(${PROJECT_NAME}Test gtest_main)
target_include_directories(${PROJECT_NAME}Test PUBLIC ${CMAKE_SOURCE_DIR}/Source)
add_test(NAME ${PROJECT_NAME}Test COMMAND ${PROJECT_NAME}Test)
